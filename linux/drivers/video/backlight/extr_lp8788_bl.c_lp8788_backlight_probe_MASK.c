
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int kobj; int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct lp8788_bl {int bl_dev; int pdata; struct lp8788* lp; } ;
struct lp8788 {int dev; TYPE_1__* pdata; } ;
struct TYPE_3__ {int bl_pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 struct lp8788* FUNC_2 (int ) ;
 struct lp8788_bl* FUNC_3 (int ,int,int ) ;
 int VAR_2 ;
 int FUNC_4 (struct lp8788_bl*) ;
 int FUNC_5 (struct lp8788_bl*) ;
 int FUNC_6 (struct lp8788_bl*) ;
 int FUNC_7 (struct platform_device*,struct lp8788_bl*) ;
 int FUNC_8 (int *,int *) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_3)
{
 struct lp8788 *VAR_4 = FUNC_2(VAR_3->dev.parent);
 struct lp8788_bl *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(VAR_4->dev, sizeof(struct lp8788_bl), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->lp = VAR_4;
 if (VAR_4->pdata)
  VAR_5->pdata = VAR_4->pdata->bl_pdata;

 FUNC_7(VAR_3, VAR_5);

 VAR_6 = FUNC_4(VAR_5);
 if (VAR_6) {
  FUNC_1(VAR_4->dev, "backlight config err: %d\n", VAR_6);
  goto err_dev;
 }

 VAR_6 = FUNC_5(VAR_5);
 if (VAR_6) {
  FUNC_1(VAR_4->dev, "register backlight err: %d\n", VAR_6);
  goto err_dev;
 }

 VAR_6 = FUNC_8(&VAR_3->dev.kobj, &VAR_2);
 if (VAR_6) {
  FUNC_1(VAR_4->dev, "register sysfs err: %d\n", VAR_6);
  goto err_sysfs;
 }

 FUNC_0(VAR_5->bl_dev);

 return 0;

err_sysfs:
 FUNC_6(VAR_5);
err_dev:
 return VAR_6;
}
