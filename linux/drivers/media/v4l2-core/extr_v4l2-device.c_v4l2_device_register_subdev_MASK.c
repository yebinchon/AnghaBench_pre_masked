
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct media_entity {int dummy; } ;
struct v4l2_subdev {int owner_v4l2_dev; scalar_t__ owner; struct v4l2_device* v4l2_dev; int list; TYPE_3__* internal_ops; int ctrl_handler; int * name; struct media_entity entity; } ;
struct v4l2_device {int lock; int subdevs; scalar_t__ mdev; int ctrl_handler; TYPE_2__* dev; } ;
struct TYPE_6__ {int (* registered ) (struct v4l2_subdev*) ;} ;
struct TYPE_5__ {TYPE_1__* driver; } ;
struct TYPE_4__ {scalar_t__ owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (scalar_t__,struct media_entity*) ;
 int FUNC_2 (struct media_entity*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct v4l2_subdev*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,int ,int *,int) ;

int FUNC_9(struct v4l2_device *VAR_2,
    struct v4l2_subdev *VAR_3)
{



 int VAR_4;


 if (!VAR_2 || !VAR_3 || VAR_3->v4l2_dev || !VAR_3->name[0])
  return -VAR_0;
 VAR_3->owner_v4l2_dev = VAR_2->dev && VAR_2->dev->driver &&
  VAR_3->owner == VAR_2->dev->driver->owner;

 if (!VAR_3->owner_v4l2_dev && !FUNC_7(VAR_3->owner))
  return -VAR_1;

 VAR_3->v4l2_dev = VAR_2;

 VAR_4 = FUNC_8(VAR_2->ctrl_handler, VAR_3->ctrl_handler,
        ((void*)0), 1);
 if (VAR_4)
  goto error_module;
 if (VAR_3->internal_ops && VAR_3->internal_ops->registered) {
  VAR_4 = VAR_3->internal_ops->registered(VAR_3);
  if (VAR_4)
   goto error_unregister;
 }

 FUNC_4(&VAR_2->lock);
 FUNC_0(&VAR_3->list, &VAR_2->subdevs);
 FUNC_5(&VAR_2->lock);

 return 0;

error_unregister:



error_module:
 if (!VAR_3->owner_v4l2_dev)
  FUNC_3(VAR_3->owner);
 VAR_3->v4l2_dev = ((void*)0);
 return VAR_4;
}
