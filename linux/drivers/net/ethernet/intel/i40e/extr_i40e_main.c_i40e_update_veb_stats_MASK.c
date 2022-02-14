
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_veb_tc_stats {int * tc_tx_bytes; int * tc_tx_packets; int * tc_rx_bytes; int * tc_rx_packets; } ;
struct i40e_eth_stats {int tx_broadcast; int tx_multicast; int tx_unicast; int tx_bytes; int rx_broadcast; int rx_multicast; int rx_unicast; int rx_bytes; int rx_unknown_protocol; int tx_discards; } ;
struct i40e_veb {int stats_idx; int stat_offsets_loaded; struct i40e_veb_tc_stats tc_stats_offsets; struct i40e_veb_tc_stats tc_stats; struct i40e_eth_stats stats_offsets; struct i40e_eth_stats stats; struct i40e_pf* pf; } ;
struct i40e_hw {scalar_t__ revision_id; } ;
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
 int FUNC_18 (int,int) ;
 int FUNC_19 (int,int) ;
 int FUNC_20 (int,int) ;
 int FUNC_21 (int,int) ;
 int FUNC_22 (int,int) ;
 int FUNC_23 (int,int) ;
 int FUNC_24 (int,int) ;
 int FUNC_25 (int,int) ;
 int VAR_0 ;
 int FUNC_26 (struct i40e_hw*,int ,int,int *,int *) ;
 int FUNC_27 (struct i40e_hw*,int ,int ,int,int *,int *) ;

void FUNC_28(struct i40e_veb *VAR_1)
{
 struct i40e_pf *VAR_2 = VAR_1->pf;
 struct i40e_hw *VAR_3 = &VAR_2->hw;
 struct i40e_eth_stats *VAR_4;
 struct i40e_eth_stats *VAR_5;
 struct i40e_veb_tc_stats *VAR_6;
 struct i40e_veb_tc_stats *VAR_7;
 int VAR_8, VAR_9 = 0;

 VAR_9 = VAR_1->stats_idx;
 VAR_5 = &VAR_1->stats;
 VAR_4 = &VAR_1->stats_offsets;
 VAR_7 = &VAR_1->tc_stats;
 VAR_6 = &VAR_1->tc_stats_offsets;


 FUNC_26(VAR_3, FUNC_13(VAR_9),
      VAR_1->stat_offsets_loaded,
      &VAR_4->tx_discards, &VAR_5->tx_discards);
 if (VAR_3->revision_id > 0)
  FUNC_26(VAR_3, FUNC_12(VAR_9),
       VAR_1->stat_offsets_loaded,
       &VAR_4->rx_unknown_protocol,
       &VAR_5->rx_unknown_protocol);
 FUNC_27(VAR_3, FUNC_4(VAR_9), FUNC_5(VAR_9),
      VAR_1->stat_offsets_loaded,
      &VAR_4->rx_bytes, &VAR_5->rx_bytes);
 FUNC_27(VAR_3, FUNC_14(VAR_9), FUNC_15(VAR_9),
      VAR_1->stat_offsets_loaded,
      &VAR_4->rx_unicast, &VAR_5->rx_unicast);
 FUNC_27(VAR_3, FUNC_8(VAR_9), FUNC_9(VAR_9),
      VAR_1->stat_offsets_loaded,
      &VAR_4->rx_multicast, &VAR_5->rx_multicast);
 FUNC_27(VAR_3, FUNC_0(VAR_9), FUNC_1(VAR_9),
      VAR_1->stat_offsets_loaded,
      &VAR_4->rx_broadcast, &VAR_5->rx_broadcast);

 FUNC_27(VAR_3, FUNC_6(VAR_9), FUNC_7(VAR_9),
      VAR_1->stat_offsets_loaded,
      &VAR_4->tx_bytes, &VAR_5->tx_bytes);
 FUNC_27(VAR_3, FUNC_16(VAR_9), FUNC_17(VAR_9),
      VAR_1->stat_offsets_loaded,
      &VAR_4->tx_unicast, &VAR_5->tx_unicast);
 FUNC_27(VAR_3, FUNC_10(VAR_9), FUNC_11(VAR_9),
      VAR_1->stat_offsets_loaded,
      &VAR_4->tx_multicast, &VAR_5->tx_multicast);
 FUNC_27(VAR_3, FUNC_2(VAR_9), FUNC_3(VAR_9),
      VAR_1->stat_offsets_loaded,
      &VAR_4->tx_broadcast, &VAR_5->tx_broadcast);
 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  FUNC_27(VAR_3, FUNC_20(VAR_8, VAR_9),
       FUNC_21(VAR_8, VAR_9),
       VAR_1->stat_offsets_loaded,
       &VAR_6->tc_rx_packets[VAR_8],
       &VAR_7->tc_rx_packets[VAR_8]);
  FUNC_27(VAR_3, FUNC_18(VAR_8, VAR_9),
       FUNC_19(VAR_8, VAR_9),
       VAR_1->stat_offsets_loaded,
       &VAR_6->tc_rx_bytes[VAR_8],
       &VAR_7->tc_rx_bytes[VAR_8]);
  FUNC_27(VAR_3, FUNC_24(VAR_8, VAR_9),
       FUNC_25(VAR_8, VAR_9),
       VAR_1->stat_offsets_loaded,
       &VAR_6->tc_tx_packets[VAR_8],
       &VAR_7->tc_tx_packets[VAR_8]);
  FUNC_27(VAR_3, FUNC_22(VAR_8, VAR_9),
       FUNC_23(VAR_8, VAR_9),
       VAR_1->stat_offsets_loaded,
       &VAR_6->tc_tx_bytes[VAR_8],
       &VAR_7->tc_tx_bytes[VAR_8]);
 }
 VAR_1->stat_offsets_loaded = 1;
}
