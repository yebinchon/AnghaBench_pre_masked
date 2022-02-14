
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_frame_interval {int interval; } ;
struct v4l2_subdev {int dummy; } ;
struct ov7670_info {TYPE_1__* devtype; } ;
struct TYPE_2__ {int (* get_framerate ) (struct v4l2_subdev*,int *) ;} ;


 int FUNC_0 (struct v4l2_subdev*,int *) ;
 struct ov7670_info* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0,
       struct v4l2_subdev_frame_interval *VAR_1)
{
 struct ov7670_info *VAR_2 = FUNC_1(VAR_0);


 VAR_2->devtype->get_framerate(VAR_0, &VAR_1->interval);

 return 0;
}
