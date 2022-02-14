
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtc_time {int tm_mday; int tm_wday; int tm_hour; int tm_min; int tm_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static u32 FUNC_0(struct rtc_time *VAR_6)
{
 return ((((VAR_6->tm_mday + 6) / 7) << VAR_5) & VAR_4)
  | (((VAR_6->tm_wday + 1) << VAR_1) & VAR_0)
  | (VAR_6->tm_hour << VAR_2)
  | (VAR_6->tm_min << VAR_3)
  | VAR_6->tm_sec;
}
