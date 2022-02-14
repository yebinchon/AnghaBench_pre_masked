
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int timeout; } ;
struct bcm47xx_wdt {int soft_ticks; } ;


 int FUNC_0 (int *,int ) ;
 struct bcm47xx_wdt* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_0)
{
 struct bcm47xx_wdt *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->soft_ticks, VAR_0->timeout);

 return 0;
}
