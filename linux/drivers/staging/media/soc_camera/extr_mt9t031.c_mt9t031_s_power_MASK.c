
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * type; } ;
struct video_device {TYPE_1__ dev; } ;
struct v4l2_subdev {int dummy; } ;
struct soc_camera_subdev_desc {int dummy; } ;
struct mt9t031 {int clk; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 struct soc_camera_subdev_desc* FUNC_0 (struct i2c_client*) ;
 struct video_device* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int *,struct soc_camera_subdev_desc*,int ) ;
 int FUNC_3 (int *,struct soc_camera_subdev_desc*,int ) ;
 struct mt9t031* FUNC_4 (struct i2c_client*) ;
 struct i2c_client* FUNC_5 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_1, int VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_5(VAR_1);
 struct soc_camera_subdev_desc *VAR_4 = FUNC_0(VAR_3);
 struct video_device *VAR_5 = FUNC_1(VAR_3);
 struct mt9t031 *VAR_6 = FUNC_4(VAR_3);
 int VAR_7;

 if (VAR_2) {
  VAR_7 = FUNC_3(&VAR_3->dev, VAR_4, VAR_6->clk);
  if (VAR_7 < 0)
   return VAR_7;
  if (VAR_5)

   VAR_5->dev.type = &VAR_0;
 } else {
  if (VAR_5)
   VAR_5->dev.type = ((void*)0);
  FUNC_2(&VAR_3->dev, VAR_4, VAR_6->clk);
 }

 return 0;
}
