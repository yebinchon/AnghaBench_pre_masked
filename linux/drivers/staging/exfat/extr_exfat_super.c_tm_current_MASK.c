
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time64_t ;
struct tm {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; } ;
struct timestamp_t {int sec; int min; int hour; int day; int mon; int year; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (scalar_t__,int ,struct tm*) ;

struct timestamp_t *FUNC_2(struct timestamp_t *VAR_2)
{
 time64_t VAR_3 = FUNC_0();
 struct tm VAR_4;

 FUNC_1(VAR_3, 0, &VAR_4);

 if (VAR_3 < VAR_0) {
  VAR_2->sec = 0;
  VAR_2->min = 0;
  VAR_2->hour = 0;
  VAR_2->day = 1;
  VAR_2->mon = 1;
  VAR_2->year = 0;
  return VAR_2;
 }

 if (VAR_3 >= VAR_1) {
  VAR_2->sec = 59;
  VAR_2->min = 59;
  VAR_2->hour = 23;
  VAR_2->day = 31;
  VAR_2->mon = 12;
  VAR_2->year = 127;
  return VAR_2;
 }

 VAR_2->sec = VAR_4.tm_sec;
 VAR_2->min = VAR_4.tm_min;
 VAR_2->hour = VAR_4.tm_hour;
 VAR_2->day = VAR_4.tm_mday;
 VAR_2->mon = VAR_4.tm_mon + 1;
 VAR_2->year = VAR_4.tm_year + 1900 - 1980;

 return VAR_2;
}
