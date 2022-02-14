
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct bnad_tx_unmap {struct sk_buff* skb; } ;
struct bnad {int dummy; } ;
struct bna_tcb {int q_depth; struct bnad_tx_unmap* unmap_q; } ;


 int FUNC_0 (struct bnad*,struct bnad_tx_unmap*,int,int) ;
 int FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static void
FUNC_2(struct bnad *VAR_0, struct bna_tcb *VAR_1)
{
 struct bnad_tx_unmap *VAR_2 = VAR_1->unmap_q;
 struct sk_buff *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->q_depth; VAR_4++) {
  VAR_3 = VAR_2[VAR_4].skb;
  if (!VAR_3)
   continue;
  FUNC_0(VAR_0, VAR_2, VAR_1->q_depth, VAR_4);

  FUNC_1(VAR_3);
 }
}
