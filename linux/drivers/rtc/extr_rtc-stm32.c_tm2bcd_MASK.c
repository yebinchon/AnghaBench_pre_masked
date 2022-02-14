
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_wday; void* tm_year; void* tm_mon; void* tm_mday; void* tm_hour; void* tm_min; void* tm_sec; } ;


 void* FUNC_0 (void*) ;

__attribute__((used)) static void FUNC_1(struct rtc_time *VAR_0)
{
 VAR_0->tm_sec = FUNC_0(VAR_0->tm_sec);
 VAR_0->tm_min = FUNC_0(VAR_0->tm_min);
 VAR_0->tm_hour = FUNC_0(VAR_0->tm_hour);

 VAR_0->tm_mday = FUNC_0(VAR_0->tm_mday);
 VAR_0->tm_mon = FUNC_0(VAR_0->tm_mon + 1);
 VAR_0->tm_year = FUNC_0(VAR_0->tm_year - 100);





 VAR_0->tm_wday = (!VAR_0->tm_wday) ? 7 : VAR_0->tm_wday;
}
