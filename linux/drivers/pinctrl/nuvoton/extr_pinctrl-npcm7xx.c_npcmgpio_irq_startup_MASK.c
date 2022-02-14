
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {unsigned int hwirq; int irq; TYPE_1__* chip; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int parent_device; } ;


 int FUNC_0 (int ,char*,unsigned int,int ) ;
 struct gpio_chip* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct gpio_chip*,unsigned int) ;
 int FUNC_3 (struct irq_data*) ;
 int FUNC_4 (struct irq_data*) ;

__attribute__((used)) static unsigned int FUNC_5(struct irq_data *VAR_0)
{
 struct gpio_chip *VAR_1 = FUNC_1(VAR_0);
 unsigned int VAR_2 = VAR_0->hwirq;


 FUNC_0(VAR_0->chip->parent_device, "startup: %u.%u\n", VAR_2, VAR_0->irq);
 FUNC_2(VAR_1, VAR_2);
 FUNC_3(VAR_0);
 FUNC_4(VAR_0);

 return 0;
}
