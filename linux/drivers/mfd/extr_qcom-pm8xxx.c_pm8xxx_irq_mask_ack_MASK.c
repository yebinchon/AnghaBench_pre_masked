
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pm_irq_chip {int* config; } ;
struct irq_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pm_irq_chip* FUNC_0 (struct irq_data*) ;
 unsigned int FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct pm_irq_chip*,int,int) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_2)
{
 struct pm_irq_chip *VAR_3 = FUNC_0(VAR_2);
 unsigned int VAR_4 = FUNC_1(VAR_2);
 u8 VAR_5, VAR_6;

 VAR_5 = VAR_4 / 8;

 VAR_6 = VAR_3->config[VAR_4] | VAR_1 | VAR_0;
 FUNC_2(VAR_3, VAR_5, VAR_6);
}
