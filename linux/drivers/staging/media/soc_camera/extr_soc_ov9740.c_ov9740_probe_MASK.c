
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct soc_camera_subdev_desc {int dummy; } ;
struct TYPE_6__ {int error; } ;
struct TYPE_5__ {TYPE_2__* ctrl_handler; } ;
struct ov9740_priv {TYPE_2__ hdl; int clk; TYPE_1__ subdev; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,char*) ;
 struct ov9740_priv* FUNC_3 (int *,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct i2c_client*) ;
 struct soc_camera_subdev_desc* FUNC_5 (struct i2c_client*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int) ;
 int FUNC_10 (TYPE_2__*,int *,int ,int ,int,int,int ) ;
 int FUNC_11 (TYPE_1__*,struct i2c_client*,int *) ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_7,
   const struct i2c_device_id *VAR_8)
{
 struct ov9740_priv *VAR_9;
 struct soc_camera_subdev_desc *VAR_10 = FUNC_5(VAR_7);
 int VAR_11;

 if (!VAR_10) {
  FUNC_2(&VAR_7->dev, "Missing platform_data for driver\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_3(&VAR_7->dev, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 FUNC_11(&VAR_9->subdev, VAR_7, &VAR_6);
 FUNC_9(&VAR_9->hdl, 13);
 FUNC_10(&VAR_9->hdl, &VAR_5,
   VAR_4, 0, 1, 1, 0);
 FUNC_10(&VAR_9->hdl, &VAR_5,
   VAR_3, 0, 1, 1, 0);
 VAR_9->subdev.ctrl_handler = &VAR_9->hdl;
 if (VAR_9->hdl.error)
  return VAR_9->hdl.error;

 VAR_9->clk = FUNC_6(&VAR_7->dev, "mclk");
 if (FUNC_0(VAR_9->clk)) {
  VAR_11 = FUNC_1(VAR_9->clk);
  goto eclkget;
 }

 VAR_11 = FUNC_4(VAR_7);
 if (VAR_11 < 0) {
  FUNC_7(VAR_9->clk);
eclkget:
  FUNC_8(&VAR_9->hdl);
 }

 return VAR_11;
}
