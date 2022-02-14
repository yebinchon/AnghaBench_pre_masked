
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct i2c_client {int irq; int dev; } ;
struct bd9571mwv {int irq_data; int irq; int * dev; int regmap; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (struct bd9571mwv*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *,char*) ;
 struct bd9571mwv* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (struct i2c_client*,int *) ;
 int FUNC_7 (struct i2c_client*,struct bd9571mwv*) ;
 int FUNC_8 (int *,int ,int ,int ,int *,int ,int ) ;
 int FUNC_9 (int ,int ,int ,int ,int *,int *) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_7,
     const struct i2c_device_id *VAR_8)
{
 struct bd9571mwv *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_5(&VAR_7->dev, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 FUNC_7(VAR_7, VAR_9);
 VAR_9->dev = &VAR_7->dev;
 VAR_9->irq = VAR_7->irq;

 VAR_9->regmap = FUNC_6(VAR_7, &VAR_6);
 if (FUNC_1(VAR_9->regmap)) {
  FUNC_4(VAR_9->dev, "Failed to initialize register map\n");
  return FUNC_2(VAR_9->regmap);
 }

 VAR_10 = FUNC_3(VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_9(VAR_9->regmap, VAR_9->irq, VAR_2, 0,
      &VAR_5, &VAR_9->irq_data);
 if (VAR_10) {
  FUNC_4(VAR_9->dev, "Failed to register IRQ chip\n");
  return VAR_10;
 }

 VAR_10 = FUNC_8(VAR_9->dev, VAR_3, VAR_4,
         FUNC_0(VAR_4), ((void*)0), 0,
         FUNC_11(VAR_9->irq_data));
 if (VAR_10) {
  FUNC_10(VAR_9->irq, VAR_9->irq_data);
  return VAR_10;
 }

 return 0;
}
