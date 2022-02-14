
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int hwirq; } ;
struct ingenic_gpio_chip {int dummy; } ;
struct gpio_chip {int dummy; } ;







 struct ingenic_gpio_chip* FUNC_0 (struct gpio_chip*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ingenic_gpio_chip*,int ) ;
 struct gpio_chip* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (struct irq_data*,int ) ;
 int FUNC_4 (struct ingenic_gpio_chip*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct irq_data *VAR_3, unsigned int VAR_4)
{
 struct gpio_chip *VAR_5 = FUNC_2(VAR_3);
 struct ingenic_gpio_chip *VAR_6 = FUNC_0(VAR_5);

 switch (VAR_4) {
 case 132:
 case 130:
 case 131:
  FUNC_3(VAR_3, VAR_1);
  break;
 case 129:
 case 128:
  FUNC_3(VAR_3, VAR_2);
  break;
 default:
  FUNC_3(VAR_3, VAR_0);
 }

 if (VAR_4 == 132) {





  bool VAR_7 = FUNC_1(VAR_6, VAR_3->hwirq);

  VAR_4 = VAR_7 ? 131 : 130;
 }

 FUNC_4(VAR_6, VAR_3->hwirq, VAR_4);
 return 0;
}
