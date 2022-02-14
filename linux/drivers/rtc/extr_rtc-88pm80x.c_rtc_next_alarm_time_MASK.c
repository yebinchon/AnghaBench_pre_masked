
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; } ;


 int FUNC_0 (unsigned long,struct rtc_time*) ;
 unsigned long FUNC_1 (struct rtc_time*) ;

__attribute__((used)) static void FUNC_2(struct rtc_time *VAR_0, struct rtc_time *VAR_1,
    struct rtc_time *VAR_2)
{
 unsigned long VAR_3;
 unsigned long VAR_4;

 VAR_0->tm_year = VAR_1->tm_year;
 VAR_0->tm_mon = VAR_1->tm_mon;
 VAR_0->tm_mday = VAR_1->tm_mday;
 VAR_0->tm_hour = VAR_2->tm_hour;
 VAR_0->tm_min = VAR_2->tm_min;
 VAR_0->tm_sec = VAR_2->tm_sec;

 VAR_4 = FUNC_1(VAR_1);
 VAR_3 = FUNC_1(VAR_0);

 if (VAR_3 < VAR_4) {

  VAR_3 += 60 * 60 * 24;
  FUNC_0(VAR_3, VAR_0);
 }
}
