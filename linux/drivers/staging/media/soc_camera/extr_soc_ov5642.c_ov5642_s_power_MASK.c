
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct soc_camera_subdev_desc {int dummy; } ;
struct ov5642 {int clk; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 struct soc_camera_subdev_desc* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int *,struct soc_camera_subdev_desc*,int ) ;
 int FUNC_4 (int *,struct soc_camera_subdev_desc*,int ) ;
 struct ov5642* FUNC_5 (struct i2c_client*) ;
 struct i2c_client* FUNC_6 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_7(struct v4l2_subdev *VAR_2, int VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_6(VAR_2);
 struct soc_camera_subdev_desc *VAR_5 = FUNC_2(VAR_4);
 struct ov5642 *VAR_6 = FUNC_5(VAR_4);
 int VAR_7;

 if (!VAR_3)
  return FUNC_3(&VAR_4->dev, VAR_5, VAR_6->clk);

 VAR_7 = FUNC_4(&VAR_4->dev, VAR_5, VAR_6->clk);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_4, VAR_1);
 if (!VAR_7)
  VAR_7 = FUNC_0(VAR_2);
 if (!VAR_7)
  VAR_7 = FUNC_1(VAR_4, VAR_0);

 return VAR_7;
}
