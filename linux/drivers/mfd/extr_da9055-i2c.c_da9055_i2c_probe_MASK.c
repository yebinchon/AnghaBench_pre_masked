
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct i2c_client {int irq; int dev; } ;
struct da9055 {int chip_irq; int * dev; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct da9055*) ;
 int VAR_2 ;
 int FUNC_3 (int *,char*,int) ;
 struct da9055* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (struct i2c_client*,struct da9055*) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_3,
          const struct i2c_device_id *VAR_4)
{
 struct da9055 *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_4(&VAR_3->dev, sizeof(struct da9055), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->regmap = FUNC_5(VAR_3, &VAR_2);
 if (FUNC_0(VAR_5->regmap)) {
  VAR_6 = FUNC_1(VAR_5->regmap);
  FUNC_3(&VAR_3->dev, "Failed to allocate register map: %d\n",
   VAR_6);
  return VAR_6;
 }

 VAR_5->dev = &VAR_3->dev;
 VAR_5->chip_irq = VAR_3->irq;

 FUNC_6(VAR_3, VAR_5);

 return FUNC_2(VAR_5);
}
