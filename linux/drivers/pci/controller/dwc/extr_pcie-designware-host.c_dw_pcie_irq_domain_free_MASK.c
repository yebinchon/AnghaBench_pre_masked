
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_port {int lock; int msi_irq_in_use; } ;
struct irq_domain {int dummy; } ;
struct irq_data {int hwirq; } ;


 int FUNC_0 (int ,int ,int ) ;
 struct pcie_port* FUNC_1 (struct irq_data*) ;
 struct irq_data* FUNC_2 (struct irq_domain*,unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct irq_domain *VAR_0,
        unsigned int VAR_1, unsigned int VAR_2)
{
 struct irq_data *VAR_3 = FUNC_2(VAR_0, VAR_1);
 struct pcie_port *VAR_4 = FUNC_1(VAR_3);
 unsigned long VAR_5;

 FUNC_4(&VAR_4->lock, VAR_5);

 FUNC_0(VAR_4->msi_irq_in_use, VAR_3->hwirq,
         FUNC_3(VAR_2));

 FUNC_5(&VAR_4->lock, VAR_5);
}
