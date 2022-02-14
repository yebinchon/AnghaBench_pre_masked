
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct owl_pinctrl {int dummy; } ;
struct irq_data {int hwirq; } ;
struct gpio_chip {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 struct owl_pinctrl* FUNC_0 (struct gpio_chip*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct gpio_chip* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct irq_data*,int ) ;
 int FUNC_3 (struct owl_pinctrl*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct irq_data *VAR_4, unsigned int VAR_5)
{
 struct gpio_chip *VAR_6 = FUNC_1(VAR_4);
 struct owl_pinctrl *VAR_7 = FUNC_0(VAR_6);

 if (VAR_5 & (VAR_1 | VAR_0))
  FUNC_2(VAR_4, VAR_3);
 else
  FUNC_2(VAR_4, VAR_2);

 FUNC_3(VAR_7, VAR_4->hwirq, VAR_5);

 return 0;
}
