
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct samsung_pinctrl_drv_data {int nr_banks; int dev; struct samsung_pin_bank* pin_banks; } ;
struct samsung_pin_bank {scalar_t__ eint_type; int name; struct exynos_irq_chip* irq_chip; } ;
struct exynos_irq_chip {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct samsung_pinctrl_drv_data*,struct exynos_irq_chip*) ;
 int FUNC_2 (struct samsung_pinctrl_drv_data*,struct samsung_pin_bank*) ;

void FUNC_3(struct samsung_pinctrl_drv_data *VAR_2)
{
 struct samsung_pin_bank *VAR_3 = VAR_2->pin_banks;
 struct exynos_irq_chip *VAR_4 = ((void*)0);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2->nr_banks; ++VAR_5, ++VAR_3) {
  if (VAR_3->eint_type == VAR_0)
   FUNC_2(VAR_2, VAR_3);
  else if (VAR_3->eint_type == VAR_1) {
   if (!VAR_4) {
    VAR_4 = VAR_3->irq_chip;
    FUNC_1(VAR_2,
            VAR_4);
   } else if (VAR_3->irq_chip != VAR_4) {
    FUNC_0(VAR_2->dev,
      "More than one external wakeup interrupt chip configured (bank: %s). This is not supported by hardware nor by driver.\n",
      VAR_3->name);
   }
  }
 }
}
