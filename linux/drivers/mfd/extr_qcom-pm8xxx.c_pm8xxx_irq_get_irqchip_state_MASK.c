
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct pm_irq_chip {int pm_irq_lock; int regmap; } ;
struct irq_data {int dummy; } ;
typedef enum irqchip_irq_state { ____Placeholder_irqchip_irq_state } irqchip_irq_state ;


 unsigned int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct pm_irq_chip* FUNC_1 (struct irq_data*) ;
 unsigned int FUNC_2 (struct irq_data*) ;
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 (int ,int ,unsigned int*) ;
 int FUNC_5 (int ,int ,unsigned int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct irq_data *VAR_4,
     enum irqchip_irq_state VAR_5,
     bool *VAR_6)
{
 struct pm_irq_chip *VAR_7 = FUNC_1(VAR_4);
 unsigned int VAR_8 = FUNC_2(VAR_4);
 unsigned int VAR_9;
 int VAR_10;
 u8 VAR_11;
 int VAR_12;

 if (VAR_5 != VAR_1)
  return -VAR_0;

 VAR_11 = VAR_8 / 8;
 VAR_10 = VAR_8 % 8;

 FUNC_6(&VAR_7->pm_irq_lock);
 VAR_12 = FUNC_5(VAR_7->regmap, VAR_2, VAR_11);
 if (VAR_12) {
  FUNC_3("Failed Selecting Block %d rc=%d\n", VAR_11, VAR_12);
  goto bail;
 }

 VAR_12 = FUNC_4(VAR_7->regmap, VAR_3, &VAR_9);
 if (VAR_12) {
  FUNC_3("Failed Reading Status rc=%d\n", VAR_12);
  goto bail;
 }

 *VAR_6 = !!(VAR_9 & FUNC_0(VAR_10));
bail:
 FUNC_7(&VAR_7->pm_irq_lock);

 return VAR_12;
}
