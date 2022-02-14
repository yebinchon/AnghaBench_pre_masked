
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(u8 *VAR_1, struct rtc_time *VAR_2)
{
 VAR_2->tm_sec = FUNC_0(VAR_1[0] & 0x7F);
 VAR_2->tm_min = FUNC_0(VAR_1[1] & 0x7F);
 VAR_2->tm_hour = FUNC_0(VAR_1[2] & 0x3F);
 VAR_2->tm_mday = FUNC_0(VAR_1[3] & 0x3F);
 VAR_2->tm_mon = FUNC_0(VAR_1[4] & 0x1F) - 1;
 VAR_2->tm_year = (VAR_0 - 1900) + FUNC_0(VAR_1[5] & 0x7F);
 return;
}
