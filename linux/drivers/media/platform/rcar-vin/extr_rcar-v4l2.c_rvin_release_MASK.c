
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int entity; } ;
struct rvin_dev {int dev; int lock; TYPE_2__ vdev; TYPE_1__* info; } ;
struct file {int dummy; } ;
struct TYPE_3__ {scalar_t__ use_mc; } ;


 int FUNC_0 (struct file*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct rvin_dev*,int) ;
 int FUNC_5 (struct file*) ;
 int FUNC_6 (int *,int ) ;
 struct rvin_dev* FUNC_7 (struct file*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_0)
{
 struct rvin_dev *VAR_1 = FUNC_7(VAR_0);
 bool VAR_2;
 int VAR_3;

 FUNC_1(&VAR_1->lock);


 VAR_2 = FUNC_5(VAR_0);


 VAR_3 = FUNC_0(VAR_0, ((void*)0));

 if (VAR_1->info->use_mc) {
  FUNC_6(&VAR_1->vdev.entity, 0);
 } else {
  if (VAR_2)
   FUNC_4(VAR_1, 0);
 }

 FUNC_2(&VAR_1->lock);

 FUNC_3(VAR_1->dev);

 return VAR_3;
}
