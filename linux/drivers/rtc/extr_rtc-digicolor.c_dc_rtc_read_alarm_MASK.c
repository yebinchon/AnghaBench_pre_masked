
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct rtc_wkalrm {int pending; void* enabled; int time; } ;
struct device {int dummy; } ;
struct dc_rtc {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct dc_rtc*,unsigned long*) ;
 struct dc_rtc* FUNC_1 (struct device*) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned long,int *) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_3, struct rtc_wkalrm *VAR_4)
{
 struct dc_rtc *VAR_5 = FUNC_1(VAR_3);
 u32 VAR_6, VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 VAR_6 = FUNC_2(VAR_5->regs + VAR_0);
 VAR_7 = FUNC_2(VAR_5->regs + VAR_2);
 FUNC_3(VAR_7 + VAR_6, &VAR_4->time);

 VAR_9 = FUNC_0(VAR_5, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_4->pending = VAR_6 + VAR_7 > VAR_8;
 VAR_4->enabled = FUNC_2(VAR_5->regs + VAR_1);

 return 0;
}
