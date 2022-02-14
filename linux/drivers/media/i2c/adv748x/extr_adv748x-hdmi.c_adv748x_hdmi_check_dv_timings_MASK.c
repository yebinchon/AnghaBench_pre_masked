
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_dv_timings {int dummy; } ;
struct TYPE_3__ {scalar_t__ width; } ;
struct TYPE_4__ {TYPE_1__ bt; } ;
struct adv748x_hdmi_video_standards {TYPE_2__ timings; } ;


 struct adv748x_hdmi_video_standards* VAR_0 ;
 scalar_t__ FUNC_0 (struct v4l2_dv_timings const*,TYPE_2__*,int ,int) ;

__attribute__((used)) static bool FUNC_1(const struct v4l2_dv_timings *VAR_1,
       void *VAR_2)
{
 const struct adv748x_hdmi_video_standards *VAR_3 =
  VAR_0;
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_3[VAR_4].timings.bt.width; VAR_4++)
  if (FUNC_0(VAR_1, &VAR_3[VAR_4].timings, 0, 0))
   return 1;

 return 0;
}
