
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct gpio_chip {int dummy; } ;
struct bcm2835_pinctrl {int * irq_lock; int * enabled_irq_map; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int VAR_0 ;
 int FUNC_2 (struct bcm2835_pinctrl*,unsigned int,unsigned int) ;
 int FUNC_3 (struct bcm2835_pinctrl*,unsigned int,unsigned int) ;
 struct bcm2835_pinctrl* FUNC_4 (struct gpio_chip*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct gpio_chip* FUNC_5 (struct irq_data*) ;
 int FUNC_6 (struct irq_data*,int ) ;
 unsigned int FUNC_7 (struct irq_data*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 scalar_t__ FUNC_10 (unsigned int,int *) ;

__attribute__((used)) static int FUNC_11(struct irq_data *VAR_3, unsigned int VAR_4)
{
 struct gpio_chip *VAR_5 = FUNC_5(VAR_3);
 struct bcm2835_pinctrl *VAR_6 = FUNC_4(VAR_5);
 unsigned VAR_7 = FUNC_7(VAR_3);
 unsigned VAR_8 = FUNC_1(VAR_7);
 unsigned VAR_9 = FUNC_0(VAR_7);
 unsigned long VAR_10;
 int VAR_11;

 FUNC_8(&VAR_6->irq_lock[VAR_9], VAR_10);

 if (FUNC_10(VAR_8, &VAR_6->enabled_irq_map[VAR_9]))
  VAR_11 = FUNC_3(VAR_6, VAR_7, VAR_4);
 else
  VAR_11 = FUNC_2(VAR_6, VAR_7, VAR_4);

 if (VAR_4 & VAR_0)
  FUNC_6(VAR_3, VAR_1);
 else
  FUNC_6(VAR_3, VAR_2);

 FUNC_9(&VAR_6->irq_lock[VAR_9], VAR_10);

 return VAR_11;
}
