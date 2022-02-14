
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct max63xx_wdt {int (* set ) (struct max63xx_wdt*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct max63xx_wdt*,int ) ;
 struct max63xx_wdt* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_1)
{
 struct max63xx_wdt *VAR_2 = FUNC_1(VAR_1);

 VAR_2->set(VAR_2, VAR_0);
 return 0;
}
