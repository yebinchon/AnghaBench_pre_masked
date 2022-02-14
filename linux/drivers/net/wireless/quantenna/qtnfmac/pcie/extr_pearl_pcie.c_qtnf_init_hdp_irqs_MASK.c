
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qtnf_pcie_pearl_state {int pcie_irq_mask; int irq_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_2(struct qtnf_pcie_pearl_state *VAR_2)
{
 unsigned long VAR_3;

 FUNC_0(&VAR_2->irq_lock, VAR_3);
 VAR_2->pcie_irq_mask = (VAR_0 | VAR_1);
 FUNC_1(&VAR_2->irq_lock, VAR_3);
}
