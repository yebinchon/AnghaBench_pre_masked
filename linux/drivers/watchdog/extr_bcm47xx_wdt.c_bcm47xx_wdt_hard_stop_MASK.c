
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct bcm47xx_wdt {int (* timer_set ) (struct bcm47xx_wdt*,int ) ;} ;


 struct bcm47xx_wdt* FUNC_0 (struct watchdog_device*) ;
 int FUNC_1 (struct bcm47xx_wdt*,int ) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_0)
{
 struct bcm47xx_wdt *VAR_1 = FUNC_0(VAR_0);

 VAR_1->timer_set(VAR_1, 0);

 return 0;
}
