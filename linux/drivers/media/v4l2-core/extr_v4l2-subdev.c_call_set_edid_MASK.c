
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev_edid {int dummy; } ;
struct v4l2_subdev {TYPE_2__* ops; } ;
struct TYPE_4__ {TYPE_1__* pad; } ;
struct TYPE_3__ {int (* set_edid ) (struct v4l2_subdev*,struct v4l2_subdev_edid*) ;} ;


 scalar_t__ FUNC_0 (struct v4l2_subdev*,struct v4l2_subdev_edid*) ;
 int FUNC_1 (struct v4l2_subdev*,struct v4l2_subdev_edid*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0, struct v4l2_subdev_edid *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1) ? : VAR_0->ops->pad->set_edid(VAR_0, VAR_1);
}
