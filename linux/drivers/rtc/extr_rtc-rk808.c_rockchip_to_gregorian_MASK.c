
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time64_t ;
struct rtc_time {int dummy; } ;


 int FUNC_0 (struct rtc_time*) ;
 int FUNC_1 (scalar_t__,struct rtc_time*) ;
 scalar_t__ FUNC_2 (struct rtc_time*) ;

__attribute__((used)) static void FUNC_3(struct rtc_time *VAR_0)
{

 time64_t VAR_1 = FUNC_2(VAR_0);
 FUNC_1(VAR_1 + FUNC_0(VAR_0) * 86400, VAR_0);
}
