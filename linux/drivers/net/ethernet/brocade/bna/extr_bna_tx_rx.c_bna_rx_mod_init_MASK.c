
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct bna_rxq {int qe; } ;
struct bna_rxp {int qe; } ;
struct bna_rx_mod {scalar_t__ rxq_free_count; int rxq_free_q; struct bna_rxq* rxq; scalar_t__ rxp_free_count; int rxp_free_q; struct bna_rxp* rxp; scalar_t__ rx_free_count; int rx_free_q; struct bna_rx* rx; int rx_active_q; scalar_t__ flags; struct bna* bna; } ;
struct bna_rx {int rid; int qe; int * stop_cbarg; int * stop_cbfn; int * bna; int rxp_q; } ;
struct TYPE_7__ {TYPE_1__* mdl; } ;
struct TYPE_8__ {TYPE_2__ mem_info; } ;
struct bna_res_info {TYPE_3__ res_u; } ;
struct TYPE_9__ {int num_rxp; } ;
struct TYPE_10__ {TYPE_4__ attr; } ;
struct bna {TYPE_5__ ioceth; } ;
struct TYPE_6__ {scalar_t__ kva; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(struct bna_rx_mod *VAR_3, struct bna *VAR_4,
   struct bna_res_info *VAR_5)
{
 int VAR_6;
 struct bna_rx *VAR_7;
 struct bna_rxp *VAR_8;
 struct bna_rxq *VAR_9;

 VAR_3->bna = VAR_4;
 VAR_3->flags = 0;

 VAR_3->rx = (struct bna_rx *)
  VAR_5[VAR_2].res_u.mem_info.mdl[0].kva;
 VAR_3->rxp = (struct bna_rxp *)
  VAR_5[VAR_0].res_u.mem_info.mdl[0].kva;
 VAR_3->rxq = (struct bna_rxq *)
  VAR_5[VAR_1].res_u.mem_info.mdl[0].kva;


 FUNC_0(&VAR_3->rx_free_q);
 VAR_3->rx_free_count = 0;
 FUNC_0(&VAR_3->rxq_free_q);
 VAR_3->rxq_free_count = 0;
 FUNC_0(&VAR_3->rxp_free_q);
 VAR_3->rxp_free_count = 0;
 FUNC_0(&VAR_3->rx_active_q);


 for (VAR_6 = 0; VAR_6 < VAR_4->ioceth.attr.num_rxp; VAR_6++) {
  VAR_7 = &VAR_3->rx[VAR_6];

  FUNC_0(&VAR_7->rxp_q);
  VAR_7->bna = ((void*)0);
  VAR_7->rid = VAR_6;
  VAR_7->stop_cbfn = ((void*)0);
  VAR_7->stop_cbarg = ((void*)0);

  FUNC_1(&VAR_7->qe, &VAR_3->rx_free_q);
  VAR_3->rx_free_count++;
 }


 for (VAR_6 = 0; VAR_6 < VAR_4->ioceth.attr.num_rxp; VAR_6++) {
  VAR_8 = &VAR_3->rxp[VAR_6];
  FUNC_1(&VAR_8->qe, &VAR_3->rxp_free_q);
  VAR_3->rxp_free_count++;
 }


 for (VAR_6 = 0; VAR_6 < (VAR_4->ioceth.attr.num_rxp * 2); VAR_6++) {
  VAR_9 = &VAR_3->rxq[VAR_6];
  FUNC_1(&VAR_9->qe, &VAR_3->rxq_free_q);
  VAR_3->rxq_free_count++;
 }
}
