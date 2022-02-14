
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct watchdog_device {int timeout; } ;
struct tegra_wdt {scalar_t__ wdt_regs; scalar_t__ tmr_regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct tegra_wdt* FUNC_0 (struct watchdog_device*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_9)
{
 struct tegra_wdt *VAR_10 = FUNC_0(VAR_9);
 u32 VAR_11;







 VAR_11 = 1000000ul / 4;
 VAR_11 |= (VAR_0 | VAR_1);
 FUNC_1(VAR_11, VAR_10->tmr_regs + VAR_2);
 VAR_11 = VAR_8 |
       (VAR_9->timeout << VAR_4) |
       VAR_5;
 FUNC_1(VAR_11, VAR_10->wdt_regs + VAR_3);

 FUNC_1(VAR_7, VAR_10->wdt_regs + VAR_6);

 return 0;
}
