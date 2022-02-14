
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77693_dev {struct i2c_client* i2c_muic; struct i2c_client* i2c_haptic; int irq_data_led; int irq; int irq_data_topsys; int irq_data_chg; int irq_data_muic; int * dev; struct i2c_client* regmap; struct i2c_client* regmap_muic; struct i2c_client* regmap_haptic; int type; struct i2c_client* i2c; } ;
struct i2c_device_id {int driver_data; } ;
struct i2c_client {int adapter; int irq; int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct i2c_client*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct i2c_client*) ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,char*,unsigned int) ;
 struct max77693_dev* FUNC_5 (int *,int,int ) ;
 void* FUNC_6 (struct i2c_client*,int *) ;
 void* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct i2c_client*,struct max77693_dev*) ;
 int FUNC_9 (struct i2c_client*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_10 (int *,int,int ,int ,int *,int ,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct i2c_client*,int ,int,int ,int *,int *) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (struct i2c_client*,int ,unsigned int*) ;
 int FUNC_16 (struct i2c_client*,int ,scalar_t__,unsigned int) ;

__attribute__((used)) static int FUNC_17(struct i2c_client *VAR_18,
         const struct i2c_device_id *VAR_19)
{
 struct max77693_dev *VAR_20;
 unsigned int VAR_21;
 int VAR_22 = 0;

 VAR_20 = FUNC_5(&VAR_18->dev,
   sizeof(struct max77693_dev), VAR_1);
 if (VAR_20 == ((void*)0))
  return -VAR_0;

 FUNC_8(VAR_18, VAR_20);
 VAR_20->dev = &VAR_18->dev;
 VAR_20->i2c = VAR_18;
 VAR_20->irq = VAR_18->irq;
 VAR_20->type = VAR_19->driver_data;

 VAR_20->regmap = FUNC_6(VAR_18, &VAR_14);
 if (FUNC_1(VAR_20->regmap)) {
  VAR_22 = FUNC_2(VAR_20->regmap);
  FUNC_3(VAR_20->dev, "failed to allocate register map: %d\n",
    VAR_22);
  return VAR_22;
 }

 VAR_22 = FUNC_15(VAR_20->regmap, VAR_8,
    &VAR_21);
 if (VAR_22 < 0) {
  FUNC_3(VAR_20->dev, "device not found on this channel\n");
  return VAR_22;
 } else
  FUNC_4(VAR_20->dev, "device ID: 0x%x\n", VAR_21);

 VAR_20->i2c_muic = FUNC_7(VAR_18->adapter, VAR_3);
 if (FUNC_1(VAR_20->i2c_muic)) {
  FUNC_3(VAR_20->dev, "Failed to allocate I2C device for MUIC\n");
  return FUNC_2(VAR_20->i2c_muic);
 }
 FUNC_8(VAR_20->i2c_muic, VAR_20);

 VAR_20->i2c_haptic = FUNC_7(VAR_18->adapter, VAR_2);
 if (FUNC_1(VAR_20->i2c_haptic)) {
  FUNC_3(VAR_20->dev, "Failed to allocate I2C device for Haptic\n");
  VAR_22 = FUNC_2(VAR_20->i2c_haptic);
  goto err_i2c_haptic;
 }
 FUNC_8(VAR_20->i2c_haptic, VAR_20);

 VAR_20->regmap_haptic = FUNC_6(VAR_20->i2c_haptic,
     &VAR_15);
 if (FUNC_1(VAR_20->regmap_haptic)) {
  VAR_22 = FUNC_2(VAR_20->regmap_haptic);
  FUNC_3(VAR_20->dev,
   "failed to initialize haptic register map: %d\n", VAR_22);
  goto err_regmap;
 }






 VAR_20->regmap_muic = FUNC_6(VAR_20->i2c_muic,
      &VAR_16);
 if (FUNC_1(VAR_20->regmap_muic)) {
  VAR_22 = FUNC_2(VAR_20->regmap_muic);
  FUNC_3(VAR_20->dev,
   "failed to allocate register map: %d\n", VAR_22);
  goto err_regmap;
 }

 VAR_22 = FUNC_13(VAR_20->regmap, VAR_20->irq,
    VAR_4 | VAR_5 |
    VAR_6, 0,
    &VAR_12,
    &VAR_20->irq_data_led);
 if (VAR_22) {
  FUNC_3(VAR_20->dev, "failed to add irq chip: %d\n", VAR_22);
  goto err_regmap;
 }

 VAR_22 = FUNC_13(VAR_20->regmap, VAR_20->irq,
    VAR_4 | VAR_5 |
    VAR_6, 0,
    &VAR_17,
    &VAR_20->irq_data_topsys);
 if (VAR_22) {
  FUNC_3(VAR_20->dev, "failed to add irq chip: %d\n", VAR_22);
  goto err_irq_topsys;
 }

 VAR_22 = FUNC_13(VAR_20->regmap, VAR_20->irq,
    VAR_4 | VAR_5 |
    VAR_6, 0,
    &VAR_10,
    &VAR_20->irq_data_chg);
 if (VAR_22) {
  FUNC_3(VAR_20->dev, "failed to add irq chip: %d\n", VAR_22);
  goto err_irq_charger;
 }

 VAR_22 = FUNC_13(VAR_20->regmap_muic, VAR_20->irq,
    VAR_4 | VAR_5 |
    VAR_6, 0,
    &VAR_13,
    &VAR_20->irq_data_muic);
 if (VAR_22) {
  FUNC_3(VAR_20->dev, "failed to add irq chip: %d\n", VAR_22);
  goto err_irq_muic;
 }


 VAR_22 = FUNC_16(VAR_20->regmap,
    VAR_7,
    VAR_9, (unsigned int)~VAR_9);
 if (VAR_22 < 0) {
  FUNC_3(VAR_20->dev,
   "Could not unmask interrupts in INTSRC: %d\n",
   VAR_22);
  goto err_intsrc;
 }

 FUNC_12(VAR_20->dev);

 VAR_22 = FUNC_10(VAR_20->dev, -1, VAR_11,
         FUNC_0(VAR_11), ((void*)0), 0, ((void*)0));
 if (VAR_22 < 0)
  goto err_mfd;

 return VAR_22;

err_mfd:
 FUNC_11(VAR_20->dev);
err_intsrc:
 FUNC_14(VAR_20->irq, VAR_20->irq_data_muic);
err_irq_muic:
 FUNC_14(VAR_20->irq, VAR_20->irq_data_chg);
err_irq_charger:
 FUNC_14(VAR_20->irq, VAR_20->irq_data_topsys);
err_irq_topsys:
 FUNC_14(VAR_20->irq, VAR_20->irq_data_led);
err_regmap:
 FUNC_9(VAR_20->i2c_haptic);
err_i2c_haptic:
 FUNC_9(VAR_20->i2c_muic);
 return VAR_22;
}
