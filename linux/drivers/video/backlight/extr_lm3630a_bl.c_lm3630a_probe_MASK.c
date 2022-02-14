
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm3630a_platform_data {scalar_t__ pwm_ctrl; void* ledb_init_brt; void* leda_init_brt; void* ledb_max_brt; void* leda_max_brt; } ;
struct lm3630a_chip {scalar_t__ irq; int pwmd; int * dev; struct lm3630a_platform_data* pdata; int regmap; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; scalar_t__ irq; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,...) ;
 struct lm3630a_platform_data* FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 void* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (struct i2c_client*,int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct i2c_client*,struct lm3630a_chip*) ;
 int FUNC_10 (struct lm3630a_chip*) ;
 int FUNC_11 (struct lm3630a_chip*) ;
 int FUNC_12 (struct lm3630a_chip*) ;
 int FUNC_13 (struct lm3630a_chip*,struct lm3630a_platform_data*) ;
 int VAR_6 ;
 int FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(struct i2c_client *VAR_7,
    const struct i2c_device_id *VAR_8)
{
 struct lm3630a_platform_data *VAR_9 = FUNC_3(&VAR_7->dev);
 struct lm3630a_chip *VAR_10;
 int VAR_11;

 if (!FUNC_8(VAR_7->adapter, VAR_3)) {
  FUNC_2(&VAR_7->dev, "fail : i2c functionality check\n");
  return -VAR_1;
 }

 VAR_10 = FUNC_5(&VAR_7->dev, sizeof(struct lm3630a_chip),
        VAR_2);
 if (!VAR_10)
  return -VAR_0;
 VAR_10->dev = &VAR_7->dev;

 VAR_10->regmap = FUNC_7(VAR_7, &VAR_6);
 if (FUNC_0(VAR_10->regmap)) {
  VAR_11 = FUNC_1(VAR_10->regmap);
  FUNC_2(&VAR_7->dev, "fail : allocate reg. map: %d\n", VAR_11);
  return VAR_11;
 }

 FUNC_9(VAR_7, VAR_10);
 if (VAR_9 == ((void*)0)) {
  VAR_9 = FUNC_5(VAR_10->dev,
         sizeof(struct lm3630a_platform_data),
         VAR_2);
  if (VAR_9 == ((void*)0))
   return -VAR_0;


  VAR_9->leda_max_brt = VAR_4;
  VAR_9->ledb_max_brt = VAR_4;
  VAR_9->leda_init_brt = VAR_4;
  VAR_9->ledb_init_brt = VAR_4;

  VAR_11 = FUNC_13(VAR_10, VAR_9);
  if (VAR_11) {
   FUNC_2(&VAR_7->dev, "fail : parse node\n");
   return VAR_11;
  }
 }
 VAR_10->pdata = VAR_9;


 VAR_11 = FUNC_11(VAR_10);
 if (VAR_11 < 0) {
  FUNC_2(&VAR_7->dev, "fail : init chip\n");
  return VAR_11;
 }

 VAR_11 = FUNC_10(VAR_10);
 if (VAR_11 < 0) {
  FUNC_2(&VAR_7->dev, "fail : backlight register.\n");
  return VAR_11;
 }

 if (VAR_9->pwm_ctrl != VAR_5) {
  VAR_10->pwmd = FUNC_6(VAR_10->dev, "lm3630a-pwm");
  if (FUNC_0(VAR_10->pwmd)) {
   FUNC_2(&VAR_7->dev, "fail : get pwm device\n");
   return FUNC_1(VAR_10->pwmd);
  }





  FUNC_14(VAR_10->pwmd);
 }


 VAR_10->irq = VAR_7->irq;
 if (VAR_10->irq) {
  VAR_11 = FUNC_12(VAR_10);
  if (VAR_11 < 0)
   return VAR_11;
 }
 FUNC_4(&VAR_7->dev, "LM3630A backlight register OK.\n");
 return 0;
}
