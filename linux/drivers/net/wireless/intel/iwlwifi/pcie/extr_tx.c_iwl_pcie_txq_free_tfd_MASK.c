
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct iwl_txq {int read_ptr; TYPE_1__* entries; int lock; } ;
struct iwl_trans {int op_mode; } ;
struct TYPE_2__ {struct sk_buff* skb; int meta; } ;


 int FUNC_0 (int ,struct sk_buff*) ;
 int FUNC_1 (struct iwl_txq*,int) ;
 int FUNC_2 (struct iwl_trans*,int *,struct iwl_txq*,int) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct iwl_trans *VAR_0, struct iwl_txq *VAR_1)
{



 int VAR_2 = VAR_1->read_ptr;
 int VAR_3 = FUNC_1(VAR_1, VAR_2);

 FUNC_3(&VAR_1->lock);




 FUNC_2(VAR_0, &VAR_1->entries[VAR_3].meta, VAR_1, VAR_2);


 if (VAR_1->entries) {
  struct sk_buff *VAR_4;

  VAR_4 = VAR_1->entries[VAR_3].skb;





  if (VAR_4) {
   FUNC_0(VAR_0->op_mode, VAR_4);
   VAR_1->entries[VAR_3].skb = ((void*)0);
  }
 }
}
