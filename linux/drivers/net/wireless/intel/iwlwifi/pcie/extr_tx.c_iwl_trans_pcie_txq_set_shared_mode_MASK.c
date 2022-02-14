
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct iwl_txq {int ampdu; } ;
struct iwl_trans_pcie {struct iwl_txq** txq; } ;
struct iwl_trans {int dummy; } ;


 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;

void FUNC_1(struct iwl_trans *VAR_0, u32 VAR_1,
     bool VAR_2)
{
 struct iwl_trans_pcie *VAR_3 = FUNC_0(VAR_0);
 struct iwl_txq *VAR_4 = VAR_3->txq[VAR_1];

 VAR_4->ampdu = !VAR_2;
}
