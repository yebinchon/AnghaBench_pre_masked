
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct imx7ulp_wdt_device {int base; } ;


 int FUNC_0 (int ,int) ;
 struct imx7ulp_wdt_device* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_0)
{
 struct imx7ulp_wdt_device *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->base, 1);

 return 0;
}
