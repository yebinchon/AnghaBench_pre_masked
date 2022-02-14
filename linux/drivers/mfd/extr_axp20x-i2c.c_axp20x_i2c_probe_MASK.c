
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int irq; } ;
struct axp20x_dev {int regmap; int regmap_cfg; int * dev; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct axp20x_dev*) ;
 int FUNC_3 (struct axp20x_dev*) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,struct axp20x_dev*) ;
 struct axp20x_dev* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (struct i2c_client*,int ) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_2,
       const struct i2c_device_id *VAR_3)
{
 struct axp20x_dev *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_6(&VAR_2->dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->dev = &VAR_2->dev;
 VAR_4->irq = VAR_2->irq;
 FUNC_5(VAR_4->dev, VAR_4);

 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_4->regmap = FUNC_7(VAR_2, VAR_4->regmap_cfg);
 if (FUNC_0(VAR_4->regmap)) {
  VAR_5 = FUNC_1(VAR_4->regmap);
  FUNC_4(&VAR_2->dev, "regmap init failed: %d\n", VAR_5);
  return VAR_5;
 }

 return FUNC_2(VAR_4);
}
