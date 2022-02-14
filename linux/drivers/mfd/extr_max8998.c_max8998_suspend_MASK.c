
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max8998_dev {int irq; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 struct max8998_dev* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int ,int) ;
 struct i2c_client* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 struct i2c_client *VAR_1 = FUNC_3(VAR_0);
 struct max8998_dev *VAR_2 = FUNC_1(VAR_1);

 if (FUNC_0(VAR_0))
  FUNC_2(VAR_2->irq, 1);
 return 0;
}
