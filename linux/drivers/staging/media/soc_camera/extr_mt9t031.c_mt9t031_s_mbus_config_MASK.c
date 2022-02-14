
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_config {int dummy; } ;
struct soc_camera_subdev_desc {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,int ,int) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;
 int FUNC_2 (struct soc_camera_subdev_desc*,struct v4l2_mbus_config const*) ;
 struct soc_camera_subdev_desc* FUNC_3 (struct i2c_client*) ;
 struct i2c_client* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_2,
    const struct v4l2_mbus_config *VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_4(VAR_2);
 struct soc_camera_subdev_desc *VAR_5 = FUNC_3(VAR_4);

 if (FUNC_2(VAR_5, VAR_3) &
     VAR_1)
  return FUNC_0(VAR_4, VAR_0, 0x8000);
 else
  return FUNC_1(VAR_4, VAR_0, 0x8000);
}
