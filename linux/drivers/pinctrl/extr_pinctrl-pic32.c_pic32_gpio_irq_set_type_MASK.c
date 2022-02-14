
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pic32_gpio_bank {scalar_t__ reg_base; } ;
struct irq_data {int hwirq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 unsigned int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (struct irq_data*,int ) ;
 struct pic32_gpio_bank* FUNC_4 (struct irq_data*) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct irq_data *VAR_7, unsigned int VAR_8)
{
 struct pic32_gpio_bank *VAR_9 = FUNC_4(VAR_7);
 u32 VAR_10 = FUNC_0(VAR_7->hwirq);

 switch (VAR_8 & VAR_4) {
 case 128:

  FUNC_5(VAR_10, VAR_9->reg_base + FUNC_2(VAR_1));

  FUNC_5(VAR_10, VAR_9->reg_base + FUNC_1(VAR_2));

  FUNC_5(FUNC_0(VAR_5), VAR_9->reg_base + FUNC_2(VAR_0));
  break;
 case 129:

  FUNC_5(VAR_10, VAR_9->reg_base + FUNC_1(VAR_1));

  FUNC_5(VAR_10, VAR_9->reg_base + FUNC_2(VAR_2));

  FUNC_5(FUNC_0(VAR_5), VAR_9->reg_base + FUNC_2(VAR_0));
  break;
 case 130:

  FUNC_5(VAR_10, VAR_9->reg_base + FUNC_2(VAR_1));

  FUNC_5(VAR_10, VAR_9->reg_base + FUNC_2(VAR_2));

  FUNC_5(FUNC_0(VAR_5), VAR_9->reg_base + FUNC_2(VAR_0));
  break;
 default:
  return -VAR_3;
 }

 FUNC_3(VAR_7, VAR_6);

 return 0;
}
