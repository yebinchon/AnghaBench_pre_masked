
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy {scalar_t__ power_count; scalar_t__ pwr; int mutex; int dev; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* power_on ) (struct phy*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct phy*) ;
 int FUNC_4 (struct phy*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct phy*) ;

int FUNC_8(struct phy *VAR_1)
{
 int VAR_2 = 0;

 if (!VAR_1)
  goto out;

 if (VAR_1->pwr) {
  VAR_2 = FUNC_6(VAR_1->pwr);
  if (VAR_2)
   goto out;
 }

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2 < 0 && VAR_2 != -VAR_0)
  goto err_pm_sync;

 VAR_2 = 0;

 FUNC_1(&VAR_1->mutex);
 if (VAR_1->power_count == 0 && VAR_1->ops->power_on) {
  VAR_2 = VAR_1->ops->power_on(VAR_1);
  if (VAR_2 < 0) {
   FUNC_0(&VAR_1->dev, "phy poweron failed --> %d\n", VAR_2);
   goto err_pwr_on;
  }
 }
 ++VAR_1->power_count;
 FUNC_2(&VAR_1->mutex);
 return 0;

err_pwr_on:
 FUNC_2(&VAR_1->mutex);
 FUNC_4(VAR_1);
err_pm_sync:
 if (VAR_1->pwr)
  FUNC_5(VAR_1->pwr);
out:
 return VAR_2;
}
