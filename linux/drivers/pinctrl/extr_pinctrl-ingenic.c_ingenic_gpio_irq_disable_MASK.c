
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {int hwirq; } ;
struct ingenic_gpio_chip {TYPE_1__* jzpc; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {scalar_t__ version; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ingenic_gpio_chip* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct ingenic_gpio_chip*,int ,int,int) ;
 struct gpio_chip* FUNC_3 (struct irq_data*) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_3)
{
 struct gpio_chip *VAR_4 = FUNC_3(VAR_3);
 struct ingenic_gpio_chip *VAR_5 = FUNC_0(VAR_4);
 int VAR_6 = VAR_3->hwirq;

 FUNC_1(VAR_3);

 if (VAR_5->jzpc->version >= VAR_0)
  FUNC_2(VAR_5, VAR_2, VAR_6, 0);
 else
  FUNC_2(VAR_5, VAR_1, VAR_6, 0);
}
