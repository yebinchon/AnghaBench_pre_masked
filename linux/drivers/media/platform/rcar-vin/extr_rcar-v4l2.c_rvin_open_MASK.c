
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int entity; } ;
struct rvin_dev {int dev; int lock; TYPE_2__ vdev; TYPE_1__* info; int ctrl_handler; } ;
struct file {struct rvin_dev* private_data; } ;
struct TYPE_3__ {scalar_t__ use_mc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct rvin_dev*,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct file*) ;
 int FUNC_7 (struct file*) ;
 int FUNC_8 (struct file*) ;
 int FUNC_9 (int *,int) ;
 struct rvin_dev* FUNC_10 (struct file*) ;

__attribute__((used)) static int FUNC_11(struct file *VAR_0)
{
 struct rvin_dev *VAR_1 = FUNC_10(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1->dev);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_2 = FUNC_0(&VAR_1->lock);
 if (VAR_2)
  goto err_pm;

 VAR_0->private_data = VAR_1;

 VAR_2 = FUNC_7(VAR_0);
 if (VAR_2)
  goto err_unlock;

 if (VAR_1->info->use_mc)
  VAR_2 = FUNC_9(&VAR_1->vdev.entity, 1);
 else if (FUNC_6(VAR_0))
  VAR_2 = FUNC_4(VAR_1, 1);

 if (VAR_2 < 0)
  goto err_open;

 VAR_2 = FUNC_5(&VAR_1->ctrl_handler);
 if (VAR_2)
  goto err_power;

 FUNC_1(&VAR_1->lock);

 return 0;
err_power:
 if (VAR_1->info->use_mc)
  FUNC_9(&VAR_1->vdev.entity, 0);
 else if (FUNC_6(VAR_0))
  FUNC_4(VAR_1, 0);
err_open:
 FUNC_8(VAR_0);
err_unlock:
 FUNC_1(&VAR_1->lock);
err_pm:
 FUNC_3(VAR_1->dev);

 return VAR_2;
}
