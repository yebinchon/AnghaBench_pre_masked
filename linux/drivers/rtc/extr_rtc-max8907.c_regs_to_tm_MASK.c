
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int tm_year; int tm_mon; int tm_mday; int tm_wday; int tm_hour; int tm_min; int tm_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(u8 *VAR_10, struct rtc_time *VAR_11)
{
 VAR_11->tm_year = FUNC_0(VAR_10[VAR_9]) * 100 +
  FUNC_0(VAR_10[VAR_8]) - 1900;
 VAR_11->tm_mon = FUNC_0(VAR_10[VAR_5] & 0x1f) - 1;
 VAR_11->tm_mday = FUNC_0(VAR_10[VAR_2] & 0x3f);
 VAR_11->tm_wday = (VAR_10[VAR_7] & 0x07);
 if (VAR_10[VAR_3] & VAR_0) {
  VAR_11->tm_hour = FUNC_0(VAR_10[VAR_3] & 0x01f);
  if (VAR_11->tm_hour == 12)
   VAR_11->tm_hour = 0;
  if (VAR_10[VAR_3] & VAR_1)
   VAR_11->tm_hour += 12;
 } else {
  VAR_11->tm_hour = FUNC_0(VAR_10[VAR_3] & 0x03f);
 }
 VAR_11->tm_min = FUNC_0(VAR_10[VAR_4] & 0x7f);
 VAR_11->tm_sec = FUNC_0(VAR_10[VAR_6] & 0x7f);
}
