
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct iwl_txq {TYPE_1__* entries; int lock; int read_ptr; } ;
struct iwl_trans {int op_mode; } ;
struct TYPE_2__ {struct sk_buff* skb; int meta; } ;


 int FUNC_0 (int ,struct sk_buff*) ;
 int FUNC_1 (struct iwl_trans*,int *,int ) ;
 int FUNC_2 (struct iwl_txq*,int ) ;
 int FUNC_3 (struct iwl_trans*,struct iwl_txq*,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct iwl_trans *VAR_0, struct iwl_txq *VAR_1)
{



 int VAR_2 = FUNC_2(VAR_1, VAR_1->read_ptr);

 FUNC_4(&VAR_1->lock);

 FUNC_1(VAR_0, &VAR_1->entries[VAR_2].meta,
    FUNC_3(VAR_0, VAR_1, VAR_2));


 if (VAR_1->entries) {
  struct sk_buff *VAR_3;

  VAR_3 = VAR_1->entries[VAR_2].skb;





  if (VAR_3) {
   FUNC_0(VAR_0->op_mode, VAR_3);
   VAR_1->entries[VAR_2].skb = ((void*)0);
  }
 }
}
