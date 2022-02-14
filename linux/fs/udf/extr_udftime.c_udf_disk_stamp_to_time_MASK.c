
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u16 ;
struct timestamp {int centiseconds; int hundredsOfMicroseconds; int microseconds; int second; int minute; int hour; int day; int month; int year; int typeAndTimezone; } ;
struct timespec64 {int tv_sec; int tv_nsec; } ;
typedef int int16_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ,int ,int ,int ,int ) ;

void
FUNC_2(struct timespec64 *VAR_1, struct timestamp VAR_2)
{
 u16 VAR_3 = FUNC_0(VAR_2.typeAndTimezone);
 u16 VAR_4 = FUNC_0(VAR_2.year);
 uint8_t VAR_5 = VAR_3 >> 12;
 int16_t VAR_6;

 if (VAR_5 == 1) {
  VAR_6 = VAR_3 << 4;

  VAR_6 = (VAR_6 >> 4);
  if (VAR_6 == -2047)
   VAR_6 = 0;
 } else
  VAR_6 = 0;

 VAR_1->tv_sec = FUNC_1(VAR_4, VAR_2.month, VAR_2.day, VAR_2.hour, VAR_2.minute,
   VAR_2.second);
 VAR_1->tv_sec -= VAR_6 * 60;
 VAR_1->tv_nsec = 1000 * (VAR_2.centiseconds * 10000 +
   VAR_2.hundredsOfMicroseconds * 100 + VAR_2.microseconds);




 VAR_1->tv_nsec %= VAR_0;
}
