
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct TYPE_2__ {int fwnode; } ;
struct fusb302_chip {int wq; TYPE_1__ tcpc_dev; int tcpm_port; int bc_lvl_handler; int irq_work; int gpio_int_n_irq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct fusb302_chip*) ;
 int FUNC_5 (struct fusb302_chip*) ;
 int FUNC_6 (int ) ;
 struct fusb302_chip* FUNC_7 (struct i2c_client*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_0)
{
 struct fusb302_chip *VAR_1 = FUNC_7(VAR_0);

 FUNC_3(VAR_1->gpio_int_n_irq);
 FUNC_4(VAR_1->gpio_int_n_irq, VAR_1);
 FUNC_1(&VAR_1->irq_work);
 FUNC_0(&VAR_1->bc_lvl_handler);
 FUNC_8(VAR_1->tcpm_port);
 FUNC_6(VAR_1->tcpc_dev.fwnode);
 FUNC_2(VAR_1->wq);
 FUNC_5(VAR_1);

 return 0;
}
