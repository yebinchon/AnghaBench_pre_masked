
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int irq; } ;
struct da9062 {int regmap_irq; int dev; } ;


 struct da9062* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0)
{
 struct da9062 *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->dev);
 FUNC_2(VAR_0->irq, VAR_1->regmap_irq);

 return 0;
}
