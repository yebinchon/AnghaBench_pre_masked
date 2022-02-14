
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct iwl_txq {scalar_t__ read_ptr; scalar_t__ write_ptr; int lock; struct iwl_trans_pcie* trans_pcie; } ;
struct iwl_trans_pcie {int dummy; } ;
struct iwl_trans {int dummy; } ;


 struct iwl_txq* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct iwl_trans*) ;
 struct iwl_trans* FUNC_2 (struct iwl_trans_pcie*) ;
 int FUNC_3 (struct iwl_trans*,struct iwl_txq*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 struct iwl_txq* VAR_1 ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_2)
{
 struct iwl_txq *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_0);
 struct iwl_trans_pcie *VAR_4 = VAR_3->trans_pcie;
 struct iwl_trans *VAR_5 = FUNC_2(VAR_4);

 FUNC_4(&VAR_3->lock);

 if (VAR_3->read_ptr == VAR_3->write_ptr) {
  FUNC_5(&VAR_3->lock);
  return;
 }
 FUNC_5(&VAR_3->lock);

 FUNC_3(VAR_5, VAR_3);

 FUNC_1(VAR_5);
}
