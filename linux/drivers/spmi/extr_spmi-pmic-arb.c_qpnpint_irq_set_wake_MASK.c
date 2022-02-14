
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spmi_pmic_arb {int irq; } ;
struct irq_data {int dummy; } ;


 struct spmi_pmic_arb* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct irq_data *VAR_0, unsigned int VAR_1)
{
 struct spmi_pmic_arb *VAR_2 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2->irq, VAR_1);
}
