
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_dv_timings {int dummy; } ;
struct adv748x_state {int mutex; } ;
struct adv748x_hdmi {struct v4l2_dv_timings timings; } ;


 struct adv748x_state* FUNC_0 (struct adv748x_hdmi*) ;
 struct adv748x_hdmi* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_0,
         struct v4l2_dv_timings *VAR_1)
{
 struct adv748x_hdmi *VAR_2 = FUNC_1(VAR_0);
 struct adv748x_state *VAR_3 = FUNC_0(VAR_2);

 FUNC_2(&VAR_3->mutex);

 *VAR_1 = VAR_2->timings;

 FUNC_3(&VAR_3->mutex);

 return 0;
}
