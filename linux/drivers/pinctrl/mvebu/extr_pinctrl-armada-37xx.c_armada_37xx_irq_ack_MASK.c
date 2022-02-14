
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct irq_data {int mask; } ;
struct gpio_chip {int dummy; } ;
struct armada_37xx_pinctrl {int irq_lock; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__*,struct irq_data*) ;
 struct armada_37xx_pinctrl* FUNC_1 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct irq_data *VAR_1)
{
 struct gpio_chip *VAR_2 = FUNC_2(VAR_1);
 struct armada_37xx_pinctrl *VAR_3 = FUNC_1(VAR_2);
 u32 VAR_4 = VAR_0;
 unsigned long VAR_5;

 FUNC_0(&VAR_4, VAR_1);
 FUNC_3(&VAR_3->irq_lock, VAR_5);
 FUNC_5(VAR_1->mask, VAR_3->base + VAR_4);
 FUNC_4(&VAR_3->irq_lock, VAR_5);
}
