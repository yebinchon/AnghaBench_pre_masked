
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* tid_tbl_ptr; int ra_list_spinlock; } ;
struct mwifiex_private {int ack_status_frames; int ack_status_lock; int rx_reorder_tbl_lock; int tx_ba_stream_tbl_lock; int bypass_txq; int tdls_txq; int auto_tdls_list; int sta_list; int rx_reorder_tbl_ptr; int tx_ba_stream_tbl_ptr; TYPE_3__ wmm; int auto_tdls_lock; int sta_list_spinlock; int curr_bcn_buf_lock; } ;
struct mwifiex_adapter {size_t priv_num; struct mwifiex_private** priv; TYPE_1__* bss_prio_tbl; int tx_data_q; int rx_data_q; int rx_proc_lock; int scan_pending_q_lock; int cmd_pending_q_lock; int cmd_free_q_lock; int scan_pending_q; int cmd_pending_q; int cmd_free_q; int queue_lock; int mwifiex_cmd_lock; int main_proc_lock; int int_lock; } ;
typedef size_t s32 ;
struct TYPE_5__ {int ra_list; } ;
struct TYPE_4__ {int bss_prio_lock; int bss_prio_head; } ;


 int FUNC_0 (int *) ;
 size_t VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct mwifiex_adapter *VAR_1)
{
 struct mwifiex_private *VAR_2;
 s32 VAR_3, VAR_4;

 FUNC_3(&VAR_1->int_lock);
 FUNC_3(&VAR_1->main_proc_lock);
 FUNC_3(&VAR_1->mwifiex_cmd_lock);
 FUNC_3(&VAR_1->queue_lock);
 for (VAR_3 = 0; VAR_3 < VAR_1->priv_num; VAR_3++) {
  if (VAR_1->priv[VAR_3]) {
   VAR_2 = VAR_1->priv[VAR_3];
   FUNC_3(&VAR_2->wmm.ra_list_spinlock);
   FUNC_3(&VAR_2->curr_bcn_buf_lock);
   FUNC_3(&VAR_2->sta_list_spinlock);
   FUNC_3(&VAR_2->auto_tdls_lock);
  }
 }


 FUNC_0(&VAR_1->cmd_free_q);

 FUNC_0(&VAR_1->cmd_pending_q);

 FUNC_0(&VAR_1->scan_pending_q);

 FUNC_3(&VAR_1->cmd_free_q_lock);
 FUNC_3(&VAR_1->cmd_pending_q_lock);
 FUNC_3(&VAR_1->scan_pending_q_lock);
 FUNC_3(&VAR_1->rx_proc_lock);

 FUNC_2(&VAR_1->rx_data_q);
 FUNC_2(&VAR_1->tx_data_q);

 for (VAR_3 = 0; VAR_3 < VAR_1->priv_num; ++VAR_3) {
  FUNC_0(&VAR_1->bss_prio_tbl[VAR_3].bss_prio_head);
  FUNC_3(&VAR_1->bss_prio_tbl[VAR_3].bss_prio_lock);
 }

 for (VAR_3 = 0; VAR_3 < VAR_1->priv_num; VAR_3++) {
  if (!VAR_1->priv[VAR_3])
   continue;
  VAR_2 = VAR_1->priv[VAR_3];
  for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4)
   FUNC_0(&VAR_2->wmm.tid_tbl_ptr[VAR_4].ra_list);
  FUNC_0(&VAR_2->tx_ba_stream_tbl_ptr);
  FUNC_0(&VAR_2->rx_reorder_tbl_ptr);
  FUNC_0(&VAR_2->sta_list);
  FUNC_0(&VAR_2->auto_tdls_list);
  FUNC_2(&VAR_2->tdls_txq);
  FUNC_2(&VAR_2->bypass_txq);

  FUNC_3(&VAR_2->tx_ba_stream_tbl_lock);
  FUNC_3(&VAR_2->rx_reorder_tbl_lock);

  FUNC_3(&VAR_2->ack_status_lock);
  FUNC_1(&VAR_2->ack_status_frames);
 }

 return 0;
}
