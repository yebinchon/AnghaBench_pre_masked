
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct bcm2835_wdt {int dummy; } ;


 int FUNC_0 (struct bcm2835_wdt*) ;
 struct bcm2835_wdt* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_0,
      unsigned long VAR_1, void *VAR_2)
{
 struct bcm2835_wdt *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_3);

 return 0;
}
