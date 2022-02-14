
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pistachio_gpio_bank {int dummy; } ;
struct irq_data {int hwirq; } ;


 int VAR_0 ;
 int FUNC_0 (struct pistachio_gpio_bank*,int ,int ,int) ;
 struct pistachio_gpio_bank* FUNC_1 (struct irq_data*) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_1)
{
 struct pistachio_gpio_bank *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2, VAR_0, VAR_1->hwirq, 1);
}
