
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy {int init_count; int mutex; int dev; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* exit ) (struct phy*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct phy*) ;
 int FUNC_4 (struct phy*) ;
 int FUNC_5 (struct phy*) ;

int FUNC_6(struct phy *VAR_1)
{
 int VAR_2;

 if (!VAR_1)
  return 0;

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2 < 0 && VAR_2 != -VAR_0)
  return VAR_2;
 VAR_2 = 0;

 FUNC_1(&VAR_1->mutex);
 if (VAR_1->init_count == 1 && VAR_1->ops->exit) {
  VAR_2 = VAR_1->ops->exit(VAR_1);
  if (VAR_2 < 0) {
   FUNC_0(&VAR_1->dev, "phy exit failed --> %d\n", VAR_2);
   goto out;
  }
 }
 --VAR_1->init_count;

out:
 FUNC_2(&VAR_1->mutex);
 FUNC_4(VAR_1);
 return VAR_2;
}
