
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time64_t ;
struct tm {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; } ;
struct timespec64 {scalar_t__ tv_sec; int tv_nsec; } ;
struct date_time_t {int MilliSecond; int Second; int Minute; int Hour; int Day; int Month; int Year; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,int ,struct tm*) ;

__attribute__((used)) static void FUNC_1(struct timespec64 *VAR_3, struct date_time_t *VAR_4)
{
 time64_t VAR_5 = VAR_3->tv_sec;
 struct tm VAR_6;

 FUNC_0(VAR_5, 0, &VAR_6);

 if (VAR_5 < VAR_1) {
  VAR_4->MilliSecond = 0;
  VAR_4->Second = 0;
  VAR_4->Minute = 0;
  VAR_4->Hour = 0;
  VAR_4->Day = 1;
  VAR_4->Month = 1;
  VAR_4->Year = 0;
  return;
 }

 if (VAR_5 >= VAR_2) {
  VAR_4->MilliSecond = 999;
  VAR_4->Second = 59;
  VAR_4->Minute = 59;
  VAR_4->Hour = 23;
  VAR_4->Day = 31;
  VAR_4->Month = 12;
  VAR_4->Year = 127;
  return;
 }

 VAR_4->MilliSecond = VAR_3->tv_nsec / VAR_0;
 VAR_4->Second = VAR_6.tm_sec;
 VAR_4->Minute = VAR_6.tm_min;
 VAR_4->Hour = VAR_6.tm_hour;
 VAR_4->Day = VAR_6.tm_mday;
 VAR_4->Month = VAR_6.tm_mon + 1;
 VAR_4->Year = VAR_6.tm_year + 1900 - 1980;
}
