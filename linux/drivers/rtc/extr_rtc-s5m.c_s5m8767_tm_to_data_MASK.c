
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_wday; int tm_mday; int tm_mon; int tm_year; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static int FUNC_1(struct rtc_time *VAR_9, u8 *VAR_10)
{
 VAR_10[VAR_6] = VAR_9->tm_sec;
 VAR_10[VAR_4] = VAR_9->tm_min;

 if (VAR_9->tm_hour >= 12)
  VAR_10[VAR_3] = VAR_9->tm_hour | VAR_1;
 else
  VAR_10[VAR_3] = VAR_9->tm_hour & ~VAR_1;

 VAR_10[VAR_7] = 1 << VAR_9->tm_wday;
 VAR_10[VAR_2] = VAR_9->tm_mday;
 VAR_10[VAR_5] = VAR_9->tm_mon + 1;
 VAR_10[VAR_8] = VAR_9->tm_year > 100 ? (VAR_9->tm_year - 100) : 0;

 if (VAR_9->tm_year < 100) {
  FUNC_0("RTC cannot handle the year %d\n",
         1900 + VAR_9->tm_year);
  return -VAR_0;
 } else {
  return 0;
 }
}
