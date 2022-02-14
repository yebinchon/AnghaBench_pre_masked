
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp8755_platform_data {int mphase; } ;
struct lp8755_chip {int irq; struct lp8755_platform_data* pdata; int * dev; int mphase; int regmap; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int irq; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,...) ;
 struct lp8755_platform_data* FUNC_3 (int *) ;
 void* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct i2c_client*,struct lp8755_chip*) ;
 int FUNC_8 (struct lp8755_chip*) ;
 int FUNC_9 (struct lp8755_chip*) ;
 int VAR_5 ;
 int FUNC_10 (struct lp8755_chip*) ;
 int FUNC_11 (struct lp8755_chip*,int,int) ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_6,
   const struct i2c_device_id *VAR_7)
{
 int VAR_8, VAR_9;
 struct lp8755_chip *VAR_10;
 struct lp8755_platform_data *VAR_11 = FUNC_3(&VAR_6->dev);

 if (!FUNC_6(VAR_6->adapter, VAR_3)) {
  FUNC_2(&VAR_6->dev, "i2c functionality check fail.\n");
  return -VAR_1;
 }

 VAR_10 = FUNC_4(&VAR_6->dev,
        sizeof(struct lp8755_chip), VAR_2);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->dev = &VAR_6->dev;
 VAR_10->regmap = FUNC_5(VAR_6, &VAR_5);
 if (FUNC_0(VAR_10->regmap)) {
  VAR_8 = FUNC_1(VAR_10->regmap);
  FUNC_2(&VAR_6->dev, "fail to allocate regmap %d\n", VAR_8);
  return VAR_8;
 }
 FUNC_7(VAR_6, VAR_10);

 if (VAR_11 != ((void*)0)) {
  VAR_10->pdata = VAR_11;
  VAR_10->mphase = VAR_11->mphase;
 } else {
  VAR_10->pdata = FUNC_4(VAR_10->dev,
         sizeof(struct lp8755_platform_data),
         VAR_2);
  if (!VAR_10->pdata)
   return -VAR_0;
  VAR_8 = FUNC_8(VAR_10);
  if (VAR_8 < 0) {
   FUNC_2(&VAR_6->dev, "fail to initialize chip\n");
   return VAR_8;
  }
 }

 VAR_8 = FUNC_10(VAR_10);
 if (VAR_8 < 0) {
  FUNC_2(&VAR_6->dev, "fail to initialize regulators\n");
  goto err;
 }

 VAR_10->irq = VAR_6->irq;
 VAR_8 = FUNC_9(VAR_10);
 if (VAR_8 < 0) {
  FUNC_2(&VAR_6->dev, "fail to irq config\n");
  goto err;
 }

 return VAR_8;

err:

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
  FUNC_11(VAR_10, VAR_9, 0x00);

 return VAR_8;
}
