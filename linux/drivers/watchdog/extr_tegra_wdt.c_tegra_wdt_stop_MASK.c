
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct tegra_wdt {scalar_t__ tmr_regs; scalar_t__ wdt_regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct tegra_wdt* FUNC_0 (struct watchdog_device*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_5)
{
 struct tegra_wdt *VAR_6 = FUNC_0(VAR_5);

 FUNC_1(VAR_4, VAR_6->wdt_regs + VAR_3);
 FUNC_1(VAR_2, VAR_6->wdt_regs + VAR_1);
 FUNC_1(0, VAR_6->tmr_regs + VAR_0);

 return 0;
}
