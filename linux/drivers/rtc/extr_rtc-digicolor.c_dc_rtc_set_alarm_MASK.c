
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ time64_t ;
struct rtc_wkalrm {int enabled; int time; } ;
struct device {int dummy; } ;
struct dc_rtc {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct dc_rtc* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_3, struct rtc_wkalrm *VAR_4)
{
 struct dc_rtc *VAR_5 = FUNC_0(VAR_3);
 time64_t VAR_6;
 u32 VAR_7;

 VAR_6 = FUNC_2(&VAR_4->time);

 VAR_7 = FUNC_1(VAR_5->regs + VAR_2);
 FUNC_4(VAR_6 - VAR_7, VAR_5->regs + VAR_0);

 FUNC_3(!!VAR_4->enabled, VAR_5->regs + VAR_1);

 return 0;
}
