
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct iwl_txq {size_t write_ptr; size_t read_ptr; int lock; int overflow_q; TYPE_1__* entries; } ;
struct iwl_trans_pcie {int cmd_queue; int reg_lock; struct iwl_txq** txq; } ;
struct iwl_trans {int op_mode; } ;
struct TYPE_2__ {struct sk_buff* skb; } ;


 int FUNC_0 (struct iwl_trans*,char*,int,size_t) ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 scalar_t__ FUNC_2 (int) ;
 struct sk_buff* FUNC_3 (int *) ;
 int FUNC_4 (int ,struct sk_buff*) ;
 int FUNC_5 (struct iwl_trans*) ;
 int FUNC_6 (struct iwl_trans_pcie*,struct sk_buff*) ;
 int FUNC_7 (struct iwl_trans*,struct iwl_txq*) ;
 size_t FUNC_8 (struct iwl_trans*,size_t) ;
 int FUNC_9 (struct iwl_trans*,struct iwl_txq*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_15(struct iwl_trans *VAR_0, int VAR_1)
{
 struct iwl_trans_pcie *VAR_2 = FUNC_1(VAR_0);
 struct iwl_txq *VAR_3 = VAR_2->txq[VAR_1];

 FUNC_11(&VAR_3->lock);
 while (VAR_3->write_ptr != VAR_3->read_ptr) {
  FUNC_0(VAR_0, "Q %d Free %d\n",
       VAR_1, VAR_3->read_ptr);

  if (VAR_1 != VAR_2->cmd_queue) {
   struct sk_buff *VAR_4 = VAR_3->entries[VAR_3->read_ptr].skb;

   if (FUNC_2(!VAR_4))
    continue;

   FUNC_6(VAR_2, VAR_4);
  }
  FUNC_7(VAR_0, VAR_3);
  VAR_3->read_ptr = FUNC_8(VAR_0, VAR_3->read_ptr);

  if (VAR_3->read_ptr == VAR_3->write_ptr) {
   unsigned long VAR_5;

   FUNC_12(&VAR_2->reg_lock, VAR_5);
   if (VAR_1 == VAR_2->cmd_queue)
    FUNC_5(VAR_0);
   FUNC_14(&VAR_2->reg_lock, VAR_5);
  }
 }

 while (!FUNC_10(&VAR_3->overflow_q)) {
  struct sk_buff *VAR_6 = FUNC_3(&VAR_3->overflow_q);

  FUNC_4(VAR_0->op_mode, VAR_6);
 }

 FUNC_13(&VAR_3->lock);


 FUNC_9(VAR_0, VAR_3);
}
