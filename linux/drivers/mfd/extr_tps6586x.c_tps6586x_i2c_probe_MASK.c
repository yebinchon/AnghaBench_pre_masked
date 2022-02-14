
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct tps6586x_platform_data {scalar_t__ pm_off; int irq_base; } ;
struct tps6586x {int version; TYPE_1__* dev; int irq_domain; int regmap; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_7__ {scalar_t__ of_node; } ;
struct i2c_client {int irq; TYPE_1__ dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*,char*,...) ;
 struct tps6586x_platform_data* FUNC_4 (TYPE_1__*) ;
 struct tps6586x* FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (struct i2c_client*,int *) ;
 int FUNC_7 (int ,struct tps6586x*) ;
 int FUNC_8 (struct i2c_client*,struct tps6586x*) ;
 int FUNC_9 (struct i2c_client*,int ) ;
 int FUNC_10 (TYPE_1__*,int,int ,int ,int *,int ,int ) ;
 int FUNC_11 (TYPE_1__*) ;
 scalar_t__ VAR_5 ;
 int FUNC_12 (struct tps6586x*,struct tps6586x_platform_data*) ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_13 (struct tps6586x*,int ,int ) ;
 struct tps6586x_platform_data* FUNC_14 (struct i2c_client*) ;
 scalar_t__ VAR_8 ;
 int FUNC_15 (struct i2c_client*,int) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_16(struct i2c_client *VAR_10,
     const struct i2c_device_id *VAR_11)
{
 struct tps6586x_platform_data *VAR_12 = FUNC_4(&VAR_10->dev);
 struct tps6586x *VAR_13;
 int VAR_14;
 int VAR_15;

 if (!VAR_12 && VAR_10->dev.of_node)
  VAR_12 = FUNC_14(VAR_10);

 if (!VAR_12) {
  FUNC_3(&VAR_10->dev, "tps6586x requires platform data\n");
  return -VAR_2;
 }

 VAR_15 = FUNC_9(VAR_10, VAR_4);
 if (VAR_15 < 0) {
  FUNC_3(&VAR_10->dev, "Chip ID read failed: %d\n", VAR_15);
  return -VAR_0;
 }

 VAR_13 = FUNC_5(&VAR_10->dev, sizeof(*VAR_13), VAR_3);
 if (!VAR_13)
  return -VAR_1;

 VAR_13->version = VAR_15;
 FUNC_15(VAR_10, VAR_13->version);

 VAR_13->client = VAR_10;
 VAR_13->dev = &VAR_10->dev;
 FUNC_8(VAR_10, VAR_13);

 VAR_13->regmap = FUNC_6(VAR_10,
     &VAR_9);
 if (FUNC_1(VAR_13->regmap)) {
  VAR_14 = FUNC_2(VAR_13->regmap);
  FUNC_3(&VAR_10->dev, "regmap init failed: %d\n", VAR_14);
  return VAR_14;
 }


 if (VAR_10->irq) {
  VAR_14 = FUNC_13(VAR_13, VAR_10->irq,
     VAR_12->irq_base);
  if (VAR_14) {
   FUNC_3(&VAR_10->dev, "IRQ init failed: %d\n", VAR_14);
   return VAR_14;
  }
 }

 VAR_14 = FUNC_10(VAR_13->dev, -1,
         VAR_6, FUNC_0(VAR_6),
         ((void*)0), 0, VAR_13->irq_domain);
 if (VAR_14 < 0) {
  FUNC_3(&VAR_10->dev, "mfd_add_devices failed: %d\n", VAR_14);
  goto err_mfd_add;
 }

 VAR_14 = FUNC_12(VAR_13, VAR_12);
 if (VAR_14) {
  FUNC_3(&VAR_10->dev, "add devices failed: %d\n", VAR_14);
  goto err_add_devs;
 }

 if (VAR_12->pm_off && !VAR_5) {
  VAR_7 = &VAR_10->dev;
  VAR_5 = VAR_8;
 }

 return 0;

err_add_devs:
 FUNC_11(VAR_13->dev);
err_mfd_add:
 if (VAR_10->irq)
  FUNC_7(VAR_10->irq, VAR_13);
 return VAR_14;
}
