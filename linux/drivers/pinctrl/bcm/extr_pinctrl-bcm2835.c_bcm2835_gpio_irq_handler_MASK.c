
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_desc {int dummy; } ;
struct irq_chip {int dummy; } ;
struct TYPE_2__ {int* parents; } ;
struct gpio_chip {TYPE_1__ irq; } ;
struct bcm2835_pinctrl {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct bcm2835_pinctrl*,int,int) ;
 int FUNC_2 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_3 (struct irq_chip*,struct irq_desc*) ;
 struct bcm2835_pinctrl* FUNC_4 (struct gpio_chip*) ;
 struct irq_chip* FUNC_5 (struct irq_desc*) ;
 struct gpio_chip* FUNC_6 (struct irq_desc*) ;
 int FUNC_7 (struct irq_desc*) ;

__attribute__((used)) static void FUNC_8(struct irq_desc *VAR_1)
{
 struct gpio_chip *VAR_2 = FUNC_6(VAR_1);
 struct bcm2835_pinctrl *VAR_3 = FUNC_4(VAR_2);
 struct irq_chip *VAR_4 = FUNC_5(VAR_1);
 int VAR_5 = FUNC_7(VAR_1);
 int VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if (VAR_2->irq.parents[VAR_7] == VAR_5) {
   VAR_6 = VAR_7;
   break;
  }
 }

 if (VAR_7 == VAR_0)
  FUNC_0();

 FUNC_2(VAR_4, VAR_1);

 switch (VAR_6) {
 case 0:
  FUNC_1(VAR_3, 0, 0x0fffffff);
  break;
 case 1:
  FUNC_1(VAR_3, 0, 0xf0000000);
  FUNC_1(VAR_3, 1, 0x00003fff);
  break;
 case 2:
  FUNC_1(VAR_3, 1, 0x003fc000);
  break;
 }

 FUNC_3(VAR_4, VAR_1);
}
