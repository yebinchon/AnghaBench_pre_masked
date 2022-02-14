
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time64_t ;
struct rtc_time {int tm_year; int tm_mon; } ;



__attribute__((used)) static time64_t FUNC_0(struct rtc_time *VAR_0)
{
 return (VAR_0->tm_year + 1900) - 2016 + (VAR_0->tm_mon + 1 > 11 ? 1 : 0);
}
