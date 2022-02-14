
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct samsung_pinctrl_drv_data {scalar_t__ virt_base; } ;
struct samsung_pin_bank {unsigned char eint_offset; struct samsung_pinctrl_drv_data* drvdata; } ;
struct irq_data {unsigned char hwirq; } ;


 scalar_t__ VAR_0 ;
 struct samsung_pin_bank* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_1)
{
 struct samsung_pin_bank *VAR_2 = FUNC_0(VAR_1);
 struct samsung_pinctrl_drv_data *VAR_3 = VAR_2->drvdata;
 unsigned char VAR_4 = VAR_2->eint_offset + VAR_1->hwirq;

 FUNC_1(1UL << VAR_4, VAR_3->virt_base + VAR_0);
}
