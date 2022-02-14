
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_camera_subdev_desc {int dummy; } ;
struct imx074 {int clk; int subdev; int * fmt; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,char*) ;
 struct imx074* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (struct i2c_adapter*,int ) ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (struct i2c_client*) ;
 struct soc_camera_subdev_desc* FUNC_8 (struct i2c_client*) ;
 int FUNC_9 (int *,struct soc_camera_subdev_desc*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,struct i2c_client*,int *) ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_8,
   const struct i2c_device_id *VAR_9)
{
 struct imx074 *VAR_10;
 struct i2c_adapter *VAR_11 = VAR_8->adapter;
 struct soc_camera_subdev_desc *VAR_12 = FUNC_8(VAR_8);
 int VAR_13;

 if (!VAR_12) {
  FUNC_2(&VAR_8->dev, "IMX074: missing platform data!\n");
  return -VAR_0;
 }

 if (!FUNC_6(VAR_11, VAR_5)) {
  FUNC_4(&VAR_11->dev,
    "I2C-Adapter doesn't support I2C_FUNC_SMBUS_BYTE\n");
  return -VAR_1;
 }

 VAR_10 = FUNC_5(&VAR_8->dev, sizeof(struct imx074), VAR_4);
 if (!VAR_10)
  return -VAR_2;

 FUNC_13(&VAR_10->subdev, VAR_8, &VAR_7);

 VAR_10->fmt = &VAR_6[0];

 VAR_10->clk = FUNC_11(&VAR_8->dev, "mclk");
 if (FUNC_0(VAR_10->clk)) {
  FUNC_3(&VAR_8->dev, "Error %ld getting clock\n", FUNC_1(VAR_10->clk));
  return -VAR_3;
 }

 VAR_13 = FUNC_9(&VAR_8->dev, VAR_12);
 if (VAR_13 < 0)
  goto epwrinit;

 VAR_13 = FUNC_7(VAR_8);
 if (VAR_13 < 0)
  goto eprobe;

 VAR_13 = FUNC_10(&VAR_10->subdev);
 if (!VAR_13)
  return 0;

epwrinit:
eprobe:
 FUNC_12(VAR_10->clk);
 return VAR_13;
}
