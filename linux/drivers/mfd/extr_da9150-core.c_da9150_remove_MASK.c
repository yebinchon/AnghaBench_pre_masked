
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct da9150 {int core_qif; int dev; int regmap_irq_data; int irq; } ;


 struct da9150* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct da9150 *VAR_1 = FUNC_0(VAR_0);

 FUNC_3(VAR_1->irq, VAR_1->regmap_irq_data);
 FUNC_2(VAR_1->dev);
 FUNC_1(VAR_1->core_qif);

 return 0;
}
