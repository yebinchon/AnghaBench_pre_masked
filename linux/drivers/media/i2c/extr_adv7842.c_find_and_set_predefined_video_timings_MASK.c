
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_dv_timings {int dummy; } ;
struct TYPE_3__ {scalar_t__ width; } ;
struct TYPE_4__ {TYPE_1__ bt; } ;
struct adv7842_video_standards {int v_freq; scalar_t__ vid_std; TYPE_2__ timings; } ;


 int FUNC_0 (struct v4l2_subdev*,int,scalar_t__) ;
 scalar_t__ FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (struct v4l2_dv_timings const*,TYPE_2__*,int,int) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_0,
  u8 VAR_1,
  const struct adv7842_video_standards *VAR_2,
  const struct v4l2_dv_timings *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_2[VAR_4].timings.bt.width; VAR_4++) {
  if (!FUNC_2(VAR_3, &VAR_2[VAR_4].timings,
      FUNC_1(VAR_0) ? 250000 : 1000000, 0))
   continue;

  FUNC_0(VAR_0, 0x00, VAR_2[VAR_4].vid_std);

  FUNC_0(VAR_0, 0x01, (VAR_2[VAR_4].v_freq << 4) + VAR_1);
  return 0;
 }

 return -1;
}
