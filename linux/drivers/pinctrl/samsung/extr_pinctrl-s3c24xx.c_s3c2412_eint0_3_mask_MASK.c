
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct samsung_pinctrl_drv_data {scalar_t__ virt_base; } ;
struct samsung_pin_bank {struct samsung_pinctrl_drv_data* drvdata; } ;
struct irq_data {unsigned long hwirq; } ;


 scalar_t__ VAR_0 ;
 struct samsung_pin_bank* FUNC_0 (struct irq_data*) ;
 unsigned long FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_1)
{
 struct samsung_pin_bank *VAR_2 = FUNC_0(VAR_1);
 struct samsung_pinctrl_drv_data *VAR_3 = VAR_2->drvdata;
 unsigned long VAR_4;

 VAR_4 = FUNC_1(VAR_3->virt_base + VAR_0);
 VAR_4 |= (1UL << VAR_1->hwirq);
 FUNC_2(VAR_4, VAR_3->virt_base + VAR_0);
}
