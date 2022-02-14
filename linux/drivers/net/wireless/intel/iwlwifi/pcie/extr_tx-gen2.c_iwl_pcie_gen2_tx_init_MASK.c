
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_txq {int id; } ;
struct iwl_trans_pcie {int cmd_queue; int queue_used; struct iwl_txq** txq; } ;
struct iwl_trans {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_trans*,char*,...) ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int FUNC_2 (struct iwl_trans*) ;
 int FUNC_3 (struct iwl_trans*,struct iwl_txq*,int,int) ;
 int FUNC_4 (struct iwl_trans*,struct iwl_txq*,int,int) ;
 struct iwl_txq* FUNC_5 (int,int ) ;
 int FUNC_6 (int,int ) ;

int FUNC_7(struct iwl_trans *VAR_2, int VAR_3, int VAR_4)
{
 struct iwl_trans_pcie *VAR_5 = FUNC_1(VAR_2);
 struct iwl_txq *VAR_6;
 int VAR_7;


 if (!VAR_5->txq[VAR_3]) {
  VAR_6 = FUNC_5(sizeof(*VAR_6), VAR_1);
  if (!VAR_6) {
   FUNC_0(VAR_2, "Not enough memory for tx queue\n");
   return -VAR_0;
  }
  VAR_5->txq[VAR_3] = VAR_6;
  VAR_7 = FUNC_3(VAR_2, VAR_6, VAR_4, 1);
  if (VAR_7) {
   FUNC_0(VAR_2, "Tx %d queue init failed\n", VAR_3);
   goto error;
  }
 } else {
  VAR_6 = VAR_5->txq[VAR_3];
 }

 VAR_7 = FUNC_4(VAR_2, VAR_6, VAR_4,
    (VAR_3 == VAR_5->cmd_queue));
 if (VAR_7) {
  FUNC_0(VAR_2, "Tx %d queue alloc failed\n", VAR_3);
  goto error;
 }
 VAR_5->txq[VAR_3]->id = VAR_3;
 FUNC_6(VAR_3, VAR_5->queue_used);

 return 0;

error:
 FUNC_2(VAR_2);
 return VAR_7;
}
