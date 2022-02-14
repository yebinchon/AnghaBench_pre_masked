
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm3560_platform_data {void** max_torch_brt; void** max_flash_brt; int max_flash_timeout; int peak; } ;
struct lm3560_flash {int lock; int * dev; struct lm3560_platform_data* pdata; int regmap; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 void* VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int FUNC_1 (int ) ;
 struct lm3560_platform_data* FUNC_2 (int *) ;
 void* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (struct i2c_client*,int *) ;
 int FUNC_5 (struct i2c_client*,struct lm3560_flash*) ;
 int FUNC_6 (struct lm3560_flash*) ;
 int VAR_9 ;
 int FUNC_7 (struct lm3560_flash*,size_t,char*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_10,
   const struct i2c_device_id *VAR_11)
{
 struct lm3560_flash *VAR_12;
 struct lm3560_platform_data *VAR_13 = FUNC_2(&VAR_10->dev);
 int VAR_14;

 VAR_12 = FUNC_3(&VAR_10->dev, sizeof(*VAR_12), VAR_2);
 if (VAR_12 == ((void*)0))
  return -VAR_1;

 VAR_12->regmap = FUNC_4(VAR_10, &VAR_9);
 if (FUNC_0(VAR_12->regmap)) {
  VAR_14 = FUNC_1(VAR_12->regmap);
  return VAR_14;
 }


 if (VAR_13 == ((void*)0)) {
  VAR_13 = FUNC_3(&VAR_10->dev, sizeof(*VAR_13), VAR_2);
  if (VAR_13 == ((void*)0))
   return -VAR_0;
  VAR_13->peak = VAR_7;
  VAR_13->max_flash_timeout = VAR_4;

  VAR_13->max_flash_brt[VAR_5] = VAR_3;
  VAR_13->max_torch_brt[VAR_5] = VAR_8;

  VAR_13->max_flash_brt[VAR_6] = VAR_3;
  VAR_13->max_torch_brt[VAR_6] = VAR_8;
 }
 VAR_12->pdata = VAR_13;
 VAR_12->dev = &VAR_10->dev;
 FUNC_8(&VAR_12->lock);

 VAR_14 = FUNC_7(VAR_12, VAR_5, "lm3560-led0");
 if (VAR_14 < 0)
  return VAR_14;

 VAR_14 = FUNC_7(VAR_12, VAR_6, "lm3560-led1");
 if (VAR_14 < 0)
  return VAR_14;

 VAR_14 = FUNC_6(VAR_12);
 if (VAR_14 < 0)
  return VAR_14;

 FUNC_5(VAR_10, VAR_12);

 return 0;
}
