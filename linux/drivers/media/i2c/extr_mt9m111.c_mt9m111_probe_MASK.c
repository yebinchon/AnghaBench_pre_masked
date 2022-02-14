
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_20__ {int error; } ;
struct TYPE_15__ {int function; } ;
struct TYPE_19__ {int flags; TYPE_11__ entity; int * dev; TYPE_4__* ctrl_handler; } ;
struct TYPE_18__ {int height; int width; int top; int left; } ;
struct TYPE_17__ {int numerator; int denominator; } ;
struct TYPE_16__ {int flags; } ;
struct mt9m111 {int lastpage; int clk; TYPE_4__ hdl; TYPE_3__ subdev; int power_lock; int * fmt; TYPE_2__ rect; int height; int width; TYPE_10__* current_mode; TYPE_1__ frame_interval; TYPE_12__ pad; int gain; int * ctx; int regulator; } ;
struct i2c_client {int dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dev; } ;
struct TYPE_14__ {int max_fps; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int FUNC_3 (int ) ;
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
 int FUNC_4 (int *,char*,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;
 struct mt9m111* FUNC_7 (int *,int,int ) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (struct i2c_adapter*,int ) ;
 int FUNC_10 (TYPE_11__*) ;
 int FUNC_11 (TYPE_11__*,int,TYPE_12__*) ;
 int * VAR_27 ;
 int VAR_28 ;
 TYPE_10__* VAR_29 ;
 int FUNC_12 (struct i2c_client*,struct mt9m111*) ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_13 (struct i2c_client*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (int *,char*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (TYPE_4__*) ;
 int FUNC_19 (TYPE_4__*,int) ;
 int FUNC_20 (TYPE_4__*,int *,int ,int ,int,int,int) ;
 int FUNC_21 (TYPE_4__*,int *,int ,int,int,int) ;
 int FUNC_22 (TYPE_4__*,int *,int ,scalar_t__,int ,int ,int ) ;
 int FUNC_23 (TYPE_3__*,struct i2c_client*,int *) ;

__attribute__((used)) static int FUNC_24(struct i2c_client *VAR_32)
{
 struct mt9m111 *VAR_33;
 struct i2c_adapter *VAR_34 = VAR_32->adapter;
 int VAR_35;

 if (!FUNC_9(VAR_34, VAR_3)) {
  FUNC_6(&VAR_34->dev,
    "I2C-Adapter doesn't support I2C_FUNC_SMBUS_WORD\n");
  return -VAR_0;
 }

 VAR_33 = FUNC_7(&VAR_32->dev, sizeof(struct mt9m111), VAR_2);
 if (!VAR_33)
  return -VAR_1;

 if (FUNC_5(&VAR_32->dev)) {
  VAR_35 = FUNC_12(VAR_32, VAR_33);
  if (VAR_35)
   return VAR_35;
 }

 VAR_33->clk = FUNC_16(&VAR_32->dev, "mclk");
 if (FUNC_2(VAR_33->clk))
  return FUNC_3(VAR_33->clk);

 VAR_33->regulator = FUNC_8(&VAR_32->dev, "vdd");
 if (FUNC_2(VAR_33->regulator)) {
  FUNC_4(&VAR_32->dev, "regulator not found: %ld\n",
   FUNC_3(VAR_33->regulator));
  return FUNC_3(VAR_33->regulator);
 }


 VAR_33->ctx = &VAR_26;

 FUNC_23(&VAR_33->subdev, VAR_32, &VAR_30);
 VAR_33->subdev.flags |= VAR_24 |
     VAR_25;

 FUNC_19(&VAR_33->hdl, 7);
 FUNC_20(&VAR_33->hdl, &VAR_28,
   VAR_17, 0, 1, 1, 0);
 FUNC_20(&VAR_33->hdl, &VAR_28,
   VAR_15, 0, 1, 1, 0);
 FUNC_20(&VAR_33->hdl, &VAR_28,
   VAR_11, 0, 1, 1, 1);
 VAR_33->gain = FUNC_20(&VAR_33->hdl, &VAR_28,
   VAR_14, 0, 63 * 2 * 2, 1, 32);
 FUNC_21(&VAR_33->hdl,
   &VAR_28, VAR_13, 1, 0,
   VAR_23);
 FUNC_22(&VAR_33->hdl,
   &VAR_28, VAR_16,
   FUNC_0(VAR_31) - 1, 0, 0,
   VAR_31);
 FUNC_21(&VAR_33->hdl, &VAR_28,
   VAR_12, VAR_22,
   ~(FUNC_1(VAR_20) |
    FUNC_1(VAR_18) |
    FUNC_1(VAR_21) |
    FUNC_1(VAR_19) |
    FUNC_1(VAR_22)),
   VAR_20);
 VAR_33->subdev.ctrl_handler = &VAR_33->hdl;
 if (VAR_33->hdl.error) {
  VAR_35 = VAR_33->hdl.error;
  goto out_clkput;
 }
 VAR_33->current_mode = &VAR_29[VAR_10];
 VAR_33->frame_interval.numerator = 1;
 VAR_33->frame_interval.denominator = VAR_33->current_mode->max_fps;


 VAR_33->rect.left = VAR_8;
 VAR_33->rect.top = VAR_9;
 VAR_33->rect.width = VAR_7;
 VAR_33->rect.height = VAR_6;
 VAR_33->width = VAR_33->rect.width;
 VAR_33->height = VAR_33->rect.height;
 VAR_33->fmt = &VAR_27[0];
 VAR_33->lastpage = -1;
 FUNC_14(&VAR_33->power_lock);

 VAR_35 = FUNC_13(VAR_32);
 if (VAR_35 < 0)
  goto out_entityclean;

 VAR_33->subdev.dev = &VAR_32->dev;
 VAR_35 = FUNC_15(&VAR_33->subdev);
 if (VAR_35 < 0)
  goto out_entityclean;

 return 0;

out_entityclean:




 FUNC_18(&VAR_33->hdl);
out_clkput:
 FUNC_17(VAR_33->clk);

 return VAR_35;
}
