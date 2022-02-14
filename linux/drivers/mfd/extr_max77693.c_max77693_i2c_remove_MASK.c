
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77693_dev {int i2c_haptic; int i2c_muic; int irq_data_led; int irq; int irq_data_topsys; int irq_data_chg; int irq_data_muic; int dev; } ;
struct i2c_client {int dummy; } ;


 struct max77693_dev* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct max77693_dev *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(VAR_1->dev);

 FUNC_3(VAR_1->irq, VAR_1->irq_data_muic);
 FUNC_3(VAR_1->irq, VAR_1->irq_data_chg);
 FUNC_3(VAR_1->irq, VAR_1->irq_data_topsys);
 FUNC_3(VAR_1->irq, VAR_1->irq_data_led);

 FUNC_1(VAR_1->i2c_muic);
 FUNC_1(VAR_1->i2c_haptic);

 return 0;
}
