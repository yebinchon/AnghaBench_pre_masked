
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_trans_pcie {int * txq; int queue_used; } ;
struct iwl_trans {int dummy; } ;


 int FUNC_0 (int *) ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int FUNC_2 (struct iwl_trans*,int) ;
 int FUNC_3 (int ,int ,int) ;

void FUNC_4(struct iwl_trans *VAR_0)
{
 struct iwl_trans_pcie *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 FUNC_3(VAR_1->queue_used, 0, sizeof(VAR_1->queue_used));


 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->txq); VAR_2++) {
  if (!VAR_1->txq[VAR_2])
   continue;

  FUNC_2(VAR_0, VAR_2);
 }
}
