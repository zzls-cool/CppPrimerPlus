// stringbad.h -- flawed string class definition

#include <iostream>
#ifndef STRINGBAD_H_
#define STRINGBAD_H_

class StringBad
{
private:
	char* str;
	int len;
	static int num_strings;
public:
	StringBad(const char* s);
	StringBad();// 默认构造函数
	StringBad(const StringBad &st);// 复制构造函数
	~StringBad();// 析构函数
	StringBad &operator=(const StringBad &st);
	friend std::ostream &operator<<(std::ostream &os, const StringBad &st);
};

#endif
