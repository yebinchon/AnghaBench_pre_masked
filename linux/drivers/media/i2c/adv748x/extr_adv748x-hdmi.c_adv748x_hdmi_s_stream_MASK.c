
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct adv748x_state {int mutex; } ;
struct adv748x_hdmi {int tx; } ;


 scalar_t__ FUNC_0 (struct adv748x_state*) ;
 struct adv748x_state* FUNC_1 (struct adv748x_hdmi*) ;
 struct adv748x_hdmi* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct adv748x_state*,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct v4l2_subdev *VAR_0, int VAR_1)
{
 struct adv748x_hdmi *VAR_2 = FUNC_2(VAR_0);
 struct adv748x_state *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 FUNC_5(&VAR_3->mutex);

 VAR_4 = FUNC_3(VAR_2->tx, VAR_1);
 if (VAR_4)
  goto done;

 if (FUNC_0(VAR_3))
  FUNC_4(VAR_3, "Detected HDMI signal\n");
 else
  FUNC_4(VAR_3, "Couldn't detect HDMI video signal\n");

done:
 FUNC_6(&VAR_3->mutex);
 return VAR_4;
}
