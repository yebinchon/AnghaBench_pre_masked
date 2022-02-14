
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_txq {int write_ptr; int read_ptr; int lock; } ;
struct iwl_trans_pcie {struct iwl_txq** txq; } ;
struct iwl_trans {int dummy; } ;


 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct iwl_trans *VAR_0, int VAR_1, int VAR_2)
{
 struct iwl_trans_pcie *VAR_3 = FUNC_0(VAR_0);
 struct iwl_txq *VAR_4 = VAR_3->txq[VAR_1];

 FUNC_1(&VAR_4->lock);

 VAR_4->write_ptr = VAR_2;
 VAR_4->read_ptr = VAR_4->write_ptr;

 FUNC_2(&VAR_4->lock);
}
