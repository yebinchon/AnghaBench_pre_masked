
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max8997_dev {int irq; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 struct max8997_dev* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int ,int) ;
 struct i2c_client* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0)
{
 struct i2c_client *VAR_1 = FUNC_4(VAR_0);
 struct max8997_dev *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_2->irq);
 if (FUNC_0(VAR_0))
  FUNC_3(VAR_2->irq, 1);
 return 0;
}
