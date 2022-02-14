
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qtnf_pcie_pearl_state {int irq_lock; int pcie_reg_base; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static inline void FUNC_4(struct qtnf_pcie_pearl_state *VAR_0)
{
 unsigned long VAR_1;

 FUNC_1(&VAR_0->irq_lock, VAR_1);
 FUNC_3(0x0, FUNC_0(VAR_0->pcie_reg_base));
 FUNC_2(&VAR_0->irq_lock, VAR_1);
}
