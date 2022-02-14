
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct r8192_priv {int polling_timer_on; int gpio_polling_timer; int gpio_change_rf_wq; } ;


 int VAR_0 ;
 struct r8192_priv* FUNC_0 (int ,struct timer_list*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 struct r8192_priv* VAR_3 ;
 int FUNC_3 (int *,int ) ;

void FUNC_4(struct timer_list *VAR_4)
{
 struct r8192_priv *VAR_5 = FUNC_0(VAR_5, VAR_4, VAR_1);

 VAR_5->polling_timer_on = 1;

 FUNC_3(&VAR_5->gpio_change_rf_wq, 0);

 FUNC_1(&VAR_5->gpio_polling_timer, VAR_2 +
    FUNC_2(VAR_0));
}
