
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int highest_queued_prio; int tx_pkts_queued; int drv_pkt_delay_max; } ;
struct mwifiex_private {TYPE_2__ wmm; TYPE_1__* aggr_prio_tbl; void** tos_to_tid_inv; } ;
struct mwifiex_adapter {int priv_num; scalar_t__ tx_buf_size; struct mwifiex_private** priv; } ;
struct TYPE_3__ {void* ampdu_user; void* ampdu_ap; void* amsdu; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int VAR_5 ;
 int FUNC_1 (struct mwifiex_private*) ;
 int FUNC_2 (struct mwifiex_private*) ;

void
FUNC_3(struct mwifiex_adapter *VAR_6)
{
 int VAR_7, VAR_8;
 struct mwifiex_private *VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_6->priv_num; ++VAR_8) {
  VAR_9 = VAR_6->priv[VAR_8];
  if (!VAR_9)
   continue;

  for (VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7) {
   if (!VAR_5 &&
       VAR_6->tx_buf_size > VAR_3)
    VAR_9->aggr_prio_tbl[VAR_7].amsdu =
       VAR_9->tos_to_tid_inv[VAR_7];
   else
    VAR_9->aggr_prio_tbl[VAR_7].amsdu =
       VAR_0;
   VAR_9->aggr_prio_tbl[VAR_7].ampdu_ap =
       VAR_9->tos_to_tid_inv[VAR_7];
   VAR_9->aggr_prio_tbl[VAR_7].ampdu_user =
       VAR_9->tos_to_tid_inv[VAR_7];
  }

  VAR_9->aggr_prio_tbl[6].amsdu
     = VAR_9->aggr_prio_tbl[6].ampdu_ap
     = VAR_9->aggr_prio_tbl[6].ampdu_user
     = VAR_0;

  VAR_9->aggr_prio_tbl[7].amsdu = VAR_9->aggr_prio_tbl[7].ampdu_ap
     = VAR_9->aggr_prio_tbl[7].ampdu_user
     = VAR_0;

  FUNC_2(VAR_9);
  FUNC_1(VAR_9);

  VAR_9->wmm.drv_pkt_delay_max = VAR_4;
  FUNC_0(&VAR_9->wmm.tx_pkts_queued, 0);
  FUNC_0(&VAR_9->wmm.highest_queued_prio, VAR_1);
 }
}
