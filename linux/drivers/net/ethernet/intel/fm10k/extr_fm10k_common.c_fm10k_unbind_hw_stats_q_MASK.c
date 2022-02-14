
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct fm10k_hw_stats_q {scalar_t__ tx_stats_idx; scalar_t__ rx_stats_idx; } ;



void FUNC_0(struct fm10k_hw_stats_q *VAR_0, u32 VAR_1, u32 VAR_2)
{
 u32 VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++, VAR_1++, VAR_0++) {
  VAR_0->rx_stats_idx = 0;
  VAR_0->tx_stats_idx = 0;
 }
}
