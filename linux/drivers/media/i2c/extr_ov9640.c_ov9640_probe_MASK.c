
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int error; } ;
struct TYPE_6__ {int * dev; TYPE_2__* ctrl_handler; } ;
struct ov9640_priv {TYPE_2__ hdl; void* clk; TYPE_1__ subdev; void* gpio_reset; void* gpio_power; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_2 (int *,char*,int ) ;
 struct ov9640_priv* FUNC_3 (int *,int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (TYPE_1__*) ;
 void* FUNC_6 (int *,char*) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int) ;
 int FUNC_10 (TYPE_2__*,int *,int ,int ,int,int,int ) ;
 int FUNC_11 (TYPE_1__*,struct i2c_client*,int *) ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_8,
   const struct i2c_device_id *VAR_9)
{
 struct ov9640_priv *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_3(&VAR_8->dev, sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->gpio_power = FUNC_2(&VAR_8->dev, "Camera power",
       VAR_3);
 if (FUNC_0(VAR_10->gpio_power)) {
  VAR_11 = FUNC_1(VAR_10->gpio_power);
  return VAR_11;
 }

 VAR_10->gpio_reset = FUNC_2(&VAR_8->dev, "Camera reset",
       VAR_2);
 if (FUNC_0(VAR_10->gpio_reset)) {
  VAR_11 = FUNC_1(VAR_10->gpio_reset);
  return VAR_11;
 }

 FUNC_11(&VAR_10->subdev, VAR_8, &VAR_7);

 FUNC_9(&VAR_10->hdl, 2);
 FUNC_10(&VAR_10->hdl, &VAR_6,
     VAR_5, 0, 1, 1, 0);
 FUNC_10(&VAR_10->hdl, &VAR_6,
     VAR_4, 0, 1, 1, 0);

 if (VAR_10->hdl.error) {
  VAR_11 = VAR_10->hdl.error;
  goto ectrlinit;
 }

 VAR_10->subdev.ctrl_handler = &VAR_10->hdl;

 VAR_10->clk = FUNC_6(&VAR_8->dev, "mclk");
 if (FUNC_0(VAR_10->clk)) {
  VAR_11 = FUNC_1(VAR_10->clk);
  goto ectrlinit;
 }

 VAR_11 = FUNC_4(VAR_8);
 if (VAR_11)
  goto eprobe;

 VAR_10->subdev.dev = &VAR_8->dev;
 VAR_11 = FUNC_5(&VAR_10->subdev);
 if (VAR_11)
  goto eprobe;

 return 0;

eprobe:
 FUNC_7(VAR_10->clk);
ectrlinit:
 FUNC_8(&VAR_10->hdl);

 return VAR_11;
}
