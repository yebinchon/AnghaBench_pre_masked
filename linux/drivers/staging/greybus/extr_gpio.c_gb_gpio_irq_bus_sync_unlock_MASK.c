
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {size_t hwirq; } ;
struct gpio_chip {int dummy; } ;
struct gb_gpio_line {int irq_type_pending; int masked_pending; scalar_t__ masked; int irq_type; } ;
struct gb_gpio_controller {int irq_lock; struct gb_gpio_line* lines; } ;


 int FUNC_0 (struct gb_gpio_controller*,size_t) ;
 int FUNC_1 (struct gb_gpio_controller*,size_t,int ) ;
 int FUNC_2 (struct gb_gpio_controller*,size_t) ;
 struct gb_gpio_controller* FUNC_3 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_4 (struct irq_data*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct irq_data *VAR_0)
{
 struct gpio_chip *VAR_1 = FUNC_4(VAR_0);
 struct gb_gpio_controller *VAR_2 = FUNC_3(VAR_1);
 struct gb_gpio_line *VAR_3 = &VAR_2->lines[VAR_0->hwirq];

 if (VAR_3->irq_type_pending) {
  FUNC_1(VAR_2, VAR_0->hwirq, VAR_3->irq_type);
  VAR_3->irq_type_pending = 0;
 }

 if (VAR_3->masked_pending) {
  if (VAR_3->masked)
   FUNC_0(VAR_2, VAR_0->hwirq);
  else
   FUNC_2(VAR_2, VAR_0->hwirq);
  VAR_3->masked_pending = 0;
 }

 FUNC_5(&VAR_2->irq_lock);
}
