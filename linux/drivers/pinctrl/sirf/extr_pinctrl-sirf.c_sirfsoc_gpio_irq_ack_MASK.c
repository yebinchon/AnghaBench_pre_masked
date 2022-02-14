
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ regs; } ;
struct sirfsoc_gpio_chip {int lock; TYPE_1__ chip; } ;
struct sirfsoc_gpio_bank {int id; } ;
struct irq_data {int hwirq; } ;
struct gpio_chip {int dummy; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 struct sirfsoc_gpio_chip* FUNC_1 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_2 (struct irq_data*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 struct sirfsoc_gpio_bank* FUNC_4 (struct sirfsoc_gpio_chip*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct irq_data *VAR_0)
{
 struct gpio_chip *VAR_1 = FUNC_2(VAR_0);
 struct sirfsoc_gpio_chip *VAR_2 = FUNC_1(VAR_1);
 struct sirfsoc_gpio_bank *VAR_3 = FUNC_4(VAR_2, VAR_0->hwirq);
 int VAR_4 = FUNC_5(VAR_0->hwirq);
 u32 VAR_5, VAR_6;
 unsigned long VAR_7;

 VAR_6 = FUNC_0(VAR_3->id, VAR_4);

 FUNC_6(&VAR_2->lock, VAR_7);

 VAR_5 = FUNC_3(VAR_2->chip.regs + VAR_6);

 FUNC_8(VAR_5, VAR_2->chip.regs + VAR_6);

 FUNC_7(&VAR_2->lock, VAR_7);
}
