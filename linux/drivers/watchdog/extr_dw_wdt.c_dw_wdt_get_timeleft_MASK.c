
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct dw_wdt {unsigned int rate; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (scalar_t__) ;
 struct dw_wdt* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static unsigned int FUNC_2(struct watchdog_device *VAR_1)
{
 struct dw_wdt *VAR_2 = FUNC_1(VAR_1);

 return FUNC_0(VAR_2->regs + VAR_0) /
  VAR_2->rate;
}
