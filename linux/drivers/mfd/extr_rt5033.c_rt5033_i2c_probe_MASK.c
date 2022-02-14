
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt5033_dev {int wakeup; int * dev; int irq_data; int irq; int regmap; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int irq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,char*,unsigned int) ;
 int FUNC_5 (int *,int) ;
 struct rt5033_dev* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *,int,int ,int ,int *,int ,int ) ;
 int FUNC_8 (struct i2c_client*,int *) ;
 int FUNC_9 (struct i2c_client*,struct rt5033_dev*) ;
 int FUNC_10 (int ,int ,int,int ,int *,int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,unsigned int*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_9,
    const struct i2c_device_id *VAR_10)
{
 struct rt5033_dev *VAR_11;
 unsigned int VAR_12;
 int VAR_13;

 VAR_11 = FUNC_6(&VAR_9->dev, sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 FUNC_9(VAR_9, VAR_11);
 VAR_11->dev = &VAR_9->dev;
 VAR_11->irq = VAR_9->irq;
 VAR_11->wakeup = 1;

 VAR_11->regmap = FUNC_8(VAR_9, &VAR_8);
 if (FUNC_1(VAR_11->regmap)) {
  FUNC_3(&VAR_9->dev, "Failed to allocate register map.\n");
  return FUNC_2(VAR_11->regmap);
 }

 VAR_13 = FUNC_12(VAR_11->regmap, VAR_5, &VAR_12);
 if (VAR_13) {
  FUNC_3(&VAR_9->dev, "Device not found\n");
  return -VAR_0;
 }
 FUNC_4(&VAR_9->dev, "Device found Device ID: %04x\n", VAR_12);

 VAR_13 = FUNC_10(VAR_11->regmap, VAR_11->irq,
   VAR_4 | VAR_3,
   0, &VAR_7, &VAR_11->irq_data);
 if (VAR_13) {
  FUNC_3(&VAR_9->dev, "Failed to request IRQ %d: %d\n",
       VAR_11->irq, VAR_13);
  return VAR_13;
 }

 VAR_13 = FUNC_7(VAR_11->dev, -1, VAR_6,
       FUNC_0(VAR_6), ((void*)0), 0,
       FUNC_11(VAR_11->irq_data));
 if (VAR_13 < 0) {
  FUNC_3(&VAR_9->dev, "Failed to add RT5033 child devices.\n");
  return VAR_13;
 }

 FUNC_5(VAR_11->dev, VAR_11->wakeup);

 return 0;
}
