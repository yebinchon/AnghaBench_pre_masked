
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_dv_timings_cap {int dummy; } ;
struct adv76xx_state {int selected_input; } ;
 struct v4l2_dv_timings_cap const VAR_0 ;
 struct v4l2_dv_timings_cap const VAR_1 ;
 struct adv76xx_state* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static const struct v4l2_dv_timings_cap *
FUNC_1(struct v4l2_subdev *VAR_2, int VAR_3)
{
 if (VAR_3 == -1) {
  struct adv76xx_state *VAR_4 = FUNC_0(VAR_2);

  VAR_3 = VAR_4->selected_input;
 }

 switch (VAR_3) {
 case 128:
 case 133:
 case 132:
 case 131:
  return &VAR_1;

 case 129:
 case 130:
 default:
  return &VAR_0;
 }
}
