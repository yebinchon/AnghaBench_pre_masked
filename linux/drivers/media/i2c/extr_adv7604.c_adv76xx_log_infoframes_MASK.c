
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union hdmi_infoframe {int dummy; } hdmi_infoframe ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct v4l2_subdev*,int,union hdmi_infoframe*) ;
 int FUNC_2 (int ,int *,union hdmi_infoframe*) ;
 int FUNC_3 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (struct v4l2_subdev*,char*) ;

__attribute__((used)) static void FUNC_6(struct v4l2_subdev *VAR_2)
{
 int VAR_3;

 if (!FUNC_3(VAR_2)) {
  FUNC_5(VAR_2, "receive DVI-D signal, no infoframes\n");
  return;
 }

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
  union hdmi_infoframe VAR_4;
  struct i2c_client *VAR_5 = FUNC_4(VAR_2);

  if (FUNC_1(VAR_2, VAR_3, &VAR_4))
   return;
  FUNC_2(VAR_0, &VAR_5->dev, &VAR_4);
 }
}
