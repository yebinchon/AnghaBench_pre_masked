
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct soc_camera_subdev_desc {struct mt9v022_platform_data* drv_priv; } ;
struct mt9v022_platform_data {int y_skip_top; } ;
struct TYPE_9__ {int error; } ;
struct TYPE_7__ {int height; int width; int top; int left; } ;
struct TYPE_8__ {TYPE_3__* ctrl_handler; } ;
struct mt9v022 {TYPE_3__ hdl; int clk; TYPE_1__ rect; int y_skip_top; int chip_control; void* autogain; void* autoexposure; TYPE_2__ subdev; void* vblank; void* hblank; void* exposure; void* gain; } ;
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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*) ;
 struct mt9v022* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (struct i2c_adapter*,int ) ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_6 (struct i2c_client*) ;
 struct soc_camera_subdev_desc* FUNC_7 (struct i2c_client*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int,void**,int ,int) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*,int) ;
 void* FUNC_13 (TYPE_3__*,int *,int ,int,int,int,int) ;
 void* FUNC_14 (TYPE_3__*,int *,int ,int,int ,int ) ;
 int FUNC_15 (TYPE_2__*,struct i2c_client*,int *) ;

__attribute__((used)) static int FUNC_16(struct i2c_client *VAR_28,
    const struct i2c_device_id *VAR_29)
{
 struct mt9v022 *VAR_30;
 struct soc_camera_subdev_desc *VAR_31 = FUNC_7(VAR_28);
 struct i2c_adapter *VAR_32 = VAR_28->adapter;
 struct mt9v022_platform_data *VAR_33;
 int VAR_34;

 if (!VAR_31) {
  FUNC_2(&VAR_28->dev, "MT9V022 driver needs platform data\n");
  return -VAR_0;
 }

 if (!FUNC_5(VAR_32, VAR_4)) {
  FUNC_3(&VAR_32->dev,
    "I2C-Adapter doesn't support I2C_FUNC_SMBUS_WORD\n");
  return -VAR_1;
 }

 VAR_30 = FUNC_4(&VAR_28->dev, sizeof(struct mt9v022), VAR_3);
 if (!VAR_30)
  return -VAR_2;

 VAR_33 = VAR_31->drv_priv;
 FUNC_15(&VAR_30->subdev, VAR_28, &VAR_27);
 FUNC_12(&VAR_30->hdl, 6);
 FUNC_13(&VAR_30->hdl, &VAR_26,
   VAR_23, 0, 1, 1, 0);
 FUNC_13(&VAR_30->hdl, &VAR_26,
   VAR_21, 0, 1, 1, 0);
 VAR_30->autogain = FUNC_13(&VAR_30->hdl, &VAR_26,
   VAR_16, 0, 1, 1, 1);
 VAR_30->gain = FUNC_13(&VAR_30->hdl, &VAR_26,
   VAR_19, 0, 127, 1, 64);





 VAR_30->autoexposure = FUNC_14(&VAR_30->hdl,
   &VAR_26, VAR_18, 1, 0,
   VAR_24);
 VAR_30->exposure = FUNC_13(&VAR_30->hdl, &VAR_26,
   VAR_17, 1, 255, 1, 255);

 VAR_30->hblank = FUNC_13(&VAR_30->hdl, &VAR_26,
   VAR_20, VAR_9,
   VAR_8, 1,
   VAR_7);

 VAR_30->vblank = FUNC_13(&VAR_30->hdl, &VAR_26,
   VAR_22, VAR_15,
   VAR_14, 1,
   VAR_13);

 VAR_30->subdev.ctrl_handler = &VAR_30->hdl;
 if (VAR_30->hdl.error) {
  int VAR_35 = VAR_30->hdl.error;

  FUNC_2(&VAR_28->dev, "control initialisation err %d\n", VAR_35);
  return VAR_35;
 }
 FUNC_10(2, &VAR_30->autoexposure,
    VAR_25, 1);
 FUNC_10(2, &VAR_30->autogain, 0, 1);

 VAR_30->chip_control = VAR_5;





 VAR_30->y_skip_top = VAR_33 ? VAR_33->y_skip_top : 0;
 VAR_30->rect.left = VAR_6;
 VAR_30->rect.top = VAR_12;
 VAR_30->rect.width = VAR_11;
 VAR_30->rect.height = VAR_10;

 VAR_30->clk = FUNC_8(&VAR_28->dev, "mclk");
 if (FUNC_0(VAR_30->clk)) {
  VAR_34 = FUNC_1(VAR_30->clk);
  goto eclkget;
 }

 VAR_34 = FUNC_6(VAR_28);
 if (VAR_34) {
  FUNC_9(VAR_30->clk);
eclkget:
  FUNC_11(&VAR_30->hdl);
 }

 return VAR_34;
}
