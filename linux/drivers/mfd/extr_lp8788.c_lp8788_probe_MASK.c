
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp8788_platform_data {int dummy; } ;
struct lp8788 {int * dev; struct lp8788_platform_data* pdata; int regmap; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int irq; int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int) ;
 struct lp8788_platform_data* FUNC_4 (int *) ;
 struct lp8788* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (struct i2c_client*,int *) ;
 int FUNC_7 (struct i2c_client*,struct lp8788*) ;
 int VAR_2 ;
 int FUNC_8 (struct lp8788*,int ) ;
 int FUNC_9 (struct lp8788*) ;
 int VAR_3 ;
 int FUNC_10 (int *,int,int ,int ,int *,int ,int *) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_4, const struct i2c_device_id *VAR_5)
{
 struct lp8788 *VAR_6;
 struct lp8788_platform_data *VAR_7 = FUNC_4(&VAR_4->dev);
 int VAR_8;

 VAR_6 = FUNC_5(&VAR_4->dev, sizeof(struct lp8788), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->regmap = FUNC_6(VAR_4, &VAR_3);
 if (FUNC_1(VAR_6->regmap)) {
  VAR_8 = FUNC_2(VAR_6->regmap);
  FUNC_3(&VAR_4->dev, "regmap init i2c err: %d\n", VAR_8);
  return VAR_8;
 }

 VAR_6->pdata = VAR_7;
 VAR_6->dev = &VAR_4->dev;
 FUNC_7(VAR_4, VAR_6);

 VAR_8 = FUNC_9(VAR_6);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_8(VAR_6, VAR_4->irq);
 if (VAR_8)
  return VAR_8;

 return FUNC_10(VAR_6->dev, -1, VAR_2,
          FUNC_0(VAR_2), ((void*)0), 0, ((void*)0));
}
