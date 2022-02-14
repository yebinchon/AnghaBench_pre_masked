
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_data {int hwirq; int mask; } ;
struct gpio_chip {int dummy; } ;
struct armada_37xx_pinctrl {int base; int irq_lock; int regmap; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_1 (int*,struct irq_data*) ;
 struct armada_37xx_pinctrl* FUNC_2 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_3 (struct irq_data*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int,int*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static int FUNC_9(struct irq_data *VAR_4, unsigned int VAR_5)
{
 struct gpio_chip *VAR_6 = FUNC_3(VAR_4);
 struct armada_37xx_pinctrl *VAR_7 = FUNC_2(VAR_6);
 u32 VAR_8, VAR_9 = VAR_3;
 unsigned long VAR_10;

 FUNC_6(&VAR_7->irq_lock, VAR_10);
 FUNC_1(&VAR_9, VAR_4);
 VAR_8 = FUNC_4(VAR_7->base + VAR_9);
 switch (VAR_5) {
 case 128:
  VAR_8 &= ~(FUNC_0(VAR_4->hwirq % VAR_1));
  break;
 case 129:
  VAR_8 |= (FUNC_0(VAR_4->hwirq % VAR_1));
  break;
 case 130: {
  u32 VAR_11, VAR_12 = VAR_2;

  FUNC_1(&VAR_12, VAR_4);
  FUNC_5(VAR_7->regmap, VAR_12, &VAR_11);


  if (VAR_11 & VAR_4->mask)
   VAR_8 |= VAR_4->mask;
  else
   VAR_8 &= ~VAR_4->mask;
  break;
 }
 default:
  FUNC_7(&VAR_7->irq_lock, VAR_10);
  return -VAR_0;
 }
 FUNC_8(VAR_8, VAR_7->base + VAR_9);
 FUNC_7(&VAR_7->irq_lock, VAR_10);

 return 0;
}
