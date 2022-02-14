
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc5t583_platform_data {int irq_base; } ;
struct rc5t583 {int * dev; int regmap; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int irq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,...) ;
 struct rc5t583_platform_data* FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int) ;
 struct rc5t583* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *,int,int ,int ,int *,int ,int *) ;
 int FUNC_8 (struct i2c_client*,int *) ;
 int FUNC_9 (struct i2c_client*,struct rc5t583*) ;
 int FUNC_10 (struct rc5t583*,struct rc5t583_platform_data*) ;
 int FUNC_11 (struct rc5t583*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_5,
         const struct i2c_device_id *VAR_6)
{
 struct rc5t583 *VAR_7;
 struct rc5t583_platform_data *VAR_8 = FUNC_4(&VAR_5->dev);
 int VAR_9;

 if (!VAR_8) {
  FUNC_3(&VAR_5->dev, "Err: Platform data not found\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_6(&VAR_5->dev, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->dev = &VAR_5->dev;
 FUNC_9(VAR_5, VAR_7);

 VAR_7->regmap = FUNC_8(VAR_5, &VAR_3);
 if (FUNC_1(VAR_7->regmap)) {
  VAR_9 = FUNC_2(VAR_7->regmap);
  FUNC_3(&VAR_5->dev, "regmap initialization failed: %d\n", VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_10(VAR_7, VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_5->irq) {
  VAR_9 = FUNC_11(VAR_7, VAR_5->irq, VAR_8->irq_base);

  if (VAR_9)
   FUNC_5(&VAR_5->dev, "IRQ init failed: %d\n", VAR_9);
 }

 VAR_9 = FUNC_7(VAR_7->dev, -1, VAR_4,
       FUNC_0(VAR_4), ((void*)0), 0, ((void*)0));
 if (VAR_9) {
  FUNC_3(&VAR_5->dev, "add mfd devices failed: %d\n", VAR_9);
  return VAR_9;
 }

 return 0;
}
