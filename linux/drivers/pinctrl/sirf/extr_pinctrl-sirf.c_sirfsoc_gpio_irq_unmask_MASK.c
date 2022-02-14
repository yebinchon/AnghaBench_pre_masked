
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


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 struct sirfsoc_gpio_chip* FUNC_1 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_2 (struct irq_data*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 struct sirfsoc_gpio_bank* FUNC_4 (struct sirfsoc_gpio_chip*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct irq_data *VAR_2)
{
 struct gpio_chip *VAR_3 = FUNC_2(VAR_2);
 struct sirfsoc_gpio_chip *VAR_4 = FUNC_1(VAR_3);
 struct sirfsoc_gpio_bank *VAR_5 = FUNC_4(VAR_4, VAR_2->hwirq);
 int VAR_6 = FUNC_5(VAR_2->hwirq);
 u32 VAR_7, VAR_8;
 unsigned long VAR_9;

 VAR_8 = FUNC_0(VAR_5->id, VAR_6);

 FUNC_6(&VAR_4->lock, VAR_9);

 VAR_7 = FUNC_3(VAR_4->chip.regs + VAR_8);
 VAR_7 &= ~VAR_1;
 VAR_7 |= VAR_0;
 FUNC_8(VAR_7, VAR_4->chip.regs + VAR_8);

 FUNC_7(&VAR_4->lock, VAR_9);
}
