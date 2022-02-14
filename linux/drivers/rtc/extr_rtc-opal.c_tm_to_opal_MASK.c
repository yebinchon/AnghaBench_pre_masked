
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct rtc_time {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct rtc_time *VAR_0, u32 *VAR_1, u64 *VAR_2)
{
 *VAR_1 |= ((u32)FUNC_0((VAR_0->tm_year + 1900) / 100)) << 24;
 *VAR_1 |= ((u32)FUNC_0((VAR_0->tm_year + 1900) % 100)) << 16;
 *VAR_1 |= ((u32)FUNC_0((VAR_0->tm_mon + 1))) << 8;
 *VAR_1 |= ((u32)FUNC_0(VAR_0->tm_mday));

 *VAR_2 |= ((u64)FUNC_0(VAR_0->tm_hour)) << 56;
 *VAR_2 |= ((u64)FUNC_0(VAR_0->tm_min)) << 48;
 *VAR_2 |= ((u64)FUNC_0(VAR_0->tm_sec)) << 40;
}
