
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time64_t ;
struct rtc_time {int tm_mon; int tm_mday; } ;


 int FUNC_0 (struct rtc_time*) ;
 int FUNC_1 (int,struct rtc_time*) ;
 int FUNC_2 (struct rtc_time*) ;

__attribute__((used)) static void FUNC_3(struct rtc_time *VAR_0)
{
 time64_t VAR_1 = FUNC_0(VAR_0);
 time64_t VAR_2 = FUNC_2(VAR_0);
 FUNC_1(VAR_2 - VAR_1 * 86400, VAR_0);


 if (FUNC_0(VAR_0) < VAR_1) {
  if (VAR_0->tm_mon + 1 == 11)
   VAR_0->tm_mday++;
  else
   FUNC_1(VAR_2 - (VAR_1 - 1) * 86400, VAR_0);
 }
}
