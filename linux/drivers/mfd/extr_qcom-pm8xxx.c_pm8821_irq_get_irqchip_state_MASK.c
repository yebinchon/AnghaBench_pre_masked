
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pm_irq_chip {int regmap; } ;
struct irq_data {int dummy; } ;
typedef enum irqchip_irq_state { ____Placeholder_irqchip_irq_state } irqchip_irq_state ;


 unsigned int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 struct pm_irq_chip* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (struct irq_data*) ;
 int FUNC_4 (char*,int,int) ;
 int FUNC_5 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_6(struct irq_data *VAR_1,
     enum irqchip_irq_state VAR_2,
     bool *VAR_3)
{
 struct pm_irq_chip *VAR_4 = FUNC_2(VAR_1);
 int VAR_5, VAR_6 = FUNC_3(VAR_1);
 u8 VAR_7, VAR_8, VAR_9;
 unsigned int VAR_10;

 VAR_7 = VAR_6 / 8;
 VAR_9 = VAR_7 / VAR_0;
 VAR_8 = VAR_6 % 8;
 VAR_7 %= VAR_0;

 VAR_5 = FUNC_5(VAR_4->regmap,
  FUNC_1(VAR_9, VAR_7), &VAR_10);
 if (VAR_5) {
  FUNC_4("Reading Status of IRQ %d failed rc=%d\n", VAR_6, VAR_5);
  return VAR_5;
 }

 *VAR_3 = !!(VAR_10 & FUNC_0(VAR_8));

 return VAR_5;
}
