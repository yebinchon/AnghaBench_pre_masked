
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct max63xx_wdt {int (* ping ) (struct max63xx_wdt*) ;} ;


 int FUNC_0 (struct max63xx_wdt*) ;
 struct max63xx_wdt* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_0)
{
 struct max63xx_wdt *VAR_1 = FUNC_1(VAR_0);

 VAR_1->ping(VAR_1);
 return 0;
}
