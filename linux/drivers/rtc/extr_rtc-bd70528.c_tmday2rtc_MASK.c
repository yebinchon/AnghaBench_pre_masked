
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_hour; int tm_min; int tm_sec; } ;
struct bd70528_rtc_day {int hour; int min; int sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct rtc_time *VAR_3, struct bd70528_rtc_day *VAR_4)
{
 VAR_4->sec &= ~VAR_2;
 VAR_4->min &= ~VAR_1;
 VAR_4->hour &= ~VAR_0;
 VAR_4->sec |= FUNC_0(VAR_3->tm_sec);
 VAR_4->min |= FUNC_0(VAR_3->tm_min);
 VAR_4->hour |= FUNC_0(VAR_3->tm_hour);
}
