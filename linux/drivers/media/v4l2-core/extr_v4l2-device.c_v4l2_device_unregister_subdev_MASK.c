
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {scalar_t__ devnode; int entity; struct v4l2_device* v4l2_dev; TYPE_1__* internal_ops; int list; } ;
struct v4l2_device {scalar_t__ mdev; int lock; } ;
struct TYPE_2__ {int (* unregistered ) (struct v4l2_subdev*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (struct v4l2_subdev*) ;
 int FUNC_6 (scalar_t__) ;

void FUNC_7(struct v4l2_subdev *VAR_0)
{
 struct v4l2_device *VAR_1;


 if (VAR_0 == ((void*)0) || VAR_0->v4l2_dev == ((void*)0))
  return;

 VAR_1 = VAR_0->v4l2_dev;

 FUNC_2(&VAR_1->lock);
 FUNC_0(&VAR_0->list);
 FUNC_3(&VAR_1->lock);

 if (VAR_0->internal_ops && VAR_0->internal_ops->unregistered)
  VAR_0->internal_ops->unregistered(VAR_0);
 VAR_0->v4l2_dev = ((void*)0);
 if (VAR_0->devnode)
  FUNC_6(VAR_0->devnode);
 else
  FUNC_5(VAR_0);
}
