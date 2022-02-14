
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max8907 {int i2c_rtc; int irqc_chg; TYPE_1__* i2c_gen; int irqc_on_off; int irqc_rtc; int dev; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int irq; } ;


 struct max8907* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct max8907 *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(VAR_1->dev);

 FUNC_3(VAR_1->i2c_gen->irq, VAR_1->irqc_rtc);
 FUNC_3(VAR_1->i2c_gen->irq, VAR_1->irqc_on_off);
 FUNC_3(VAR_1->i2c_gen->irq, VAR_1->irqc_chg);

 FUNC_1(VAR_1->i2c_rtc);

 return 0;
}
