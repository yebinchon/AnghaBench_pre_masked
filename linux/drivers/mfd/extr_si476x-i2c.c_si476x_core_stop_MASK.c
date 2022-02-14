
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct si476x_power_down_args {int xosc; } ;
struct si476x_core {int gpio_reset; int status_monitor; TYPE_1__* client; int is_alive; } ;
struct TYPE_2__ {scalar_t__ irq; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct si476x_core*,struct si476x_power_down_args*) ;

int FUNC_6(struct si476x_core *VAR_0, bool VAR_1)
{
 int VAR_2 = 0;
 FUNC_0(&VAR_0->is_alive, 0);

 if (VAR_1) {




  struct si476x_power_down_args VAR_3 = {
   .xosc = 0,
  };
  VAR_2 = FUNC_5(VAR_0, &VAR_3);
 }




 if (VAR_0->client->irq)
  FUNC_2(VAR_0->client->irq);
 else
  FUNC_1(&VAR_0->status_monitor);

 if (!VAR_1) {
  if (FUNC_3(VAR_0->gpio_reset))
   FUNC_4(VAR_0->gpio_reset, 0);
 }
 return VAR_2;
}
