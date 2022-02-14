
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * ctrl_handler; } ;
struct rvin_dev {TYPE_3__ vdev; int ctrl_handler; TYPE_2__* info; TYPE_1__* parallel; } ;
struct TYPE_5__ {int use_mc; } ;
struct TYPE_4__ {int * subdev; } ;


 int FUNC_0 (struct rvin_dev*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct rvin_dev *VAR_0)
{
 FUNC_0(VAR_0);
 VAR_0->parallel->subdev = ((void*)0);

 if (!VAR_0->info->use_mc) {
  FUNC_1(&VAR_0->ctrl_handler);
  VAR_0->vdev.ctrl_handler = ((void*)0);
 }
}
