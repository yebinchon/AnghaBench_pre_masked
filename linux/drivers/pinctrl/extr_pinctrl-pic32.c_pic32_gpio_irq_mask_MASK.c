
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pic32_gpio_bank {scalar_t__ reg_base; } ;
struct irq_data {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 struct pic32_gpio_bank* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_2)
{
 struct pic32_gpio_bank *VAR_3 = FUNC_2(VAR_2);

 FUNC_3(FUNC_0(VAR_1), VAR_3->reg_base + FUNC_1(VAR_0));
}
