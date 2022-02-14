
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcs_soc_data {int dummy; } ;
struct irq_data {int irq; } ;


 struct pcs_soc_data* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (struct pcs_soc_data*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_0)
{
 struct pcs_soc_data *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1, VAR_0->irq, 0);
}
