
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {int dummy; } ;
struct v4l2_subdev_fh {int owner; } ;
struct v4l2_subdev {TYPE_1__* internal_ops; } ;
struct v4l2_fh {int dummy; } ;
struct file {struct v4l2_fh* private_data; } ;
struct TYPE_2__ {int (* close ) (struct v4l2_subdev*,struct v4l2_subdev_fh*) ;} ;


 int FUNC_0 (struct v4l2_subdev_fh*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct v4l2_subdev*,struct v4l2_subdev_fh*) ;
 int FUNC_3 (struct v4l2_subdev_fh*) ;
 struct v4l2_subdev_fh* FUNC_4 (struct v4l2_fh*) ;
 int FUNC_5 (struct v4l2_fh*) ;
 int FUNC_6 (struct v4l2_fh*) ;
 struct v4l2_subdev* FUNC_7 (struct video_device*) ;
 struct video_device* FUNC_8 (struct file*) ;

__attribute__((used)) static int FUNC_9(struct file *VAR_0)
{
 struct video_device *VAR_1 = FUNC_8(VAR_0);
 struct v4l2_subdev *VAR_2 = FUNC_7(VAR_1);
 struct v4l2_fh *VAR_3 = VAR_0->private_data;
 struct v4l2_subdev_fh *VAR_4 = FUNC_4(VAR_3);

 if (VAR_2->internal_ops && VAR_2->internal_ops->close)
  VAR_2->internal_ops->close(VAR_2, VAR_4);
 FUNC_1(VAR_4->owner);
 FUNC_5(VAR_3);
 FUNC_6(VAR_3);
 FUNC_3(VAR_4);
 FUNC_0(VAR_4);
 VAR_0->private_data = ((void*)0);

 return 0;
}
