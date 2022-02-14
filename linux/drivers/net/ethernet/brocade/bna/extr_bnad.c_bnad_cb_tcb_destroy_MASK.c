
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bnad_tx_info {int ** tcb; } ;
struct bnad {int dummy; } ;
struct bna_tcb {size_t id; int * priv; TYPE_2__* txq; } ;
struct TYPE_4__ {TYPE_1__* tx; } ;
struct TYPE_3__ {scalar_t__ priv; } ;



__attribute__((used)) static void
FUNC_0(struct bnad *VAR_0, struct bna_tcb *VAR_1)
{
 struct bnad_tx_info *VAR_2 =
   (struct bnad_tx_info *)VAR_1->txq->tx->priv;

 VAR_2->tcb[VAR_1->id] = ((void*)0);
 VAR_1->priv = ((void*)0);
}
