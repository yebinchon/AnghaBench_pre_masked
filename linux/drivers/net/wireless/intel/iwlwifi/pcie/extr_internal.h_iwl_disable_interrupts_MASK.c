
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_trans_pcie {int irq_lock; } ;
struct iwl_trans {int dummy; } ;


 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;
 int FUNC_1 (struct iwl_trans*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(struct iwl_trans *VAR_0)
{
 struct iwl_trans_pcie *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(&VAR_1->irq_lock);
 FUNC_1(VAR_0);
 FUNC_3(&VAR_1->irq_lock);
}
