
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct watchdog_device {int dummy; } ;
struct max63xx_wdt {int (* ping ) (struct max63xx_wdt*) ;TYPE_1__* timeout; int (* set ) (struct max63xx_wdt*,int ) ;} ;
struct TYPE_2__ {scalar_t__ tdelay; int wdset; } ;


 int FUNC_0 (struct max63xx_wdt*,int ) ;
 int FUNC_1 (struct max63xx_wdt*) ;
 struct max63xx_wdt* FUNC_2 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_0)
{
 struct max63xx_wdt *VAR_1 = FUNC_2(VAR_0);

 VAR_1->set(VAR_1, VAR_1->timeout->wdset);


 if (VAR_1->timeout->tdelay == 0)
  VAR_1->ping(VAR_1);
 return 0;
}
