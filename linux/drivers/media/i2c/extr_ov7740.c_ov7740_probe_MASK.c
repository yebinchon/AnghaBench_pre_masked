
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int function; } ;
struct v4l2_subdev {int flags; TYPE_1__ entity; int ctrl_handler; int * internal_ops; } ;
struct TYPE_6__ {int flags; } ;
struct ov7740 {struct v4l2_subdev subdev; int format; int * frmsize; int * fmt; int mutex; TYPE_2__ pad; int regmap; int xvclk; } ;
struct i2c_client {int addr; int dev; TYPE_4__* adapter; int flags; } ;
struct TYPE_7__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*) ;
 struct ov7740* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int,TYPE_2__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct ov7740*) ;
 int * VAR_9 ;
 int * VAR_10 ;
 int FUNC_11 (struct ov7740*) ;
 int FUNC_12 (struct v4l2_subdev*,int *) ;
 int FUNC_13 (struct ov7740*) ;
 int FUNC_14 (struct i2c_client*,struct ov7740*) ;
 int VAR_11 ;
 int FUNC_15 (struct ov7740*,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (struct v4l2_subdev*) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_24 (struct i2c_client*,char*,int,int ) ;

__attribute__((used)) static int FUNC_25(struct i2c_client *VAR_14)
{
 struct ov7740 *VAR_15;
 struct v4l2_subdev *VAR_16;
 int VAR_17;

 if (!FUNC_6(VAR_14->adapter,
         VAR_4)) {
  FUNC_2(&VAR_14->dev,
   "OV7740: I2C-Adapter doesn't support SMBUS\n");
  return -VAR_0;
 }

 VAR_15 = FUNC_4(&VAR_14->dev, sizeof(*VAR_15), VAR_2);
 if (!VAR_15)
  return -VAR_1;

 VAR_15->xvclk = FUNC_3(&VAR_14->dev, "xvclk");
 if (FUNC_0(VAR_15->xvclk)) {
  VAR_17 = FUNC_1(VAR_15->xvclk);
  FUNC_2(&VAR_14->dev,
   "OV7740: fail to get xvclk: %d\n", VAR_17);
  return VAR_17;
 }

 VAR_17 = FUNC_14(VAR_14, VAR_15);
 if (VAR_17)
  return VAR_17;

 VAR_15->regmap = FUNC_5(VAR_14, &VAR_11);
 if (FUNC_0(VAR_15->regmap)) {
  VAR_17 = FUNC_1(VAR_15->regmap);
  FUNC_2(&VAR_14->dev, "Failed to allocate register map: %d\n",
   VAR_17);
  return VAR_17;
 }

 VAR_16 = &VAR_15->subdev;
 VAR_14->flags |= VAR_3;
 FUNC_23(VAR_16, VAR_14, &VAR_13);
 VAR_17 = FUNC_15(VAR_15, 1);
 if (VAR_17)
  return VAR_17;

 FUNC_19(&VAR_14->dev);
 FUNC_17(&VAR_14->dev);

 VAR_17 = FUNC_10(VAR_15);
 if (VAR_17)
  goto error_detect;

 FUNC_9(&VAR_15->mutex);

 VAR_17 = FUNC_13(VAR_15);
 if (VAR_17)
  goto error_init_controls;

 FUNC_24(VAR_14, "chip found @ 0x%02x (%s)\n",
   VAR_14->addr << 1, VAR_14->adapter->name);

 VAR_15->fmt = &VAR_9[0];
 VAR_15->frmsize = &VAR_10[0];

 FUNC_12(VAR_16, &VAR_15->format);

 VAR_17 = FUNC_21(VAR_16);
 if (VAR_17)
  goto error_async_register;

 FUNC_18(&VAR_14->dev);

 return 0;

error_async_register:
 FUNC_22(VAR_15->subdev.ctrl_handler);
error_init_controls:
 FUNC_11(VAR_15);
error_detect:
 FUNC_16(&VAR_14->dev);
 FUNC_20(&VAR_14->dev);
 FUNC_15(VAR_15, 0);
 FUNC_7(&VAR_15->subdev.entity);

 return VAR_17;
}
