
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct soc_camera_subdev_desc {int dummy; } ;
struct ov9740_priv {int current_enable; int clk; int current_mf; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (struct v4l2_subdev*,int *) ;
 int FUNC_1 (struct v4l2_subdev*,int) ;
 struct soc_camera_subdev_desc* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int *,struct soc_camera_subdev_desc*,int ) ;
 int FUNC_4 (int *,struct soc_camera_subdev_desc*,int ) ;
 struct ov9740_priv* FUNC_5 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_6 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_7(struct v4l2_subdev *VAR_0, int VAR_1)
{
 struct i2c_client *VAR_2 = FUNC_6(VAR_0);
 struct soc_camera_subdev_desc *VAR_3 = FUNC_2(VAR_2);
 struct ov9740_priv *VAR_4 = FUNC_5(VAR_0);
 int VAR_5;

 if (VAR_1) {
  VAR_5 = FUNC_4(&VAR_2->dev, VAR_3, VAR_4->clk);
  if (VAR_5 < 0)
   return VAR_5;

  if (VAR_4->current_enable) {
   FUNC_0(VAR_0, &VAR_4->current_mf);
   FUNC_1(VAR_0, 1);
  }
 } else {
  if (VAR_4->current_enable) {
   FUNC_1(VAR_0, 0);
   VAR_4->current_enable = 1;
  }

  FUNC_3(&VAR_2->dev, VAR_3, VAR_4->clk);
 }

 return 0;
}
