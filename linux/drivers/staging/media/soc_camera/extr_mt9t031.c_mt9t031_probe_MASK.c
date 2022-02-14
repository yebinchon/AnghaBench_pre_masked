
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct soc_camera_subdev_desc {int dummy; } ;
struct TYPE_9__ {int error; } ;
struct TYPE_7__ {int height; int width; int top; int left; } ;
struct TYPE_8__ {TYPE_3__* ctrl_handler; } ;
struct mt9t031 {int xskip; int yskip; TYPE_3__ hdl; int clk; TYPE_1__ rect; scalar_t__ y_skip_top; int autoexposure; TYPE_2__ subdev; int exposure; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dev; } ;


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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 struct mt9t031* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (struct i2c_adapter*,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_6 (struct i2c_client*) ;
 struct soc_camera_subdev_desc* FUNC_7 (struct i2c_client*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int,int *,int ,int) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*,int) ;
 int FUNC_13 (TYPE_3__*,int *,int ,int,int,int,int) ;
 int FUNC_14 (TYPE_3__*,int *,int ,int,int ,int ) ;
 int FUNC_15 (TYPE_2__*,struct i2c_client*,int *) ;

__attribute__((used)) static int FUNC_16(struct i2c_client *VAR_18,
    const struct i2c_device_id *VAR_19)
{
 struct mt9t031 *VAR_20;
 struct soc_camera_subdev_desc *VAR_21 = FUNC_7(VAR_18);
 struct i2c_adapter *VAR_22 = VAR_18->adapter;
 int VAR_23;

 if (!VAR_21) {
  FUNC_2(&VAR_18->dev, "MT9T031 driver needs platform data\n");
  return -VAR_0;
 }

 if (!FUNC_5(VAR_22, VAR_4)) {
  FUNC_3(&VAR_22->dev,
    "I2C-Adapter doesn't support I2C_FUNC_SMBUS_WORD\n");
  return -VAR_1;
 }

 VAR_20 = FUNC_4(&VAR_18->dev, sizeof(struct mt9t031), VAR_3);
 if (!VAR_20)
  return -VAR_2;

 FUNC_15(&VAR_20->subdev, VAR_18, &VAR_17);
 FUNC_12(&VAR_20->hdl, 5);
 FUNC_13(&VAR_20->hdl, &VAR_16,
   VAR_13, 0, 1, 1, 0);
 FUNC_13(&VAR_20->hdl, &VAR_16,
   VAR_12, 0, 1, 1, 0);
 FUNC_13(&VAR_20->hdl, &VAR_16,
   VAR_11, 0, 127, 1, 64);





 VAR_20->autoexposure = FUNC_14(&VAR_20->hdl,
   &VAR_16, VAR_10, 1, 0,
   VAR_14);
 VAR_20->exposure = FUNC_13(&VAR_20->hdl, &VAR_16,
   VAR_9, 1, 255, 1, 255);

 VAR_20->subdev.ctrl_handler = &VAR_20->hdl;
 if (VAR_20->hdl.error)
  return VAR_20->hdl.error;

 FUNC_10(2, &VAR_20->autoexposure,
    VAR_15, 1);

 VAR_20->y_skip_top = 0;
 VAR_20->rect.left = VAR_5;
 VAR_20->rect.top = VAR_8;
 VAR_20->rect.width = VAR_7;
 VAR_20->rect.height = VAR_6;

 VAR_20->xskip = 1;
 VAR_20->yskip = 1;

 VAR_20->clk = FUNC_8(&VAR_18->dev, "mclk");
 if (FUNC_0(VAR_20->clk)) {
  VAR_23 = FUNC_1(VAR_20->clk);
  goto eclkget;
 }

 VAR_23 = FUNC_6(VAR_18);
 if (VAR_23) {
  FUNC_9(VAR_20->clk);
eclkget:
  FUNC_11(&VAR_20->hdl);
 }

 return VAR_23;
}
