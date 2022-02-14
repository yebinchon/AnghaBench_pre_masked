
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_camera_subdev_desc {int dummy; } ;
struct TYPE_2__ {int width; int height; int left; int top; } ;
struct ov5642 {int total_width; int clk; int total_height; TYPE_1__ crop_rect; int * fmt; int subdev; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 struct ov5642* FUNC_3 (int *,int,int ) ;
 int * VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct i2c_client*) ;
 struct soc_camera_subdev_desc* FUNC_5 (struct i2c_client*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,struct i2c_client*,int *) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_11,
   const struct i2c_device_id *VAR_12)
{
 struct ov5642 *VAR_13;
 struct soc_camera_subdev_desc *VAR_14 = FUNC_5(VAR_11);
 int VAR_15;

 if (!VAR_14) {
  FUNC_2(&VAR_11->dev, "OV5642: missing platform data!\n");
  return -VAR_2;
 }

 VAR_13 = FUNC_3(&VAR_11->dev, sizeof(struct ov5642), VAR_4);
 if (!VAR_13)
  return -VAR_3;

 FUNC_8(&VAR_13->subdev, VAR_11, &VAR_10);

 VAR_13->fmt = &VAR_9[0];

 VAR_13->crop_rect.width = VAR_6;
 VAR_13->crop_rect.height = VAR_5;
 VAR_13->crop_rect.left = (VAR_8 - VAR_6) / 2;
 VAR_13->crop_rect.top = (VAR_7 - VAR_5) / 2;
 VAR_13->total_width = VAR_6 + VAR_0;
 VAR_13->total_height = VAR_1;

 VAR_13->clk = FUNC_6(&VAR_11->dev, "mclk");
 if (FUNC_0(VAR_13->clk))
  return FUNC_1(VAR_13->clk);

 VAR_15 = FUNC_4(VAR_11);
 if (VAR_15 < 0)
  FUNC_7(VAR_13->clk);

 return VAR_15;
}
