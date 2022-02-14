
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct bcm2835_wdt {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct bcm2835_wdt* FUNC_0 (struct watchdog_device*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_3)
{
 struct bcm2835_wdt *VAR_4 = FUNC_0(VAR_3);

 FUNC_1(VAR_0 | VAR_2, VAR_4->base + VAR_1);
 return 0;
}
