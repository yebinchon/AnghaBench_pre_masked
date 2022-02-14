
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40e_eth_stats {int tx_broadcast; int tx_multicast; int tx_unicast; int tx_bytes; int rx_broadcast; int rx_multicast; int rx_unicast; int rx_bytes; int rx_unknown_protocol; int rx_discards; int tx_errors; } ;
struct TYPE_2__ {int stat_counter_idx; } ;
struct i40e_vsi {int stat_offsets_loaded; struct i40e_eth_stats eth_stats_offsets; struct i40e_eth_stats eth_stats; struct i40e_pf* back; TYPE_1__ info; } ;
struct i40e_hw {int dummy; } ;
struct i40e_pf {struct i40e_hw hw; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int) ;
 int FUNC_19 (struct i40e_hw*,int ,int,int *,int *) ;
 int FUNC_20 (struct i40e_hw*,int ,int ,int,int *,int *) ;
 int FUNC_21 (int ) ;

void FUNC_22(struct i40e_vsi *VAR_0)
{
 int VAR_1 = FUNC_21(VAR_0->info.stat_counter_idx);
 struct i40e_pf *VAR_2 = VAR_0->back;
 struct i40e_hw *VAR_3 = &VAR_2->hw;
 struct i40e_eth_stats *VAR_4;
 struct i40e_eth_stats *VAR_5;

 VAR_5 = &VAR_0->eth_stats;
 VAR_4 = &VAR_0->eth_stats_offsets;


 FUNC_19(VAR_3, FUNC_14(VAR_1),
      VAR_0->stat_offsets_loaded,
      &VAR_4->tx_errors, &VAR_5->tx_errors);
 FUNC_19(VAR_3, FUNC_12(VAR_1),
      VAR_0->stat_offsets_loaded,
      &VAR_4->rx_discards, &VAR_5->rx_discards);
 FUNC_19(VAR_3, FUNC_13(VAR_1),
      VAR_0->stat_offsets_loaded,
      &VAR_4->rx_unknown_protocol, &VAR_5->rx_unknown_protocol);

 FUNC_20(VAR_3, FUNC_4(VAR_1),
      FUNC_5(VAR_1),
      VAR_0->stat_offsets_loaded,
      &VAR_4->rx_bytes, &VAR_5->rx_bytes);
 FUNC_20(VAR_3, FUNC_15(VAR_1),
      FUNC_16(VAR_1),
      VAR_0->stat_offsets_loaded,
      &VAR_4->rx_unicast, &VAR_5->rx_unicast);
 FUNC_20(VAR_3, FUNC_8(VAR_1),
      FUNC_9(VAR_1),
      VAR_0->stat_offsets_loaded,
      &VAR_4->rx_multicast, &VAR_5->rx_multicast);
 FUNC_20(VAR_3, FUNC_0(VAR_1),
      FUNC_1(VAR_1),
      VAR_0->stat_offsets_loaded,
      &VAR_4->rx_broadcast, &VAR_5->rx_broadcast);

 FUNC_20(VAR_3, FUNC_6(VAR_1),
      FUNC_7(VAR_1),
      VAR_0->stat_offsets_loaded,
      &VAR_4->tx_bytes, &VAR_5->tx_bytes);
 FUNC_20(VAR_3, FUNC_17(VAR_1),
      FUNC_18(VAR_1),
      VAR_0->stat_offsets_loaded,
      &VAR_4->tx_unicast, &VAR_5->tx_unicast);
 FUNC_20(VAR_3, FUNC_10(VAR_1),
      FUNC_11(VAR_1),
      VAR_0->stat_offsets_loaded,
      &VAR_4->tx_multicast, &VAR_5->tx_multicast);
 FUNC_20(VAR_3, FUNC_2(VAR_1),
      FUNC_3(VAR_1),
      VAR_0->stat_offsets_loaded,
      &VAR_4->tx_broadcast, &VAR_5->tx_broadcast);
 VAR_0->stat_offsets_loaded = 1;
}
