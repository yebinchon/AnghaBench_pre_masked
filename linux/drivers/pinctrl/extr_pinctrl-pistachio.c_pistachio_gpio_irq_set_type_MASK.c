
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pistachio_gpio_bank {int dummy; } ;
struct irq_data {int hwirq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;





 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_0 (struct pistachio_gpio_bank*,int ,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct irq_data*,int ) ;
 struct pistachio_gpio_bank* FUNC_2 (struct irq_data*) ;

__attribute__((used)) static int FUNC_3(struct irq_data *VAR_12, unsigned int VAR_13)
{
 struct pistachio_gpio_bank *VAR_14 = FUNC_2(VAR_12);

 switch (VAR_13 & VAR_9) {
 case 130:
  FUNC_0(VAR_14, VAR_1, VAR_12->hwirq, 1);
  FUNC_0(VAR_14, VAR_5, VAR_12->hwirq,
     VAR_6);
  FUNC_0(VAR_14, VAR_2, VAR_12->hwirq,
     VAR_4);
  break;
 case 131:
  FUNC_0(VAR_14, VAR_1, VAR_12->hwirq, 0);
  FUNC_0(VAR_14, VAR_5, VAR_12->hwirq,
     VAR_6);
  FUNC_0(VAR_14, VAR_2, VAR_12->hwirq,
     VAR_4);
  break;
 case 132:
  FUNC_0(VAR_14, VAR_5, VAR_12->hwirq,
     VAR_6);
  FUNC_0(VAR_14, VAR_2, VAR_12->hwirq,
     VAR_3);
  break;
 case 129:
  FUNC_0(VAR_14, VAR_1, VAR_12->hwirq, 1);
  FUNC_0(VAR_14, VAR_5, VAR_12->hwirq,
     VAR_7);
  break;
 case 128:
  FUNC_0(VAR_14, VAR_1, VAR_12->hwirq, 0);
  FUNC_0(VAR_14, VAR_5, VAR_12->hwirq,
     VAR_7);
  break;
 default:
  return -VAR_0;
 }

 if (VAR_13 & VAR_8)
  FUNC_1(VAR_12, VAR_11);
 else
  FUNC_1(VAR_12, VAR_10);

 return 0;
}
