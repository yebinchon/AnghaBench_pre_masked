
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct watchdog_device {int dummy; } ;
struct TYPE_2__ {unsigned int timeout; } ;
struct pdc_wdt_dev {TYPE_1__ wdt_dev; } ;


 int FUNC_0 (struct pdc_wdt_dev*) ;
 struct pdc_wdt_dev* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_0,
          unsigned int VAR_1)
{
 struct pdc_wdt_dev *VAR_2 = FUNC_1(VAR_0);

 VAR_2->wdt_dev.timeout = VAR_1;

 FUNC_0(VAR_2);

 return 0;
}
