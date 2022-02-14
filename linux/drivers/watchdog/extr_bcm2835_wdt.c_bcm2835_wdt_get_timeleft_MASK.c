
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct watchdog_device {int dummy; } ;
struct bcm2835_wdt {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 struct bcm2835_wdt* FUNC_2 (struct watchdog_device*) ;

__attribute__((used)) static unsigned int FUNC_3(struct watchdog_device *VAR_2)
{
 struct bcm2835_wdt *VAR_3 = FUNC_2(VAR_2);

 uint32_t VAR_4 = FUNC_1(VAR_3->base + VAR_0);
 return FUNC_0(VAR_4 & VAR_1);
}
