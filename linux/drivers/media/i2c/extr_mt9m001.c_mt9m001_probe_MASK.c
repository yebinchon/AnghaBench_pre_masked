
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int error; int * lock; } ;
struct TYPE_14__ {int function; } ;
struct TYPE_12__ {int flags; TYPE_8__ entity; TYPE_3__* ctrl_handler; } ;
struct TYPE_15__ {int flags; } ;
struct TYPE_11__ {int height; int width; int top; int left; } ;
struct mt9m001 {int mutex; TYPE_3__ hdl; TYPE_2__ subdev; TYPE_9__ pad; TYPE_1__ rect; scalar_t__ y_skip_top; int autoexposure; int exposure; void* reset_gpio; void* standby_gpio; void* clk; } ;
struct i2c_client {int dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (void*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (int *,char*) ;
 void* FUNC_3 (int *,int *) ;
 void* FUNC_4 (int *,char*,int ) ;
 struct mt9m001* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (struct i2c_adapter*,int ) ;
 int FUNC_7 (TYPE_8__*) ;
 int FUNC_8 (TYPE_8__*,int,TYPE_9__*) ;
 int VAR_19 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_20 ;
 int FUNC_11 (struct i2c_client*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (int,int *,int ,int) ;
 int FUNC_21 (TYPE_3__*) ;
 int FUNC_22 (TYPE_3__*,int) ;
 int FUNC_23 (TYPE_3__*,int *,int ,int,int,int,int) ;
 int FUNC_24 (TYPE_3__*,int *,int ,int,int ,int ) ;
 int FUNC_25 (TYPE_2__*,struct i2c_client*,int *) ;

__attribute__((used)) static int FUNC_26(struct i2c_client *VAR_21)
{
 struct mt9m001 *VAR_22;
 struct i2c_adapter *VAR_23 = VAR_21->adapter;
 int VAR_24;

 if (!FUNC_6(VAR_23, VAR_4)) {
  FUNC_2(&VAR_23->dev,
    "I2C-Adapter doesn't support I2C_FUNC_SMBUS_WORD\n");
  return -VAR_0;
 }

 VAR_22 = FUNC_5(&VAR_21->dev, sizeof(*VAR_22), VAR_2);
 if (!VAR_22)
  return -VAR_1;

 VAR_22->clk = FUNC_3(&VAR_21->dev, ((void*)0));
 if (FUNC_0(VAR_22->clk))
  return FUNC_1(VAR_22->clk);

 VAR_22->standby_gpio = FUNC_4(&VAR_21->dev, "standby",
       VAR_3);
 if (FUNC_0(VAR_22->standby_gpio))
  return FUNC_1(VAR_22->standby_gpio);

 VAR_22->reset_gpio = FUNC_4(&VAR_21->dev, "reset",
            VAR_3);
 if (FUNC_0(VAR_22->reset_gpio))
  return FUNC_1(VAR_22->reset_gpio);

 FUNC_25(&VAR_22->subdev, VAR_21, &VAR_20);
 VAR_22->subdev.flags |= VAR_17 |
     VAR_18;
 FUNC_22(&VAR_22->hdl, 4);
 FUNC_23(&VAR_22->hdl, &VAR_19,
   VAR_14, 0, 1, 1, 0);
 FUNC_23(&VAR_22->hdl, &VAR_19,
   VAR_13, 0, 127, 1, 64);
 VAR_22->exposure = FUNC_23(&VAR_22->hdl, &VAR_19,
   VAR_11, 1, 255, 1, 255);




 VAR_22->autoexposure = FUNC_24(&VAR_22->hdl,
   &VAR_19, VAR_12, 1, 0,
   VAR_15);
 VAR_22->subdev.ctrl_handler = &VAR_22->hdl;
 if (VAR_22->hdl.error)
  return VAR_22->hdl.error;

 FUNC_20(2, &VAR_22->autoexposure,
     VAR_16, 1);

 FUNC_13(&VAR_22->mutex);
 VAR_22->hdl.lock = &VAR_22->mutex;


 VAR_22->y_skip_top = 0;
 VAR_22->rect.left = VAR_7;
 VAR_22->rect.top = VAR_10;
 VAR_22->rect.width = VAR_9;
 VAR_22->rect.height = VAR_8;

 VAR_24 = FUNC_10(&VAR_21->dev);
 if (VAR_24)
  goto error_hdl_free;

 FUNC_17(&VAR_21->dev);
 FUNC_15(&VAR_21->dev);

 VAR_24 = FUNC_11(VAR_21);
 if (VAR_24)
  goto error_power_off;

 VAR_22->pad.flags = VAR_6;
 VAR_22->subdev.entity.function = VAR_5;
 VAR_24 = FUNC_8(&VAR_22->subdev.entity, 1, &VAR_22->pad);
 if (VAR_24)
  goto error_power_off;

 VAR_24 = FUNC_19(&VAR_22->subdev);
 if (VAR_24)
  goto error_entity_cleanup;

 FUNC_16(&VAR_21->dev);

 return 0;

error_entity_cleanup:
 FUNC_7(&VAR_22->subdev.entity);
error_power_off:
 FUNC_14(&VAR_21->dev);
 FUNC_18(&VAR_21->dev);
 FUNC_9(&VAR_21->dev);

error_hdl_free:
 FUNC_21(&VAR_22->hdl);
 FUNC_12(&VAR_22->mutex);

 return VAR_24;
}
