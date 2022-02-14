
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev_frame_interval {int dummy; } ;
struct v4l2_subdev {TYPE_2__* ops; } ;
struct TYPE_4__ {TYPE_1__* video; } ;
struct TYPE_3__ {int (* g_frame_interval ) (struct v4l2_subdev*,struct v4l2_subdev_frame_interval*) ;} ;


 scalar_t__ FUNC_0 (struct v4l2_subdev*,struct v4l2_subdev_frame_interval*) ;
 int FUNC_1 (struct v4l2_subdev*,struct v4l2_subdev_frame_interval*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0,
     struct v4l2_subdev_frame_interval *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1) ? :
        VAR_0->ops->video->g_frame_interval(VAR_0, VAR_1);
}
