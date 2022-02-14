
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int regs; } ;
struct sirfsoc_gpio_chip {int lock; TYPE_1__ chip; } ;
struct sirfsoc_gpio_bank {int id; } ;
struct irq_data {int hwirq; } ;
struct gpio_chip {int dummy; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 struct sirfsoc_gpio_chip* FUNC_1 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (int) ;
 struct sirfsoc_gpio_bank* FUNC_4 (struct sirfsoc_gpio_chip*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static int FUNC_9(struct irq_data *VAR_5, unsigned VAR_6)
{
 struct gpio_chip *VAR_7 = FUNC_2(VAR_5);
 struct sirfsoc_gpio_chip *VAR_8 = FUNC_1(VAR_7);
 struct sirfsoc_gpio_bank *VAR_9 = FUNC_4(VAR_8, VAR_5->hwirq);
 int VAR_10 = FUNC_5(VAR_5->hwirq);
 u32 VAR_11, VAR_12;
 unsigned long VAR_13;

 VAR_12 = FUNC_0(VAR_9->id, VAR_10);

 FUNC_6(&VAR_8->lock, VAR_13);

 VAR_11 = FUNC_3(VAR_8->chip.regs + VAR_12);
 VAR_11 &= ~(VAR_2 | VAR_4);

 switch (VAR_6) {
 case 128:
  break;
 case 131:
  VAR_11 |= VAR_0 |
   VAR_3;
  VAR_11 &= ~VAR_1;
  break;
 case 132:
  VAR_11 &= ~VAR_0;
  VAR_11 |= VAR_1 |
   VAR_3;
  break;
 case 133:
  VAR_11 |= VAR_0 |
   VAR_1 |
   VAR_3;
  break;
 case 129:
  VAR_11 &= ~(VAR_0 |
   VAR_3);
  VAR_11 |= VAR_1;
  break;
 case 130:
  VAR_11 |= VAR_0;
  VAR_11 &= ~(VAR_1 |
   VAR_3);
  break;
 }

 FUNC_8(VAR_11, VAR_8->chip.regs + VAR_12);

 FUNC_7(&VAR_8->lock, VAR_13);

 return 0;
}
