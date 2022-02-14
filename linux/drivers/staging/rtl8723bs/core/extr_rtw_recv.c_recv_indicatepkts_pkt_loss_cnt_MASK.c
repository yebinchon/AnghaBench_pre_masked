
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct debug_priv {int dbg_rx_ampdu_loss_count; } ;



void FUNC_0(struct debug_priv *VAR_0, u64 VAR_1, u64 VAR_2)
{
 if (VAR_2 < VAR_1)
  VAR_0->dbg_rx_ampdu_loss_count += (4096 + VAR_2 - VAR_1);
 else
  VAR_0->dbg_rx_ampdu_loss_count += (VAR_2 - VAR_1);

}
