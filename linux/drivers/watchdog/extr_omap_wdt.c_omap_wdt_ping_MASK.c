
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct omap_wdt_dev {int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct omap_wdt_dev*) ;
 struct omap_wdt_dev* FUNC_3 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_4(struct watchdog_device *VAR_0)
{
 struct omap_wdt_dev *VAR_1 = FUNC_3(VAR_0);

 FUNC_0(&VAR_1->lock);
 FUNC_2(VAR_1);
 FUNC_1(&VAR_1->lock);

 return 0;
}
