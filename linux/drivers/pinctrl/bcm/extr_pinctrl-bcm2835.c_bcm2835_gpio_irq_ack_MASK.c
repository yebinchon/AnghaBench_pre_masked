
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct gpio_chip {int dummy; } ;
struct bcm2835_pinctrl {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bcm2835_pinctrl*,int ,unsigned int) ;
 struct bcm2835_pinctrl* FUNC_1 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_2 (struct irq_data*) ;
 unsigned int FUNC_3 (struct irq_data*) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_1)
{
 struct gpio_chip *VAR_2 = FUNC_2(VAR_1);
 struct bcm2835_pinctrl *VAR_3 = FUNC_1(VAR_2);
 unsigned VAR_4 = FUNC_3(VAR_1);

 FUNC_0(VAR_3, VAR_0, VAR_4);
}
