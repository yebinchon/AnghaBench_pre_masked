
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct gpio_chip {int dummy; } ;
struct bcm2835_pinctrl {int * irq_lock; int * enabled_irq_map; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct bcm2835_pinctrl*,unsigned int,int) ;
 struct bcm2835_pinctrl* FUNC_3 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_4 (struct irq_data*) ;
 unsigned int FUNC_5 (struct irq_data*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (unsigned int,int *) ;

__attribute__((used)) static void FUNC_9(struct irq_data *VAR_0)
{
 struct gpio_chip *VAR_1 = FUNC_4(VAR_0);
 struct bcm2835_pinctrl *VAR_2 = FUNC_3(VAR_1);
 unsigned VAR_3 = FUNC_5(VAR_0);
 unsigned VAR_4 = FUNC_1(VAR_3);
 unsigned VAR_5 = FUNC_0(VAR_3);
 unsigned long VAR_6;

 FUNC_6(&VAR_2->irq_lock[VAR_5], VAR_6);
 FUNC_8(VAR_4, &VAR_2->enabled_irq_map[VAR_5]);
 FUNC_2(VAR_2, VAR_3, 1);
 FUNC_7(&VAR_2->irq_lock[VAR_5], VAR_6);
}
