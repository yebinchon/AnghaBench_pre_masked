
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_fract {int dummy; } ;
struct v4l2_subdev_frame_interval {struct v4l2_fract interval; } ;
struct v4l2_subdev {int dummy; } ;
struct ov7670_info {TYPE_1__* devtype; } ;
struct TYPE_2__ {int (* set_framerate ) (struct v4l2_subdev*,struct v4l2_fract*) ;} ;


 int FUNC_0 (struct v4l2_subdev*,struct v4l2_fract*) ;
 struct ov7670_info* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0,
       struct v4l2_subdev_frame_interval *VAR_1)
{
 struct v4l2_fract *VAR_2 = &VAR_1->interval;
 struct ov7670_info *VAR_3 = FUNC_1(VAR_0);


 return VAR_3->devtype->set_framerate(VAR_0, VAR_2);
}
