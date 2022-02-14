
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pic32_gpio_bank {scalar_t__ reg_base; } ;
struct irq_data {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct pic32_gpio_bank* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_1)
{
 struct pic32_gpio_bank *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(0, VAR_2->reg_base + VAR_0);
}
