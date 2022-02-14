
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct pm_irq_chip {unsigned int* config; } ;
struct irq_data {int dummy; } ;


 struct pm_irq_chip* FUNC_0 (struct irq_data*) ;
 unsigned int FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct pm_irq_chip*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_0)
{
 struct pm_irq_chip *VAR_1 = FUNC_0(VAR_0);
 unsigned int VAR_2 = FUNC_1(VAR_0);
 u8 VAR_3, VAR_4;

 VAR_3 = VAR_2 / 8;

 VAR_4 = VAR_1->config[VAR_2];
 FUNC_2(VAR_1, VAR_3, VAR_4);
}
