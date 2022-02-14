
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct rj54n1_pdata {int mclk_freq; } ;
struct TYPE_16__ {int error; } ;
struct TYPE_15__ {TYPE_3__* ctrl_handler; } ;
struct TYPE_14__ {void* height; void* width; int top; int left; } ;
struct TYPE_13__ {int ratio_tg; int ratio_t; } ;
struct rj54n1 {int resize; int tgclk_mhz; TYPE_3__ hdl; void* clk; void* pwup_gpio; void* enable_gpio; TYPE_2__ subdev; int * fmt; void* height; void* width; TYPE_1__ rect; TYPE_12__ clk_div; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_17__ {struct rj54n1_pdata* platform_data; } ;
struct i2c_client {TYPE_7__ dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (void*) ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_12__ VAR_16 ;
 void* FUNC_2 (TYPE_7__*,int *) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (TYPE_7__*,char*) ;
 int FUNC_5 (TYPE_7__*,char*,int) ;
 int FUNC_6 (int *,char*) ;
 struct rj54n1* FUNC_7 (TYPE_7__*,int,int ) ;
 void* FUNC_8 (TYPE_7__*,char*,int ) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (struct i2c_adapter*,int ) ;
 int * VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_11 (struct i2c_client*,struct rj54n1_pdata*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*,int) ;
 int FUNC_15 (TYPE_3__*,int *,int ,int ,int,int,int) ;
 int FUNC_16 (TYPE_2__*,struct i2c_client*,int *) ;

__attribute__((used)) static int FUNC_17(struct i2c_client *VAR_20,
   const struct i2c_device_id *VAR_21)
{
 struct rj54n1 *VAR_22;
 struct i2c_adapter *VAR_23 = VAR_20->adapter;
 struct rj54n1_pdata *VAR_24;
 int VAR_25;

 if (!VAR_20->dev.platform_data) {
  FUNC_4(&VAR_20->dev, "RJ54N1CB0C: missing platform data!\n");
  return -VAR_0;
 }

 VAR_24 = VAR_20->dev.platform_data;

 if (!FUNC_10(VAR_23, VAR_5)) {
  FUNC_6(&VAR_23->dev,
    "I2C-Adapter doesn't support I2C_FUNC_SMBUS_BYTE\n");
  return -VAR_1;
 }

 VAR_22 = FUNC_7(&VAR_20->dev, sizeof(struct rj54n1), VAR_3);
 if (!VAR_22)
  return -VAR_2;

 FUNC_16(&VAR_22->subdev, VAR_20, &VAR_19);
 FUNC_14(&VAR_22->hdl, 4);
 FUNC_15(&VAR_22->hdl, &VAR_18,
   VAR_15, 0, 1, 1, 0);
 FUNC_15(&VAR_22->hdl, &VAR_18,
   VAR_14, 0, 1, 1, 0);
 FUNC_15(&VAR_22->hdl, &VAR_18,
   VAR_13, 0, 127, 1, 66);
 FUNC_15(&VAR_22->hdl, &VAR_18,
   VAR_12, 0, 1, 1, 1);
 VAR_22->subdev.ctrl_handler = &VAR_22->hdl;
 if (VAR_22->hdl.error)
  return VAR_22->hdl.error;

 VAR_22->clk_div = VAR_16;
 VAR_22->rect.left = VAR_8;
 VAR_22->rect.top = VAR_11;
 VAR_22->rect.width = VAR_10;
 VAR_22->rect.height = VAR_9;
 VAR_22->width = VAR_10;
 VAR_22->height = VAR_9;
 VAR_22->fmt = &VAR_17[0];
 VAR_22->resize = 1024;
 VAR_22->tgclk_mhz = (VAR_24->mclk_freq / VAR_6 * VAR_7) /
  (VAR_16.ratio_tg + 1) / (VAR_16.ratio_t + 1);

 VAR_22->clk = FUNC_2(&VAR_20->dev, ((void*)0));
 if (FUNC_0(VAR_22->clk)) {
  VAR_25 = FUNC_1(VAR_22->clk);
  goto err_free_ctrl;
 }

 VAR_22->pwup_gpio = FUNC_8(&VAR_20->dev, "powerup",
            VAR_4);
 if (FUNC_0(VAR_22->pwup_gpio)) {
  FUNC_5(&VAR_20->dev, "Unable to get GPIO \"powerup\": %ld\n",
    FUNC_1(VAR_22->pwup_gpio));
  VAR_25 = FUNC_1(VAR_22->pwup_gpio);
  goto err_clk_put;
 }

 VAR_22->enable_gpio = FUNC_8(&VAR_20->dev, "enable",
       VAR_4);
 if (FUNC_0(VAR_22->enable_gpio)) {
  FUNC_5(&VAR_20->dev, "Unable to get GPIO \"enable\": %ld\n",
    FUNC_1(VAR_22->enable_gpio));
  VAR_25 = FUNC_1(VAR_22->enable_gpio);
  goto err_gpio_put;
 }

 VAR_25 = FUNC_11(VAR_20, VAR_24);
 if (VAR_25 < 0)
  goto err_gpio_put;

 VAR_25 = FUNC_12(&VAR_22->subdev);
 if (VAR_25)
  goto err_gpio_put;

 return 0;

err_gpio_put:
 if (VAR_22->enable_gpio)
  FUNC_9(VAR_22->enable_gpio);

 if (VAR_22->pwup_gpio)
  FUNC_9(VAR_22->pwup_gpio);

err_clk_put:
 FUNC_3(VAR_22->clk);

err_free_ctrl:
 FUNC_13(&VAR_22->hdl);

 return VAR_25;
}
