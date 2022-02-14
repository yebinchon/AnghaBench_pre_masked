
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct il_queue {scalar_t__ n_bd; scalar_t__ write_ptr; scalar_t__ read_ptr; } ;
struct il_tx_queue {struct il_queue q; } ;
struct il_priv {TYPE_1__* ops; struct il_tx_queue* txq; } ;
struct TYPE_2__ {int (* txq_free_tfd ) (struct il_priv*,struct il_tx_queue*) ;} ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (struct il_priv*,struct il_tx_queue*) ;

void
FUNC_2(struct il_priv *VAR_0, int VAR_1)
{
 struct il_tx_queue *VAR_2 = &VAR_0->txq[VAR_1];
 struct il_queue *VAR_3 = &VAR_2->q;

 if (VAR_3->n_bd == 0)
  return;

 while (VAR_3->write_ptr != VAR_3->read_ptr) {
  VAR_0->ops->txq_free_tfd(VAR_0, VAR_2);
  VAR_3->read_ptr = FUNC_0(VAR_3->read_ptr, VAR_3->n_bd);
 }
}
