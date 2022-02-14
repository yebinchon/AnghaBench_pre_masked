
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_dv_timings {int dummy; } ;
struct adv748x_state {int dummy; } ;
struct adv748x_hdmi_video_standards {int vid_std; int v_freq; int timings; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (struct adv748x_hdmi_video_standards*) ;
 int VAR_4 ;
 int FUNC_1 (struct adv748x_state*,int) ;
 struct adv748x_hdmi_video_standards* VAR_5 ;
 int FUNC_2 (struct adv748x_state*,int ,int ,int) ;
 int FUNC_3 (struct adv748x_state*,int ,int) ;
 int FUNC_4 (struct v4l2_dv_timings const*,int *,int,int) ;

__attribute__((used)) static int FUNC_5(struct adv748x_state *VAR_6,
       const struct v4l2_dv_timings *VAR_7)
{
 const struct adv748x_hdmi_video_standards *VAR_8 =
  VAR_5;
 unsigned int VAR_9;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_5); VAR_9++) {
  if (!FUNC_4(VAR_7, &VAR_8[VAR_9].timings, 250000,
        0))
   continue;
 }

 if (VAR_9 >= FUNC_0(VAR_5))
  return -VAR_4;







 switch (VAR_8[VAR_9].vid_std) {
 case 0x53:
  FUNC_1(VAR_6, -40);
  break;
 case 0x54:
 case 0x5e:
  FUNC_1(VAR_6, -44);
  break;
 default:
  FUNC_1(VAR_6, 0);
  break;
 }

 FUNC_3(VAR_6, VAR_3, VAR_8[VAR_9].vid_std);
 FUNC_2(VAR_6, VAR_0, VAR_1,
    VAR_8[VAR_9].v_freq << VAR_2);

 return 0;
}
