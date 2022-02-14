
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* tid_tbl_ptr; } ;
struct mwifiex_private {int auto_tdls_list; int sta_list; int rx_reorder_tbl_ptr; int tx_ba_stream_tbl_ptr; TYPE_3__ wmm; } ;
struct mwifiex_adapter {size_t priv_num; struct mwifiex_private** priv; TYPE_1__* bss_prio_tbl; int scan_pending_q; int cmd_pending_q; int cmd_free_q; } ;
typedef size_t s32 ;
struct TYPE_5__ {int ra_list; } ;
struct TYPE_4__ {int bss_prio_head; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct mwifiex_adapter *VAR_1)
{
 struct mwifiex_private *VAR_2;
 s32 VAR_3, VAR_4;

 FUNC_0(&VAR_1->cmd_free_q);
 FUNC_0(&VAR_1->cmd_pending_q);
 FUNC_0(&VAR_1->scan_pending_q);

 for (VAR_3 = 0; VAR_3 < VAR_1->priv_num; VAR_3++)
  FUNC_0(&VAR_1->bss_prio_tbl[VAR_3].bss_prio_head);

 for (VAR_3 = 0; VAR_3 < VAR_1->priv_num; VAR_3++) {
  if (VAR_1->priv[VAR_3]) {
   VAR_2 = VAR_1->priv[VAR_3];
   for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4)
    FUNC_0(&VAR_2->wmm.tid_tbl_ptr[VAR_4].ra_list);
   FUNC_0(&VAR_2->tx_ba_stream_tbl_ptr);
   FUNC_0(&VAR_2->rx_reorder_tbl_ptr);
   FUNC_0(&VAR_2->sta_list);
   FUNC_0(&VAR_2->auto_tdls_list);
  }
 }
}
