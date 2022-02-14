
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {int pixelclock; } ;
struct v4l2_dv_timings {TYPE_1__ bt; } ;
struct adv748x_hdmi {int sd; int * pads; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_subdev*,int ) ;
 struct v4l2_subdev* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct v4l2_dv_timings*) ;

__attribute__((used)) static int FUNC_3(struct adv748x_hdmi *VAR_2)
{
 struct v4l2_subdev *VAR_3;
 struct v4l2_dv_timings VAR_4;

 VAR_3 = FUNC_1(&VAR_2->pads[VAR_0]);
 if (!VAR_3)
  return -VAR_1;

 FUNC_2(&VAR_2->sd, &VAR_4);

 return FUNC_0(VAR_3, VAR_4.bt.pixelclock);
}
