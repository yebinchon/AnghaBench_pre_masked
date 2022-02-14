
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct omap_wdt_dev {int lock; int dev; scalar_t__ omap_wdt_users; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct omap_wdt_dev*) ;
 struct omap_wdt_dev* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct platform_device *VAR_0)
{
 struct omap_wdt_dev *VAR_1 = FUNC_3(VAR_0);

 FUNC_0(&VAR_1->lock);
 if (VAR_1->omap_wdt_users) {
  FUNC_2(VAR_1);
  FUNC_4(VAR_1->dev);
 }
 FUNC_1(&VAR_1->lock);
}
