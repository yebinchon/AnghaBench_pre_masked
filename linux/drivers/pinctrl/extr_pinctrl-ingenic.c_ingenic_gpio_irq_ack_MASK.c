
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
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ingenic_gpio_chip* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct ingenic_gpio_chip*,int) ;
 int FUNC_2 (struct ingenic_gpio_chip*,int ,int,int) ;
 struct gpio_chip* FUNC_3 (struct irq_data*) ;
 int FUNC_4 (struct ingenic_gpio_chip*,int,int ) ;
 scalar_t__ FUNC_5 (struct irq_data*) ;

__attribute__((used)) static void FUNC_6(struct irq_data *VAR_6)
{
 struct gpio_chip *VAR_7 = FUNC_3(VAR_6);
 struct ingenic_gpio_chip *VAR_8 = FUNC_0(VAR_7);
 int VAR_9 = VAR_6->hwirq;
 bool VAR_10;

 if (FUNC_5(VAR_6) == VAR_1) {




  VAR_10 = FUNC_1(VAR_8, VAR_9);
  if (VAR_10)
   FUNC_4(VAR_8, VAR_9, VAR_2);
  else
   FUNC_4(VAR_8, VAR_9, VAR_3);
 }

 if (VAR_8->jzpc->version >= VAR_0)
  FUNC_2(VAR_8, VAR_5, VAR_9, 0);
 else
  FUNC_2(VAR_8, VAR_4, VAR_9, 1);
}
