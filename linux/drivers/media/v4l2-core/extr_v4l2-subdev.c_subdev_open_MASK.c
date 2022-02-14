
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct video_device {int dummy; } ;
struct v4l2_subdev_fh {int vfh; struct module* owner; } ;
struct TYPE_12__ {TYPE_4__* mdev; } ;
struct TYPE_13__ {TYPE_5__ graph_obj; } ;
struct v4l2_subdev {TYPE_7__* internal_ops; TYPE_6__ entity; TYPE_1__* v4l2_dev; } ;
struct module {int dummy; } ;
struct file {int * private_data; } ;
struct TYPE_14__ {int (* open ) (struct v4l2_subdev*,struct v4l2_subdev_fh*) ;} ;
struct TYPE_11__ {TYPE_3__* dev; } ;
struct TYPE_10__ {TYPE_2__* driver; } ;
struct TYPE_9__ {struct module* owner; } ;
struct TYPE_8__ {scalar_t__ mdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct v4l2_subdev_fh*) ;
 struct v4l2_subdev_fh* FUNC_1 (int,int ) ;
 int FUNC_2 (struct module*) ;
 int FUNC_3 (struct v4l2_subdev*,struct v4l2_subdev_fh*) ;
 int FUNC_4 (struct v4l2_subdev_fh*) ;
 int FUNC_5 (struct v4l2_subdev_fh*,struct v4l2_subdev*) ;
 int FUNC_6 (struct module*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,struct video_device*) ;
 struct v4l2_subdev* FUNC_11 (struct video_device*) ;
 struct video_device* FUNC_12 (struct file*) ;

__attribute__((used)) static int FUNC_13(struct file *VAR_3)
{
 struct video_device *VAR_4 = FUNC_12(VAR_3);
 struct v4l2_subdev *VAR_5 = FUNC_11(VAR_4);
 struct v4l2_subdev_fh *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_2);
 if (VAR_6 == ((void*)0))
  return -VAR_1;

 VAR_7 = FUNC_5(VAR_6, VAR_5);
 if (VAR_7) {
  FUNC_0(VAR_6);
  return VAR_7;
 }

 FUNC_10(&VAR_6->vfh, VAR_4);
 FUNC_7(&VAR_6->vfh);
 VAR_3->private_data = &VAR_6->vfh;
 if (VAR_5->internal_ops && VAR_5->internal_ops->open) {
  VAR_7 = VAR_5->internal_ops->open(VAR_5, VAR_6);
  if (VAR_7 < 0)
   goto err;
 }

 return 0;

err:
 FUNC_2(VAR_6->owner);
 FUNC_8(&VAR_6->vfh);
 FUNC_9(&VAR_6->vfh);
 FUNC_4(VAR_6);
 FUNC_0(VAR_6);

 return VAR_7;
}
