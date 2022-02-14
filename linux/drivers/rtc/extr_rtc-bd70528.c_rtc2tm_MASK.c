
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtc_time {int tm_hour; void* tm_wday; void* tm_year; void* tm_mon; void* tm_mday; void* tm_min; void* tm_sec; } ;
struct TYPE_2__ {int sec; int min; int hour; } ;
struct bd70528_rtc_data {int day; int month; int year; int week; TYPE_1__ time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(struct bd70528_rtc_data *VAR_9, struct rtc_time *VAR_10)
{
 VAR_10->tm_sec = FUNC_0(VAR_9->time.sec & VAR_6);
 VAR_10->tm_min = FUNC_0(VAR_9->time.min & VAR_4);
 VAR_10->tm_hour = FUNC_0(VAR_9->time.hour & VAR_1);




 if (!(VAR_9->time.hour & VAR_2)) {
  VAR_10->tm_hour %= 12;
  if (VAR_9->time.hour & VAR_3)
   VAR_10->tm_hour += 12;
 }
 VAR_10->tm_mday = FUNC_0(VAR_9->day & VAR_0);
 VAR_10->tm_mon = FUNC_0(VAR_9->month & VAR_5) - 1;
 VAR_10->tm_year = 100 + FUNC_0(VAR_9->year & VAR_8);
 VAR_10->tm_wday = FUNC_0(VAR_9->week & VAR_7);
}
