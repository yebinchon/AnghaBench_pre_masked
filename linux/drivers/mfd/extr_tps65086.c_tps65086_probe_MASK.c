
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps65086 {int irq_data; int irq; int * dev; int regmap; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int irq; int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,unsigned int,char,unsigned int) ;
 struct tps65086* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (struct i2c_client*,int *) ;
 int FUNC_7 (struct i2c_client*,struct tps65086*) ;
 int FUNC_8 (int *,int ,int ,int ,int *,int ,int ) ;
 int FUNC_9 (int ,int ,int ,int ,int *,int *) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,unsigned int*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_11,
     const struct i2c_device_id *VAR_12)
{
 struct tps65086 *VAR_13;
 unsigned int VAR_14;
 int VAR_15;

 VAR_13 = FUNC_5(&VAR_11->dev, sizeof(*VAR_13), VAR_1);
 if (!VAR_13)
  return -VAR_0;

 FUNC_7(VAR_11, VAR_13);
 VAR_13->dev = &VAR_11->dev;
 VAR_13->irq = VAR_11->irq;

 VAR_13->regmap = FUNC_6(VAR_11, &VAR_10);
 if (FUNC_1(VAR_13->regmap)) {
  FUNC_3(VAR_13->dev, "Failed to initialize register map\n");
  return FUNC_2(VAR_13->regmap);
 }

 VAR_15 = FUNC_12(VAR_13->regmap, VAR_4, &VAR_14);
 if (VAR_15) {
  FUNC_3(VAR_13->dev, "Failed to read revision register\n");
  return VAR_15;
 }

 FUNC_4(VAR_13->dev, "Device: TPS65086%01lX, OTP: %c, Rev: %ld\n",
   (VAR_14 & VAR_6),
   (char)((VAR_14 & VAR_5) >> 4) + 'A',
   (VAR_14 & VAR_7) >> 6);

 VAR_15 = FUNC_9(VAR_13->regmap, VAR_13->irq, VAR_2, 0,
      &VAR_9, &VAR_13->irq_data);
 if (VAR_15) {
  FUNC_3(VAR_13->dev, "Failed to register IRQ chip\n");
  return VAR_15;
 }

 VAR_15 = FUNC_8(VAR_13->dev, VAR_3, VAR_8,
         FUNC_0(VAR_8), ((void*)0), 0,
         FUNC_11(VAR_13->irq_data));
 if (VAR_15) {
  FUNC_10(VAR_13->irq, VAR_13->irq_data);
  return VAR_15;
 }

 return 0;
}
