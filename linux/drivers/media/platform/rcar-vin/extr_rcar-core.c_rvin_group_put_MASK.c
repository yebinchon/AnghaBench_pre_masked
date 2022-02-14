
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rvin_group {int refcount; int lock; struct rvin_dev** vin; } ;
struct TYPE_2__ {int * mdev; } ;
struct rvin_dev {size_t id; TYPE_1__ v4l2_dev; struct rvin_group* group; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct rvin_dev *VAR_1)
{
 struct rvin_group *VAR_2 = VAR_1->group;

 FUNC_2(&VAR_2->lock);

 VAR_1->group = ((void*)0);
 VAR_1->v4l2_dev.mdev = ((void*)0);

 if (FUNC_0(VAR_2->vin[VAR_1->id] != VAR_1))
  goto out;

 VAR_2->vin[VAR_1->id] = ((void*)0);
out:
 FUNC_3(&VAR_2->lock);

 FUNC_1(&VAR_2->refcount, VAR_0);
}
