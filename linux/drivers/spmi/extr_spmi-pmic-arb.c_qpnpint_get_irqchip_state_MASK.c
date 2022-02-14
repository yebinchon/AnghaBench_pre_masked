
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct irq_data {int hwirq; } ;
typedef enum irqchip_irq_state { ____Placeholder_irqchip_irq_state } irqchip_irq_state ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct irq_data*,int ,int*,int) ;

__attribute__((used)) static int FUNC_3(struct irq_data *VAR_3,
         enum irqchip_irq_state VAR_4,
         bool *VAR_5)
{
 u8 VAR_6 = FUNC_1(VAR_3->hwirq);
 u8 VAR_7 = 0;

 if (VAR_4 != VAR_1)
  return -VAR_0;

 FUNC_2(VAR_3, VAR_2, &VAR_7, 1);
 *VAR_5 = !!(VAR_7 & FUNC_0(VAR_6));

 return 0;
}
