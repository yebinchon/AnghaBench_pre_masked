
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct debug_priv {scalar_t__ dbg_rx_ampdu_window_shift_cnt; scalar_t__ dbg_rx_dup_mgt_frame_drop_count; scalar_t__ dbg_rx_ampdu_loss_count; scalar_t__ dbg_rx_ampdu_forced_indicate_count; scalar_t__ dbg_rx_ampdu_drop_count; } ;



__attribute__((used)) static void FUNC_0(struct debug_priv *VAR_0)
{
 VAR_0->dbg_rx_ampdu_drop_count = 0;
 VAR_0->dbg_rx_ampdu_forced_indicate_count = 0;
 VAR_0->dbg_rx_ampdu_loss_count = 0;
 VAR_0->dbg_rx_dup_mgt_frame_drop_count = 0;
 VAR_0->dbg_rx_ampdu_window_shift_cnt = 0;
}
