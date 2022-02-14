
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct imx7ulp_wdt_device {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct imx7ulp_wdt_device* FUNC_0 (struct watchdog_device*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_2)
{
 struct imx7ulp_wdt_device *VAR_3 = FUNC_0(VAR_2);

 FUNC_1(VAR_0, VAR_3->base + VAR_1);

 return 0;
}
