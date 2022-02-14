
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int psy; } ;
struct pm2xxx_charger {int lpn_pin; TYPE_2__ ac_chg; int regu; int charger_wq; TYPE_1__* pdata; int dev; } ;
struct i2c_client {int dummy; } ;
struct TYPE_3__ {int gpio_irq_number; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,struct pm2xxx_charger*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct pm2xxx_charger* FUNC_7 (struct i2c_client*) ;
 int FUNC_8 (struct pm2xxx_charger*) ;
 int FUNC_9 (TYPE_2__*,int,int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_0)
{
 struct pm2xxx_charger *VAR_1 = FUNC_7(VAR_0);


 FUNC_10(VAR_1->dev);

 FUNC_9(&VAR_1->ac_chg, 0, 0, 0);


 FUNC_1(FUNC_6(VAR_1->pdata->gpio_irq_number));


 FUNC_3(FUNC_6(VAR_1->pdata->gpio_irq_number), VAR_1);


 FUNC_0(VAR_1->charger_wq);

 FUNC_2();


 FUNC_12(VAR_1->regu);

 FUNC_11(VAR_1->ac_chg.psy);

 if (FUNC_5(VAR_1->lpn_pin))
  FUNC_4(VAR_1->lpn_pin);

 FUNC_8(VAR_1);

 return 0;
}
