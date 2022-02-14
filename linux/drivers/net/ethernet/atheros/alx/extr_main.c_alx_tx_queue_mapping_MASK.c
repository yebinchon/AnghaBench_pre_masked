
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {unsigned int queue_mapping; } ;
struct alx_tx_queue {int dummy; } ;
struct alx_priv {unsigned int num_txq; TYPE_1__** qnapi; } ;
struct TYPE_2__ {struct alx_tx_queue* txq; } ;



__attribute__((used)) static struct alx_tx_queue *FUNC_0(struct alx_priv *VAR_0,
       struct sk_buff *VAR_1)
{
 unsigned int VAR_2 = VAR_1->queue_mapping;

 if (VAR_2 >= VAR_0->num_txq)
  VAR_2 = VAR_2 % VAR_0->num_txq;

 return VAR_0->qnapi[VAR_2]->txq;
}
