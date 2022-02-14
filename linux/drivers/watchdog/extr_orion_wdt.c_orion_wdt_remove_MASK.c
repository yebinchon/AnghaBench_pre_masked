
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct platform_device {int dummy; } ;
struct orion_watchdog {int clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct watchdog_device* FUNC_2 (struct platform_device*) ;
 struct orion_watchdog* FUNC_3 (struct watchdog_device*) ;
 int FUNC_4 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct watchdog_device *VAR_1 = FUNC_2(VAR_0);
 struct orion_watchdog *VAR_2 = FUNC_3(VAR_1);

 FUNC_4(VAR_1);
 FUNC_0(VAR_2->clk);
 FUNC_1(VAR_2->clk);
 return 0;
}
