
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ice_eth_stats {int tx_errors; int tx_broadcast; int tx_multicast; int tx_unicast; int tx_bytes; int rx_discards; int rx_broadcast; int rx_multicast; int rx_unicast; int rx_bytes; } ;
struct ice_vsi {int stat_offsets_loaded; struct ice_eth_stats eth_stats; struct ice_eth_stats eth_stats_prev; int vsi_num; TYPE_1__* back; } ;
struct ice_hw {int dummy; } ;
struct TYPE_2__ {struct ice_hw hw; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct ice_hw*,int ,int,int *,int *) ;
 int FUNC_11 (struct ice_hw*,int ,int,int *,int *) ;

void FUNC_12(struct ice_vsi *VAR_0)
{
 struct ice_eth_stats *VAR_1, *VAR_2;
 struct ice_hw *VAR_3 = &VAR_0->back->hw;
 u16 VAR_4 = VAR_0->vsi_num;

 VAR_1 = &VAR_0->eth_stats_prev;
 VAR_2 = &VAR_0->eth_stats;

 FUNC_11(VAR_3, FUNC_2(VAR_4), VAR_0->stat_offsets_loaded,
     &VAR_1->rx_bytes, &VAR_2->rx_bytes);

 FUNC_11(VAR_3, FUNC_8(VAR_4), VAR_0->stat_offsets_loaded,
     &VAR_1->rx_unicast, &VAR_2->rx_unicast);

 FUNC_11(VAR_3, FUNC_4(VAR_4), VAR_0->stat_offsets_loaded,
     &VAR_1->rx_multicast, &VAR_2->rx_multicast);

 FUNC_11(VAR_3, FUNC_0(VAR_4), VAR_0->stat_offsets_loaded,
     &VAR_1->rx_broadcast, &VAR_2->rx_broadcast);

 FUNC_10(VAR_3, FUNC_6(VAR_4), VAR_0->stat_offsets_loaded,
     &VAR_1->rx_discards, &VAR_2->rx_discards);

 FUNC_11(VAR_3, FUNC_3(VAR_4), VAR_0->stat_offsets_loaded,
     &VAR_1->tx_bytes, &VAR_2->tx_bytes);

 FUNC_11(VAR_3, FUNC_9(VAR_4), VAR_0->stat_offsets_loaded,
     &VAR_1->tx_unicast, &VAR_2->tx_unicast);

 FUNC_11(VAR_3, FUNC_5(VAR_4), VAR_0->stat_offsets_loaded,
     &VAR_1->tx_multicast, &VAR_2->tx_multicast);

 FUNC_11(VAR_3, FUNC_1(VAR_4), VAR_0->stat_offsets_loaded,
     &VAR_1->tx_broadcast, &VAR_2->tx_broadcast);

 FUNC_10(VAR_3, FUNC_7(VAR_4), VAR_0->stat_offsets_loaded,
     &VAR_1->tx_errors, &VAR_2->tx_errors);

 VAR_0->stat_offsets_loaded = 1;
}
