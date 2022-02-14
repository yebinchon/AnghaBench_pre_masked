
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time64_t ;
struct rtc_time {int tm_wday; unsigned int tm_year; int tm_yday; unsigned int tm_mon; int tm_mday; unsigned int tm_hour; unsigned int tm_min; unsigned int tm_sec; scalar_t__ tm_isdst; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int,unsigned int*) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int,unsigned int) ;

void FUNC_4(time64_t VAR_0, struct rtc_time *VAR_1)
{
 unsigned int VAR_2, VAR_3, VAR_4;
 int VAR_5;


 VAR_5 = FUNC_1(VAR_0, 86400, &VAR_4);


 VAR_1->tm_wday = (VAR_5 + 4) % 7;

 VAR_3 = 1970 + VAR_5 / 365;
 VAR_5 -= (VAR_3 - 1970) * 365
  + FUNC_0(VAR_3 - 1)
  - FUNC_0(1970 - 1);
 while (VAR_5 < 0) {
  VAR_3 -= 1;
  VAR_5 += 365 + FUNC_2(VAR_3);
 }
 VAR_1->tm_year = VAR_3 - 1900;
 VAR_1->tm_yday = VAR_5 + 1;

 for (VAR_2 = 0; VAR_2 < 11; VAR_2++) {
  int VAR_6;

  VAR_6 = VAR_5 - FUNC_3(VAR_2, VAR_3);
  if (VAR_6 < 0)
   break;
  VAR_5 = VAR_6;
 }
 VAR_1->tm_mon = VAR_2;
 VAR_1->tm_mday = VAR_5 + 1;

 VAR_1->tm_hour = VAR_4 / 3600;
 VAR_4 -= VAR_1->tm_hour * 3600;
 VAR_1->tm_min = VAR_4 / 60;
 VAR_1->tm_sec = VAR_4 - VAR_1->tm_min * 60;

 VAR_1->tm_isdst = 0;
}
