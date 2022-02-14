
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si476x_core {int gpio_reset; int rds_fifo; int status_monitor; } ;
struct i2c_client {scalar_t__ irq; int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 struct si476x_core* FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct si476x_core*) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_0)
{
 struct si476x_core *VAR_1 = FUNC_4(VAR_0);

 FUNC_7(VAR_1);
 FUNC_6(&VAR_0->dev);

 if (VAR_0->irq)
  FUNC_1(VAR_0->irq);
 else
  FUNC_0(&VAR_1->status_monitor);

 FUNC_5(&VAR_1->rds_fifo);

 if (FUNC_3(VAR_1->gpio_reset))
  FUNC_2(VAR_1->gpio_reset);

 return 0;
}
