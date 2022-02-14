
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct bnad_tx_info {scalar_t__ tx_id; int * tx; TYPE_3__** tcb; } ;
struct TYPE_5__ {int tx_comp; } ;
struct bnad {int bna_lock; int num_txq_per_tx; TYPE_2__ bnad_completions; TYPE_1__* tx_res_info; struct bnad_tx_info* tx_info; } ;
struct bna_res_info {int dummy; } ;
struct TYPE_6__ {scalar_t__ intr_type; } ;
struct TYPE_4__ {struct bna_res_info* res_info; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct bnad*,struct bnad_tx_info*,int ) ;
 int FUNC_3 (struct bnad*,struct bna_res_info*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;

void
FUNC_8(struct bnad *VAR_3, u32 VAR_4)
{
 struct bnad_tx_info *VAR_5 = &VAR_3->tx_info[VAR_4];
 struct bna_res_info *VAR_6 = &VAR_3->tx_res_info[VAR_4].res_info[0];
 unsigned long VAR_7;

 if (!VAR_5->tx)
  return;

 FUNC_4(&VAR_3->bnad_completions.tx_comp);
 FUNC_5(&VAR_3->bna_lock, VAR_7);
 FUNC_1(VAR_5->tx, VAR_0, VAR_2);
 FUNC_6(&VAR_3->bna_lock, VAR_7);
 FUNC_7(&VAR_3->bnad_completions.tx_comp);

 if (VAR_5->tcb[0]->intr_type == VAR_1)
  FUNC_2(VAR_3, VAR_5,
   VAR_3->num_txq_per_tx);

 FUNC_5(&VAR_3->bna_lock, VAR_7);
 FUNC_0(VAR_5->tx);
 FUNC_6(&VAR_3->bna_lock, VAR_7);

 VAR_5->tx = ((void*)0);
 VAR_5->tx_id = 0;

 FUNC_3(VAR_3, VAR_6);
}
