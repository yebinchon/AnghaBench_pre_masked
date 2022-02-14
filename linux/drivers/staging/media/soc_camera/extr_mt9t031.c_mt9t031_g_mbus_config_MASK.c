
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_config {int flags; int type; } ;
struct soc_camera_subdev_desc {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct soc_camera_subdev_desc*,struct v4l2_mbus_config*) ;
 struct soc_camera_subdev_desc* FUNC_1 (struct i2c_client*) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_7,
    struct v4l2_mbus_config *VAR_8)
{
 struct i2c_client *VAR_9 = FUNC_2(VAR_7);
 struct soc_camera_subdev_desc *VAR_10 = FUNC_1(VAR_9);

 VAR_8->flags = VAR_2 | VAR_5 |
  VAR_4 | VAR_1 |
  VAR_6 | VAR_0;
 VAR_8->type = VAR_3;
 VAR_8->flags = FUNC_0(VAR_10, VAR_8);

 return 0;
}
