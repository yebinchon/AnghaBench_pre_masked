
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtc_time {int tm_hour; int tm_min; int tm_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u32 FUNC_2(struct rtc_time *VAR_3)
{
 return FUNC_0(VAR_2, FUNC_1(VAR_3->tm_sec))
      | FUNC_0(VAR_1, FUNC_1(VAR_3->tm_min))
      | FUNC_0(VAR_0, FUNC_1(VAR_3->tm_hour));
}
