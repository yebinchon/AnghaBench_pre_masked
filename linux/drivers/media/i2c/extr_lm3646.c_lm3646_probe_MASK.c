
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm3646_platform_data {int led1_flash_brt; int led1_torch_brt; int flash_timeout; } ;
struct lm3646_flash {int * dev; struct lm3646_platform_data* pdata; int regmap; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 struct lm3646_platform_data* FUNC_2 (int *) ;
 void* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (struct i2c_client*,int *) ;
 int FUNC_5 (struct i2c_client*,struct lm3646_flash*) ;
 int FUNC_6 (struct lm3646_flash*) ;
 int VAR_5 ;
 int FUNC_7 (struct lm3646_flash*) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_6,
   const struct i2c_device_id *VAR_7)
{
 struct lm3646_flash *VAR_8;
 struct lm3646_platform_data *VAR_9 = FUNC_2(&VAR_6->dev);
 int VAR_10;

 VAR_8 = FUNC_3(&VAR_6->dev, sizeof(*VAR_8), VAR_1);
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 VAR_8->regmap = FUNC_4(VAR_6, &VAR_5);
 if (FUNC_0(VAR_8->regmap))
  return FUNC_1(VAR_8->regmap);


 if (VAR_9 == ((void*)0)) {
  VAR_9 = FUNC_3(&VAR_6->dev,
         sizeof(struct lm3646_platform_data),
         VAR_1);
  if (VAR_9 == ((void*)0))
   return -VAR_0;

  VAR_9->flash_timeout = VAR_2;
  VAR_9->led1_torch_brt = VAR_4;
  VAR_9->led1_flash_brt = VAR_3;
 }
 VAR_8->pdata = VAR_9;
 VAR_8->dev = &VAR_6->dev;

 VAR_10 = FUNC_7(VAR_8);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_6(VAR_8);
 if (VAR_10 < 0)
  return VAR_10;

 FUNC_5(VAR_6, VAR_8);

 return 0;
}
