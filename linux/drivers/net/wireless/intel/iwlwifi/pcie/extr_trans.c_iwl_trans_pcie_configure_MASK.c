
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ reg_state; } ;
struct iwl_trans_pcie {scalar_t__ n_no_reclaim_cmds; int page_offs; int dev_cmd_offs; TYPE_1__ napi_dev; int sw_csum_tx; int scd_set_active; int bc_table_dword; int rx_buf_size; int rx_page_order; int no_reclaim_cmds; int cmd_q_wdg_timeout; int cmd_fifo; int cmd_queue; } ;
struct iwl_trans_config {scalar_t__ n_no_reclaim_cmds; int cb_data_offs; int command_groups_size; int command_groups; int sw_csum_tx; int scd_set_active; int bc_table_dword; int rx_buf_size; int no_reclaim_cmds; int cmd_q_wdg_timeout; int cmd_fifo; int cmd_queue; } ;
struct iwl_trans {int command_groups_size; int command_groups; } ;


 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct iwl_trans *VAR_2,
         const struct iwl_trans_config *VAR_3)
{
 struct iwl_trans_pcie *VAR_4 = FUNC_0(VAR_2);

 VAR_4->cmd_queue = VAR_3->cmd_queue;
 VAR_4->cmd_fifo = VAR_3->cmd_fifo;
 VAR_4->cmd_q_wdg_timeout = VAR_3->cmd_q_wdg_timeout;
 if (FUNC_1(VAR_3->n_no_reclaim_cmds > VAR_0))
  VAR_4->n_no_reclaim_cmds = 0;
 else
  VAR_4->n_no_reclaim_cmds = VAR_3->n_no_reclaim_cmds;
 if (VAR_4->n_no_reclaim_cmds)
  FUNC_4(VAR_4->no_reclaim_cmds, VAR_3->no_reclaim_cmds,
         VAR_4->n_no_reclaim_cmds * sizeof(u8));

 VAR_4->rx_buf_size = VAR_3->rx_buf_size;
 VAR_4->rx_page_order =
  FUNC_3(VAR_4->rx_buf_size);

 VAR_4->bc_table_dword = VAR_3->bc_table_dword;
 VAR_4->scd_set_active = VAR_3->scd_set_active;
 VAR_4->sw_csum_tx = VAR_3->sw_csum_tx;

 VAR_4->page_offs = VAR_3->cb_data_offs;
 VAR_4->dev_cmd_offs = VAR_3->cb_data_offs + sizeof(void *);

 VAR_2->command_groups = VAR_3->command_groups;
 VAR_2->command_groups_size = VAR_3->command_groups_size;






 if (VAR_4->napi_dev.reg_state != VAR_1)
  FUNC_2(&VAR_4->napi_dev);
}
