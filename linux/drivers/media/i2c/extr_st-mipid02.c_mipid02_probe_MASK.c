
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int * ops; int function; } ;
struct TYPE_6__ {TYPE_3__ entity; int flags; } ;
struct mipid02_dev {int lock; TYPE_1__ sd; int notifier; TYPE_4__* pad; int reset_gpio; int xclk; struct i2c_client* i2c_client; int fmt; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;
struct TYPE_8__ {void* flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device*,char*,int ) ;
 struct mipid02_dev* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*,int ,TYPE_4__*) ;
 int FUNC_11 (struct mipid02_dev*) ;
 int FUNC_12 (struct mipid02_dev*) ;
 int FUNC_13 (struct mipid02_dev*) ;
 int FUNC_14 (struct mipid02_dev*) ;
 int FUNC_15 (struct mipid02_dev*) ;
 int FUNC_16 (struct mipid02_dev*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (TYPE_1__*) ;
 int FUNC_22 (TYPE_1__*,struct i2c_client*,int *) ;

__attribute__((used)) static int FUNC_23(struct i2c_client *VAR_11)
{
 struct device *VAR_12 = &VAR_11->dev;
 struct mipid02_dev *VAR_13;
 u32 VAR_14;
 int VAR_15;

 VAR_13 = FUNC_7(VAR_12, sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return -VAR_1;

 FUNC_8(&VAR_13->fmt);

 VAR_13->i2c_client = VAR_11;
 FUNC_22(&VAR_13->sd, VAR_11, &VAR_10);


 VAR_13->xclk = FUNC_5(VAR_12, "xclk");
 if (FUNC_0(VAR_13->xclk)) {
  FUNC_3(VAR_12, "failed to get xclk\n");
  return FUNC_1(VAR_13->xclk);
 }

 VAR_14 = FUNC_2(VAR_13->xclk);
 if (VAR_14 < 6000000 || VAR_14 > 27000000) {
  FUNC_3(VAR_12, "xclk freq must be in 6-27 Mhz range. got %d Hz\n",
   VAR_14);
  return -VAR_0;
 }

 VAR_13->reset_gpio = FUNC_6(VAR_12, "reset",
           VAR_3);

 VAR_15 = FUNC_12(VAR_13);
 if (VAR_15) {
  FUNC_3(VAR_12, "failed to get regulators %d", VAR_15);
  return VAR_15;
 }

 FUNC_18(&VAR_13->lock);
 VAR_13->sd.flags |= VAR_8;
 VAR_13->sd.entity.function = VAR_4;
 VAR_13->sd.entity.ops = &VAR_9;
 VAR_13->pad[0].flags = VAR_5;
 VAR_13->pad[1].flags = VAR_5;
 VAR_13->pad[2].flags = VAR_6;
 VAR_15 = FUNC_10(&VAR_13->sd.entity, VAR_7,
         VAR_13->pad);
 if (VAR_15) {
  FUNC_3(&VAR_11->dev, "pads init failed %d", VAR_15);
  goto mutex_cleanup;
 }


 VAR_15 = FUNC_16(VAR_13);
 if (VAR_15)
  goto entity_cleanup;

 VAR_15 = FUNC_11(VAR_13);
 if (VAR_15) {
  FUNC_3(&VAR_11->dev, "failed to detect mipid02 %d", VAR_15);
  goto power_off;
 }

 VAR_15 = FUNC_14(VAR_13);
 if (VAR_15) {
  FUNC_3(&VAR_11->dev, "failed to parse tx %d", VAR_15);
  goto power_off;
 }

 VAR_15 = FUNC_13(VAR_13);
 if (VAR_15) {
  FUNC_3(&VAR_11->dev, "failed to parse rx %d", VAR_15);
  goto power_off;
 }

 VAR_15 = FUNC_21(&VAR_13->sd);
 if (VAR_15 < 0) {
  FUNC_3(&VAR_11->dev, "v4l2_async_register_subdev failed %d",
       VAR_15);
  goto unregister_notifier;
 }

 FUNC_4(&VAR_11->dev, "mipid02 device probe successfully");

 return 0;

unregister_notifier:
 FUNC_20(&VAR_13->notifier);
 FUNC_19(&VAR_13->notifier);
power_off:
 FUNC_15(VAR_13);
entity_cleanup:
 FUNC_9(&VAR_13->sd.entity);
mutex_cleanup:
 FUNC_17(&VAR_13->lock);

 return VAR_15;
}
