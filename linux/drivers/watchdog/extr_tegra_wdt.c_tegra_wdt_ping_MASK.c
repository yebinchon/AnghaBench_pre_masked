
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct tegra_wdt {scalar_t__ wdt_regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct tegra_wdt* FUNC_0 (struct watchdog_device*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_2)
{
 struct tegra_wdt *VAR_3 = FUNC_0(VAR_2);

 FUNC_1(VAR_1, VAR_3->wdt_regs + VAR_0);

 return 0;
}
