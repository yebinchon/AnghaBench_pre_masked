
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev_frame_interval {int interval; } ;
struct v4l2_subdev {int dummy; } ;
struct et8ek8_sensor {TYPE_2__* current_reglist; } ;
struct TYPE_3__ {int timeperframe; } ;
struct TYPE_4__ {TYPE_1__ mode; } ;


 int FUNC_0 (struct v4l2_subdev_frame_interval*,int ,int) ;
 struct et8ek8_sensor* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0,
         struct v4l2_subdev_frame_interval *VAR_1)
{
 struct et8ek8_sensor *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->interval = VAR_2->current_reglist->mode.timeperframe;

 return 0;
}
