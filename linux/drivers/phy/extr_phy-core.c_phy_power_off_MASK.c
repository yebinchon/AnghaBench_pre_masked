
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy {int power_count; scalar_t__ pwr; int mutex; int dev; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* power_off ) (struct phy*) ;} ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct phy*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct phy*) ;

int FUNC_6(struct phy *VAR_0)
{
 int VAR_1;

 if (!VAR_0)
  return 0;

 FUNC_1(&VAR_0->mutex);
 if (VAR_0->power_count == 1 && VAR_0->ops->power_off) {
  VAR_1 = VAR_0->ops->power_off(VAR_0);
  if (VAR_1 < 0) {
   FUNC_0(&VAR_0->dev, "phy poweroff failed --> %d\n", VAR_1);
   FUNC_2(&VAR_0->mutex);
   return VAR_1;
  }
 }
 --VAR_0->power_count;
 FUNC_2(&VAR_0->mutex);
 FUNC_3(VAR_0);

 if (VAR_0->pwr)
  FUNC_4(VAR_0->pwr);

 return 0;
}
