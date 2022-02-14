
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qtnf_pcie_pearl_state {int irq_lock; int pcie_reg_base; int pcie_irq_mask; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static inline void FUNC_4(struct qtnf_pcie_pearl_state *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_1->irq_lock, VAR_2);
 VAR_1->pcie_irq_mask &= ~VAR_0;
 FUNC_3(VAR_1->pcie_irq_mask, FUNC_0(VAR_1->pcie_reg_base));
 FUNC_2(&VAR_1->irq_lock, VAR_2);
}
