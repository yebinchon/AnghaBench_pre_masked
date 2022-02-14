
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct irq_data {int hwirq; } ;
struct gpio_chip {int dummy; } ;
struct armada_37xx_pinctrl {int irq_lock; scalar_t__ base; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__*,struct irq_data*) ;
 struct armada_37xx_pinctrl* FUNC_2 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_3 (struct irq_data*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct irq_data *VAR_2, unsigned int VAR_3)
{
 struct gpio_chip *VAR_4 = FUNC_3(VAR_2);
 struct armada_37xx_pinctrl *VAR_5 = FUNC_2(VAR_4);
 u32 VAR_6, VAR_7 = VAR_1;
 unsigned long VAR_8;

 FUNC_1(&VAR_7, VAR_2);
 FUNC_5(&VAR_5->irq_lock, VAR_8);
 VAR_6 = FUNC_4(VAR_5->base + VAR_7);
 if (VAR_3)
  VAR_6 |= (FUNC_0(VAR_2->hwirq % VAR_0));
 else
  VAR_6 &= ~(FUNC_0(VAR_2->hwirq % VAR_0));
 FUNC_7(VAR_6, VAR_5->base + VAR_7);
 FUNC_6(&VAR_5->irq_lock, VAR_8);

 return 0;
}
