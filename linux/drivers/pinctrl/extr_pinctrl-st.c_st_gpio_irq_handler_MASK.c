
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_gpio_bank {int dummy; } ;
struct irq_desc {int dummy; } ;
struct irq_chip {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (struct st_gpio_bank*) ;
 int FUNC_1 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_2 (struct irq_chip*,struct irq_desc*) ;
 struct st_gpio_bank* FUNC_3 (struct gpio_chip*) ;
 struct irq_chip* FUNC_4 (struct irq_desc*) ;
 struct gpio_chip* FUNC_5 (struct irq_desc*) ;

__attribute__((used)) static void FUNC_6(struct irq_desc *VAR_0)
{

 struct irq_chip *VAR_1 = FUNC_4(VAR_0);
 struct gpio_chip *VAR_2 = FUNC_5(VAR_0);
 struct st_gpio_bank *VAR_3 = FUNC_3(VAR_2);

 FUNC_1(VAR_1, VAR_0);
 FUNC_0(VAR_3);
 FUNC_2(VAR_1, VAR_0);
}
