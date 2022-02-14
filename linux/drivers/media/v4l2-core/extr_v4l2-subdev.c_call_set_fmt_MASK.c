
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_format {int dummy; } ;
struct v4l2_subdev {TYPE_2__* ops; } ;
struct TYPE_4__ {TYPE_1__* pad; } ;
struct TYPE_3__ {int (* set_fmt ) (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,struct v4l2_subdev_format*) ;} ;


 scalar_t__ FUNC_0 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,struct v4l2_subdev_format*) ;
 int FUNC_1 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,struct v4l2_subdev_format*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0,
   struct v4l2_subdev_pad_config *VAR_1,
   struct v4l2_subdev_format *VAR_2)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2) ? :
        VAR_0->ops->pad->set_fmt(VAR_0, VAR_1, VAR_2);
}
