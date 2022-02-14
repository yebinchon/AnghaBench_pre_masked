
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtc_time {scalar_t__ tm_year; scalar_t__ tm_mon; scalar_t__ tm_wday; scalar_t__ tm_mday; } ;
struct TYPE_2__ {int hour; } ;
struct bd70528_rtc_data {int year; int month; int week; int day; TYPE_1__ time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct rtc_time*,TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_2(struct rtc_time *VAR_5, struct bd70528_rtc_data *VAR_6)
{
 VAR_6->day &= ~VAR_0;
 VAR_6->week &= ~VAR_4;
 VAR_6->month &= ~VAR_3;




 VAR_6->time.hour &= ~(VAR_2 | VAR_1);

 FUNC_1(VAR_5, &VAR_6->time);



 VAR_6->time.hour |= VAR_1;
 VAR_6->day |= FUNC_0(VAR_5->tm_mday);
 VAR_6->week |= FUNC_0(VAR_5->tm_wday);
 VAR_6->month |= FUNC_0(VAR_5->tm_mon + 1);
 VAR_6->year = FUNC_0(VAR_5->tm_year - 100);
}
