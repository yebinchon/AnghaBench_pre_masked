
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct samsung_pinctrl_drv_data {int nr_banks; struct samsung_pin_bank* pin_banks; } ;
struct samsung_pin_bank {scalar_t__ eint_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct samsung_pinctrl_drv_data*,struct samsung_pin_bank*) ;

void FUNC_1(struct samsung_pinctrl_drv_data *VAR_1)
{
 struct samsung_pin_bank *VAR_2 = VAR_1->pin_banks;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->nr_banks; ++VAR_3, ++VAR_2)
  if (VAR_2->eint_type == VAR_0)
   FUNC_0(VAR_1, VAR_2);
}
