
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct gpio_chip {int dummy; } ;
struct bcm2835_pinctrl {int * irq_lock; int * enabled_irq_map; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct bcm2835_pinctrl*,unsigned int,int) ;
 int FUNC_3 (struct bcm2835_pinctrl*,int ,unsigned int) ;
 int FUNC_4 (unsigned int,int *) ;
 struct bcm2835_pinctrl* FUNC_5 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_6 (struct irq_data*) ;
 unsigned int FUNC_7 (struct irq_data*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_10(struct irq_data *VAR_1)
{
 struct gpio_chip *VAR_2 = FUNC_6(VAR_1);
 struct bcm2835_pinctrl *VAR_3 = FUNC_5(VAR_2);
 unsigned VAR_4 = FUNC_7(VAR_1);
 unsigned VAR_5 = FUNC_1(VAR_4);
 unsigned VAR_6 = FUNC_0(VAR_4);
 unsigned long VAR_7;

 FUNC_8(&VAR_3->irq_lock[VAR_6], VAR_7);
 FUNC_2(VAR_3, VAR_4, 0);

 FUNC_3(VAR_3, VAR_0, VAR_4);
 FUNC_4(VAR_5, &VAR_3->enabled_irq_map[VAR_6]);
 FUNC_9(&VAR_3->irq_lock[VAR_6], VAR_7);
}
