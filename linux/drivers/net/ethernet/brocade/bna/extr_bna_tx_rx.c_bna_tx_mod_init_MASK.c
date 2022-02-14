
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct bna_txq {int qe; } ;
struct bna_tx_mod {int iscsi_prio; int iscsi_over_cee; scalar_t__ default_prio; int prio_map; int txq_free_q; struct bna_txq* txq; int tx_free_q; struct bna_tx* tx; int tx_active_q; scalar_t__ flags; struct bna* bna; } ;
struct bna_tx {int rid; int qe; } ;
struct TYPE_7__ {TYPE_1__* mdl; } ;
struct TYPE_8__ {TYPE_2__ mem_info; } ;
struct bna_res_info {TYPE_3__ res_u; } ;
struct TYPE_9__ {int num_txq; } ;
struct TYPE_10__ {TYPE_4__ attr; } ;
struct bna {TYPE_5__ ioceth; } ;
struct TYPE_6__ {scalar_t__ kva; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

void
FUNC_2(struct bna_tx_mod *VAR_4, struct bna *VAR_5,
  struct bna_res_info *VAR_6)
{
 int VAR_7;

 VAR_4->bna = VAR_5;
 VAR_4->flags = 0;

 VAR_4->tx = (struct bna_tx *)
  VAR_6[VAR_2].res_u.mem_info.mdl[0].kva;
 VAR_4->txq = (struct bna_txq *)
  VAR_6[VAR_1].res_u.mem_info.mdl[0].kva;

 FUNC_0(&VAR_4->tx_free_q);
 FUNC_0(&VAR_4->tx_active_q);

 FUNC_0(&VAR_4->txq_free_q);

 for (VAR_7 = 0; VAR_7 < VAR_5->ioceth.attr.num_txq; VAR_7++) {
  VAR_4->tx[VAR_7].rid = VAR_7;
  FUNC_1(&VAR_4->tx[VAR_7].qe, &VAR_4->tx_free_q);
  FUNC_1(&VAR_4->txq[VAR_7].qe, &VAR_4->txq_free_q);
 }

 VAR_4->prio_map = VAR_0;
 VAR_4->default_prio = 0;
 VAR_4->iscsi_over_cee = VAR_3;
 VAR_4->iscsi_prio = -1;
}
