
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct soc_camera_subdev_desc {int dummy; } ;
struct mt9v022 {int clk; } ;
struct i2c_client {int dev; } ;


 struct soc_camera_subdev_desc* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *,struct soc_camera_subdev_desc*,int ,int) ;
 struct mt9v022* FUNC_2 (struct i2c_client*) ;
 struct i2c_client* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_0, int VAR_1)
{
 struct i2c_client *VAR_2 = FUNC_3(VAR_0);
 struct soc_camera_subdev_desc *VAR_3 = FUNC_0(VAR_2);
 struct mt9v022 *VAR_4 = FUNC_2(VAR_2);

 return FUNC_1(&VAR_2->dev, VAR_3, VAR_4->clk, VAR_1);
}
