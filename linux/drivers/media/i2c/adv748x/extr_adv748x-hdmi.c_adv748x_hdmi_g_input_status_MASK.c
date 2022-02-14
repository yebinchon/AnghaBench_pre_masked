
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct adv748x_state {int mutex; } ;
struct adv748x_hdmi {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct adv748x_state*) ;
 struct adv748x_state* FUNC_1 (struct adv748x_hdmi*) ;
 struct adv748x_hdmi* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_1, u32 *VAR_2)
{
 struct adv748x_hdmi *VAR_3 = FUNC_2(VAR_1);
 struct adv748x_state *VAR_4 = FUNC_1(VAR_3);

 FUNC_3(&VAR_4->mutex);

 *VAR_2 = FUNC_0(VAR_4) ? 0 : VAR_0;

 FUNC_4(&VAR_4->mutex);

 return 0;
}
