
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int function; } ;
struct TYPE_6__ {TYPE_3__ entity; int flags; int * internal_ops; } ;
struct TYPE_8__ {int flags; } ;
struct ov2685 {int mutex; int ctrl_handler; TYPE_1__ subdev; TYPE_4__ pad; int reset_gpio; int xvclk; int * cur_mode; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct ov2685*) ;
 int FUNC_2 (struct ov2685*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device*,char*) ;
 int FUNC_7 (struct device*,char*) ;
 int FUNC_8 (struct device*,char*,int ) ;
 struct ov2685* FUNC_9 (struct device*,int,int ) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*,int,TYPE_4__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct ov2685*,struct i2c_client*) ;
 int FUNC_15 (struct ov2685*) ;
 int FUNC_16 (struct ov2685*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_17 (struct device*) ;
 int FUNC_18 (struct device*) ;
 int FUNC_19 (struct device*) ;
 int * VAR_10 ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (TYPE_1__*,struct i2c_client*,int *) ;

__attribute__((used)) static int FUNC_23(struct i2c_client *VAR_11,
   const struct i2c_device_id *VAR_12)
{
 struct device *VAR_13 = &VAR_11->dev;
 struct ov2685 *VAR_14;
 int VAR_15;

 VAR_14 = FUNC_9(VAR_13, sizeof(*VAR_14), VAR_2);
 if (!VAR_14)
  return -VAR_1;

 VAR_14->client = VAR_11;
 VAR_14->cur_mode = &VAR_10[0];

 VAR_14->xvclk = FUNC_7(VAR_13, "xvclk");
 if (FUNC_0(VAR_14->xvclk)) {
  FUNC_5(VAR_13, "Failed to get xvclk\n");
  return -VAR_0;
 }
 VAR_15 = FUNC_4(VAR_14->xvclk, VAR_6);
 if (VAR_15 < 0) {
  FUNC_5(VAR_13, "Failed to set xvclk rate (24MHz)\n");
  return VAR_15;
 }
 if (FUNC_3(VAR_14->xvclk) != VAR_6)
  FUNC_6(VAR_13, "xvclk mismatched, modes are based on 24MHz\n");

 VAR_14->reset_gpio = FUNC_8(VAR_13, "reset", VAR_3);
 if (FUNC_0(VAR_14->reset_gpio)) {
  FUNC_5(VAR_13, "Failed to get reset-gpios\n");
  return -VAR_0;
 }

 VAR_15 = FUNC_15(VAR_14);
 if (VAR_15) {
  FUNC_5(VAR_13, "Failed to get power regulators\n");
  return VAR_15;
 }

 FUNC_13(&VAR_14->mutex);
 FUNC_22(&VAR_14->subdev, VAR_11, &VAR_9);
 VAR_15 = FUNC_16(VAR_14);
 if (VAR_15)
  goto err_destroy_mutex;

 VAR_15 = FUNC_2(VAR_14);
 if (VAR_15)
  goto err_free_handler;

 VAR_15 = FUNC_14(VAR_14, VAR_11);
 if (VAR_15)
  goto err_power_off;
 VAR_15 = FUNC_20(&VAR_14->subdev);
 if (VAR_15) {
  FUNC_5(VAR_13, "v4l2 async register subdev failed\n");
  goto err_clean_entity;
 }

 FUNC_19(VAR_13);
 FUNC_17(VAR_13);
 FUNC_18(VAR_13);

 return 0;

err_clean_entity:



err_power_off:
 FUNC_1(VAR_14);
err_free_handler:
 FUNC_21(&VAR_14->ctrl_handler);
err_destroy_mutex:
 FUNC_12(&VAR_14->mutex);

 return VAR_15;
}
