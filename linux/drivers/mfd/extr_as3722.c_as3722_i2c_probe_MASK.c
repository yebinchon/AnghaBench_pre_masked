
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int irq; } ;
struct as3722 {unsigned long irq_flags; int * dev; int irq_data; scalar_t__ en_ac_ok_pwr_on; int chip_irq; int regmap; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct as3722*) ;
 int FUNC_4 (struct as3722*) ;
 int VAR_5 ;
 int FUNC_5 (struct i2c_client*,struct as3722*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (struct as3722*,int ,int ,int ) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (int *,int) ;
 struct as3722* FUNC_10 (int *,int,int ) ;
 int FUNC_11 (int *,int,int ,int ,int *,int ,int ) ;
 int FUNC_12 (int *,int ,int ,unsigned long,int,int *,int *) ;
 int FUNC_13 (struct i2c_client*,int *) ;
 int FUNC_14 (struct i2c_client*,struct as3722*) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(struct i2c_client *VAR_8,
   const struct i2c_device_id *VAR_9)
{
 struct as3722 *VAR_10;
 unsigned long VAR_11;
 int VAR_12;
 u8 VAR_13 = 0;

 VAR_10 = FUNC_10(&VAR_8->dev, sizeof(struct as3722), VAR_3);
 if (!VAR_10)
  return -VAR_2;

 VAR_10->dev = &VAR_8->dev;
 VAR_10->chip_irq = VAR_8->irq;
 FUNC_14(VAR_8, VAR_10);

 VAR_12 = FUNC_5(VAR_8, VAR_10);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_10->regmap = FUNC_13(VAR_8, &VAR_7);
 if (FUNC_1(VAR_10->regmap)) {
  VAR_12 = FUNC_2(VAR_10->regmap);
  FUNC_8(&VAR_8->dev, "regmap init failed: %d\n", VAR_12);
  return VAR_12;
 }

 VAR_12 = FUNC_3(VAR_10);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_11 = VAR_10->irq_flags | VAR_4;
 VAR_12 = FUNC_12(VAR_10->dev, VAR_10->regmap,
           VAR_10->chip_irq,
           VAR_11, -1, &VAR_6,
           &VAR_10->irq_data);
 if (VAR_12 < 0) {
  FUNC_8(VAR_10->dev, "Failed to add regmap irq: %d\n", VAR_12);
  return VAR_12;
 }

 VAR_12 = FUNC_4(VAR_10);
 if (VAR_12 < 0)
  return VAR_12;

 if (VAR_10->en_ac_ok_pwr_on)
  VAR_13 = VAR_0;
 VAR_12 = FUNC_6(VAR_10, VAR_1,
   VAR_0, VAR_13);
 if (VAR_12 < 0) {
  FUNC_8(VAR_10->dev, "CTRLsequ1 update failed: %d\n", VAR_12);
  return VAR_12;
 }

 VAR_12 = FUNC_11(&VAR_8->dev, -1, VAR_5,
       FUNC_0(VAR_5), ((void*)0), 0,
       FUNC_15(VAR_10->irq_data));
 if (VAR_12) {
  FUNC_8(VAR_10->dev, "Failed to add MFD devices: %d\n", VAR_12);
  return VAR_12;
 }

 FUNC_9(VAR_10->dev, 1);

 FUNC_7(VAR_10->dev, "AS3722 core driver initialized successfully\n");
 return 0;
}
