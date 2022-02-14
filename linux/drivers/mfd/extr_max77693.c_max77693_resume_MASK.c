
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77693_dev {int irq; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct max77693_dev* FUNC_3 (struct i2c_client*) ;
 struct i2c_client* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0)
{
 struct i2c_client *VAR_1 = FUNC_4(VAR_0);
 struct max77693_dev *VAR_2 = FUNC_3(VAR_1);

 if (FUNC_0(VAR_0)) {
  FUNC_1(VAR_2->irq);
  FUNC_2(VAR_2->irq);
 }

 return 0;
}
