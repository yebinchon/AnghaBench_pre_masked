
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps65218 {unsigned int rev; int irq_data; int * dev; int regmap; int irq; int tps_lock; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int irq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,char*,int) ;
 struct tps65218* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int ,int ,int ,int ,int *,int *) ;
 int FUNC_6 (struct i2c_client*,int *) ;
 int FUNC_7 (struct i2c_client*,struct tps65218*) ;
 int FUNC_8 (int *,int ,int ,int ,int *,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,unsigned int*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_12 (struct tps65218*) ;
 int FUNC_13 (struct tps65218*) ;
 int FUNC_14 (struct tps65218*) ;

__attribute__((used)) static int FUNC_15(struct i2c_client *VAR_9,
    const struct i2c_device_id *VAR_10)
{
 struct tps65218 *VAR_11;
 int VAR_12;
 unsigned int VAR_13;

 VAR_11 = FUNC_4(&VAR_9->dev, sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 FUNC_7(VAR_9, VAR_11);
 VAR_11->dev = &VAR_9->dev;
 VAR_11->irq = VAR_9->irq;
 VAR_11->regmap = FUNC_6(VAR_9, &VAR_8);
 if (FUNC_1(VAR_11->regmap)) {
  VAR_12 = FUNC_2(VAR_11->regmap);
  FUNC_3(VAR_11->dev, "Failed to allocate register map: %d\n",
   VAR_12);
  return VAR_12;
 }

 FUNC_9(&VAR_11->tps_lock);

 VAR_12 = FUNC_5(&VAR_9->dev, VAR_11->regmap, VAR_11->irq,
           VAR_2, 0, &VAR_7,
           &VAR_11->irq_data);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_12 = FUNC_11(VAR_11->regmap, VAR_5, &VAR_13);
 if (VAR_12) {
  FUNC_3(VAR_11->dev, "Failed to read chipid: %d\n", VAR_12);
  return VAR_12;
 }

 VAR_11->rev = VAR_13 & VAR_4;

 VAR_12 = FUNC_12(VAR_11);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_14(VAR_11);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_13(VAR_11);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_8(VAR_11->dev, VAR_3, VAR_6,
         FUNC_0(VAR_6), ((void*)0), 0,
         FUNC_10(VAR_11->irq_data));

 return VAR_12;
}
