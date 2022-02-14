
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct oxnas_gpio_bank {scalar_t__ reg_base; } ;
struct irq_data {int hwirq; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct oxnas_gpio_bank* FUNC_1 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_2 (struct irq_data*) ;
 unsigned int FUNC_3 (struct irq_data*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct irq_data *VAR_4)
{
 struct gpio_chip *VAR_5 = FUNC_2(VAR_4);
 struct oxnas_gpio_bank *VAR_6 = FUNC_1(VAR_5);
 unsigned int VAR_7 = FUNC_3(VAR_4);
 u32 VAR_8 = FUNC_0(VAR_4->hwirq);

 if (VAR_7 & VAR_2)
  FUNC_5(FUNC_4(VAR_6->reg_base + VAR_3) & ~VAR_8,
         VAR_6->reg_base + VAR_3);

 if (VAR_7 & VAR_1)
  FUNC_5(FUNC_4(VAR_6->reg_base + VAR_0) & ~VAR_8,
         VAR_6->reg_base + VAR_0);
}
