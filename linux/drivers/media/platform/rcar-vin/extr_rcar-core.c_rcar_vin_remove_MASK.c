
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * v4l2_dev; } ;
struct rvin_dev {int ctrl_handler; TYPE_2__* group; int v4l2_dev; TYPE_1__* info; TYPE_3__ notifier; } ;
struct platform_device {int dev; } ;
struct TYPE_6__ {int lock; TYPE_3__ notifier; } ;
struct TYPE_5__ {scalar_t__ use_mc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct rvin_dev* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct rvin_dev*) ;
 int FUNC_5 (struct rvin_dev*) ;
 int FUNC_6 (struct rvin_dev*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_0)
{
 struct rvin_dev *VAR_1 = FUNC_2(VAR_0);

 FUNC_3(&VAR_0->dev);

 FUNC_6(VAR_1);

 FUNC_8(&VAR_1->notifier);
 FUNC_7(&VAR_1->notifier);

 if (VAR_1->info->use_mc) {
  FUNC_0(&VAR_1->group->lock);
  if (&VAR_1->v4l2_dev == VAR_1->group->notifier.v4l2_dev) {
   FUNC_8(&VAR_1->group->notifier);
   FUNC_7(&VAR_1->group->notifier);
  }
  FUNC_1(&VAR_1->group->lock);
  FUNC_5(VAR_1);
 }

 FUNC_9(&VAR_1->ctrl_handler);

 FUNC_4(VAR_1);

 return 0;
}
