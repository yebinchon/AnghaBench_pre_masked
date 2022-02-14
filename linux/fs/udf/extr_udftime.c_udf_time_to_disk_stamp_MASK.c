
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time64_t ;
struct tm {int tm_year; int tm_sec; int tm_min; int tm_hour; int tm_mday; scalar_t__ tm_mon; } ;
struct timestamp {int centiseconds; int hundredsOfMicroseconds; int microseconds; int second; int minute; int hour; int day; scalar_t__ month; void* year; void* typeAndTimezone; } ;
struct timespec64 {int tv_nsec; scalar_t__ tv_sec; } ;
typedef int int16_t ;
struct TYPE_2__ {int tz_minuteswest; } ;


 void* FUNC_0 (int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (scalar_t__,int ,struct tm*) ;

void
FUNC_2(struct timestamp *VAR_1, struct timespec64 VAR_2)
{
 time64_t VAR_3;
 int16_t VAR_4;
 struct tm VAR_5;

 VAR_4 = -VAR_0.tz_minuteswest;

 VAR_1->typeAndTimezone = FUNC_0(0x1000 | (VAR_4 & 0x0FFF));

 VAR_3 = VAR_2.tv_sec + VAR_4 * 60;
 FUNC_1(VAR_3, 0, &VAR_5);
 VAR_1->year = FUNC_0(VAR_5.tm_year + 1900);
 VAR_1->month = VAR_5.tm_mon + 1;
 VAR_1->day = VAR_5.tm_mday;
 VAR_1->hour = VAR_5.tm_hour;
 VAR_1->minute = VAR_5.tm_min;
 VAR_1->second = VAR_5.tm_sec;
 VAR_1->centiseconds = VAR_2.tv_nsec / 10000000;
 VAR_1->hundredsOfMicroseconds = (VAR_2.tv_nsec / 1000 -
     VAR_1->centiseconds * 10000) / 100;
 VAR_1->microseconds = (VAR_2.tv_nsec / 1000 - VAR_1->centiseconds * 10000 -
         VAR_1->hundredsOfMicroseconds * 100);
}
