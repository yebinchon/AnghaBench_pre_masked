
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {unsigned int timeout; } ;
struct omap_wdt_dev {int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct omap_wdt_dev*) ;
 int FUNC_3 (struct omap_wdt_dev*) ;
 int FUNC_4 (struct omap_wdt_dev*) ;
 int FUNC_5 (struct omap_wdt_dev*,unsigned int) ;
 struct omap_wdt_dev* FUNC_6 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_7(struct watchdog_device *VAR_0,
    unsigned int VAR_1)
{
 struct omap_wdt_dev *VAR_2 = FUNC_6(VAR_0);

 FUNC_0(&VAR_2->lock);
 FUNC_2(VAR_2);
 FUNC_5(VAR_2, VAR_1);
 FUNC_3(VAR_2);
 FUNC_4(VAR_2);
 VAR_0->timeout = VAR_1;
 FUNC_1(&VAR_2->lock);

 return 0;
}
