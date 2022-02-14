
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ len; } ;
struct bnad_tx_unmap {int nvecs; struct sk_buff* skb; } ;
struct bnad {int dummy; } ;
struct bna_tcb {scalar_t__* hw_consumer_index; scalar_t__ consumer_index; scalar_t__ q_depth; TYPE_1__* txq; int flags; struct bnad_tx_unmap* unmap_q; } ;
struct TYPE_2__ {int tx_bytes; int tx_packets; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bna_tcb*,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct bnad*,struct bnad_tx_unmap*,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static u32
FUNC_8(struct bnad *VAR_1, struct bna_tcb *VAR_2)
{
 u32 VAR_3 = 0, VAR_4 = 0;
 u32 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 struct bnad_tx_unmap *VAR_10 = VAR_2->unmap_q;
 struct bnad_tx_unmap *VAR_11;
 struct sk_buff *VAR_12;


 if (!FUNC_7(VAR_0, &VAR_2->flags))
  return 0;

 VAR_7 = *(VAR_2->hw_consumer_index);
 FUNC_6();
 VAR_8 = VAR_2->consumer_index;
 VAR_9 = VAR_2->q_depth;

 VAR_5 = FUNC_1(VAR_8, VAR_7, VAR_9);
 FUNC_3(!(VAR_5 <= FUNC_0(VAR_2, VAR_2->q_depth)));

 while (VAR_5) {
  VAR_11 = &VAR_10[VAR_8];

  VAR_12 = VAR_11->skb;

  VAR_3++;
  VAR_4 += VAR_12->len;

  VAR_6 = FUNC_2(VAR_11->nvecs);
  VAR_5 -= VAR_6;

  VAR_8 = FUNC_4(VAR_1, VAR_10, VAR_9, VAR_8);
  FUNC_5(VAR_12);
 }


 VAR_2->consumer_index = VAR_7;

 VAR_2->txq->tx_packets += VAR_3;
 VAR_2->txq->tx_bytes += VAR_4;

 return VAR_3;
}
