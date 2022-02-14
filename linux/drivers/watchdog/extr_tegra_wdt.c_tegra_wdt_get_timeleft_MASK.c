
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct watchdog_device {int timeout; } ;
struct tegra_wdt {scalar_t__ wdt_regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 struct tegra_wdt* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static unsigned int FUNC_2(struct watchdog_device *VAR_5)
{
 struct tegra_wdt *VAR_6 = FUNC_1(VAR_5);
 u32 VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_7 = FUNC_0(VAR_6->wdt_regs + VAR_0);


 VAR_8 = (VAR_7 >> VAR_2) & VAR_1;


 VAR_9 = (VAR_7 >> VAR_4) & VAR_3;





 return (((3 - VAR_9) * VAR_5->timeout) + VAR_8) / 4;
}
