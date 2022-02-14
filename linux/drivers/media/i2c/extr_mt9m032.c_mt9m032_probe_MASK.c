
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct mt9m032_platform_data {int pix_clock; scalar_t__ invert_pixclock; } ;
struct TYPE_22__ {int error; } ;
struct TYPE_23__ {int function; } ;
struct TYPE_21__ {TYPE_9__ entity; TYPE_5__* ctrl_handler; int flags; } ;
struct TYPE_16__ {int flags; } ;
struct TYPE_20__ {int colorspace; int field; int code; int height; int width; } ;
struct TYPE_19__ {int height; int width; int top; int left; } ;
struct TYPE_18__ {int numerator; int denominator; } ;
struct mt9m032 {int lock; TYPE_5__ ctrls; TYPE_4__ subdev; struct mt9m032_platform_data* pdata; TYPE_10__ pad; void* hflip; void* vflip; TYPE_3__ format; TYPE_2__ crop; TYPE_1__ frame_interval; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_17__ {struct mt9m032_platform_data* platform_data; } ;
struct i2c_client {TYPE_12__ dev; int addr; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
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
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_0 (TYPE_12__*,char*,...) ;
 int FUNC_1 (TYPE_12__*,char*,int ) ;
 int FUNC_2 (TYPE_12__*,char*) ;
 struct mt9m032* FUNC_3 (TYPE_12__*,int,int ) ;
 int FUNC_4 (struct i2c_adapter*,int ) ;
 int FUNC_5 (TYPE_9__*) ;
 int FUNC_6 (TYPE_9__*,int,TYPE_10__*) ;
 int FUNC_7 (int) ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_8 (struct i2c_client*,int ) ;
 int FUNC_9 (struct mt9m032*) ;
 int FUNC_10 (struct mt9m032*) ;
 int FUNC_11 (struct i2c_client*,int,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct mt9m032*,int) ;
 int FUNC_15 (int,int) ;
 int FUNC_16 (int,void**) ;
 int FUNC_17 (TYPE_5__*) ;
 int FUNC_18 (TYPE_5__*,int) ;
 int FUNC_19 (TYPE_5__*) ;
 void* FUNC_20 (TYPE_5__*,int *,int ,int,int,int,int) ;
 int FUNC_21 (TYPE_4__*,struct i2c_client*,int *) ;

__attribute__((used)) static int FUNC_22(struct i2c_client *VAR_32,
    const struct i2c_device_id *VAR_33)
{
 struct mt9m032_platform_data *VAR_34 = VAR_32->dev.platform_data;
 struct i2c_adapter *VAR_35 = VAR_32->adapter;
 struct mt9m032 *VAR_36;
 int VAR_37;
 int VAR_38;

 if (VAR_34 == ((void*)0)) {
  FUNC_0(&VAR_32->dev, "No platform data\n");
  return -VAR_0;
 }

 if (!FUNC_4(VAR_35, VAR_5)) {
  FUNC_2(&VAR_32->dev,
    "I2C-Adapter doesn't support I2C_FUNC_SMBUS_WORD\n");
  return -VAR_1;
 }

 if (!VAR_32->dev.platform_data)
  return -VAR_2;

 VAR_36 = FUNC_3(&VAR_32->dev, sizeof(*VAR_36), VAR_4);
 if (VAR_36 == ((void*)0))
  return -VAR_3;

 FUNC_13(&VAR_36->lock);

 VAR_36->pdata = VAR_34;

 FUNC_21(&VAR_36->subdev, VAR_32, &VAR_31);
 VAR_36->subdev.flags |= VAR_29;

 VAR_37 = FUNC_8(VAR_32, VAR_9);
 if (VAR_37 != VAR_10) {
  FUNC_0(&VAR_32->dev, "MT9M032 not detected, wrong version "
   "0x%04x\n", VAR_37);
  VAR_38 = -VAR_2;
  goto error_sensor;
 }

 FUNC_1(&VAR_32->dev, "MT9M032 detected at address 0x%02x\n",
   VAR_32->addr);

 VAR_36->frame_interval.numerator = 1;
 VAR_36->frame_interval.denominator = 30;

 VAR_36->crop.left = VAR_12;
 VAR_36->crop.top = VAR_18;
 VAR_36->crop.width = VAR_11;
 VAR_36->crop.height = VAR_17;

 VAR_36->format.width = VAR_36->crop.width;
 VAR_36->format.height = VAR_36->crop.height;
 VAR_36->format.code = VAR_6;
 VAR_36->format.field = VAR_28;
 VAR_36->format.colorspace = VAR_27;

 FUNC_18(&VAR_36->ctrls, 5);

 FUNC_20(&VAR_36->ctrls, &VAR_30,
     VAR_23, 0, 127, 1, 64);

 VAR_36->hflip = FUNC_20(&VAR_36->ctrls,
       &VAR_30,
       VAR_24, 0, 1, 1, 0);
 VAR_36->vflip = FUNC_20(&VAR_36->ctrls,
       &VAR_30,
       VAR_26, 0, 1, 1, 0);

 FUNC_20(&VAR_36->ctrls, &VAR_30,
     VAR_22, VAR_21,
     VAR_20, 1,
     VAR_19);
 FUNC_20(&VAR_36->ctrls, &VAR_30,
     VAR_25, VAR_34->pix_clock,
     VAR_34->pix_clock, 1, VAR_34->pix_clock);

 if (VAR_36->ctrls.error) {
  VAR_38 = VAR_36->ctrls.error;
  FUNC_0(&VAR_32->dev, "control initialization error %d\n", VAR_38);
  goto error_ctrl;
 }

 FUNC_16(2, &VAR_36->hflip);

 VAR_36->subdev.ctrl_handler = &VAR_36->ctrls;
 VAR_36->subdev.entity.function = VAR_7;
 VAR_36->pad.flags = VAR_8;
 VAR_38 = FUNC_6(&VAR_36->subdev.entity, 1, &VAR_36->pad);
 if (VAR_38 < 0)
  goto error_ctrl;

 VAR_38 = FUNC_11(VAR_32, VAR_15, 1);
 if (VAR_38 < 0)
  goto error_entity;
 VAR_38 = FUNC_11(VAR_32, VAR_15, 0);
 if (VAR_38 < 0)
  goto error_entity;

 VAR_38 = FUNC_9(VAR_36);
 if (VAR_38 < 0)
  goto error_entity;
 FUNC_15(10000, 11000);

 VAR_38 = FUNC_19(&VAR_36->ctrls);
 if (VAR_38 < 0)
  goto error_entity;


 VAR_38 = FUNC_10(VAR_36);
 if (VAR_38 < 0)
  goto error_entity;

 VAR_38 = FUNC_11(VAR_32, 0x41, 0x0000);
 if (VAR_38 < 0)
  goto error_entity;
 VAR_38 = FUNC_11(VAR_32, 0x42, 0x0003);
 if (VAR_38 < 0)
  goto error_entity;
 VAR_38 = FUNC_11(VAR_32, 0x43, 0x0003);
 if (VAR_38 < 0)
  goto error_entity;
 VAR_38 = FUNC_11(VAR_32, 0x7f, 0x0000);
 if (VAR_38 < 0)
  goto error_entity;
 if (VAR_36->pdata->invert_pixclock) {
  VAR_38 = FUNC_11(VAR_32, VAR_13,
        VAR_14);
  if (VAR_38 < 0)
   goto error_entity;
 }

 VAR_38 = FUNC_11(VAR_32, VAR_16, 1);
 if (VAR_38 < 0)
  goto error_entity;
 FUNC_7(100);
 VAR_38 = FUNC_11(VAR_32, VAR_16, 0);
 if (VAR_38 < 0)
  goto error_entity;
 FUNC_7(100);
 VAR_38 = FUNC_14(VAR_36, 0);
 if (VAR_38 < 0)
  goto error_entity;

 return VAR_38;

error_entity:
 FUNC_5(&VAR_36->subdev.entity);
error_ctrl:
 FUNC_17(&VAR_36->ctrls);
error_sensor:
 FUNC_12(&VAR_36->lock);
 return VAR_38;
}
