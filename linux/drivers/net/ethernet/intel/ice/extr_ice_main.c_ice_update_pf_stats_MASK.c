
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int tx_broadcast; int tx_multicast; int tx_unicast; int tx_bytes; int rx_discards; int rx_broadcast; int rx_multicast; int rx_unicast; int rx_bytes; } ;
struct ice_hw_port_stats {int rx_jabber; int rx_oversize; int rx_fragments; int rx_undersize; int rx_len_errors; int mac_remote_faults; int mac_local_faults; int illegal_bytes; int crc_errors; int link_xoff_tx; int link_xon_tx; int link_xoff_rx; int link_xon_rx; int tx_size_big; int tx_size_1522; int tx_size_1023; int tx_size_511; int tx_size_255; int tx_size_127; int tx_size_64; int rx_size_big; int rx_size_1522; int rx_size_1023; int rx_size_511; int rx_size_255; int rx_size_127; int rx_size_64; int tx_dropped_link_down; TYPE_2__ eth; } ;
struct ice_hw {TYPE_1__* port_info; } ;
struct ice_pf {int stat_prev_loaded; struct ice_hw_port_stats stats; struct ice_hw_port_stats stats_prev; struct ice_hw hw; } ;
struct TYPE_3__ {int lport; } ;


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
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (int ) ;
 int FUNC_31 (int ) ;
 int FUNC_32 (int ) ;
 int FUNC_33 (int ) ;
 int FUNC_34 (int ) ;
 int FUNC_35 (int ) ;
 int VAR_0 ;
 int FUNC_36 (struct ice_hw*,int ,int,int *,int *) ;
 int FUNC_37 (struct ice_hw*,int ,int,int *,int *) ;
 int FUNC_38 (struct ice_pf*) ;

void FUNC_39(struct ice_pf *VAR_1)
{
 struct ice_hw_port_stats *VAR_2, *VAR_3;
 struct ice_hw *VAR_4 = &VAR_1->hw;
 u8 VAR_5;

 VAR_5 = VAR_4->port_info->lport;
 VAR_2 = &VAR_1->stats_prev;
 VAR_3 = &VAR_1->stats;

 FUNC_37(VAR_4, FUNC_3(VAR_5), VAR_1->stat_prev_loaded,
     &VAR_2->eth.rx_bytes,
     &VAR_3->eth.rx_bytes);

 FUNC_37(VAR_4, FUNC_34(VAR_5), VAR_1->stat_prev_loaded,
     &VAR_2->eth.rx_unicast,
     &VAR_3->eth.rx_unicast);

 FUNC_37(VAR_4, FUNC_11(VAR_5), VAR_1->stat_prev_loaded,
     &VAR_2->eth.rx_multicast,
     &VAR_3->eth.rx_multicast);

 FUNC_37(VAR_4, FUNC_0(VAR_5), VAR_1->stat_prev_loaded,
     &VAR_2->eth.rx_broadcast,
     &VAR_3->eth.rx_broadcast);

 FUNC_36(VAR_4, VAR_0, VAR_1->stat_prev_loaded,
     &VAR_2->eth.rx_discards,
     &VAR_3->eth.rx_discards);

 FUNC_37(VAR_4, FUNC_4(VAR_5), VAR_1->stat_prev_loaded,
     &VAR_2->eth.tx_bytes,
     &VAR_3->eth.tx_bytes);

 FUNC_37(VAR_4, FUNC_35(VAR_5), VAR_1->stat_prev_loaded,
     &VAR_2->eth.tx_unicast,
     &VAR_3->eth.tx_unicast);

 FUNC_37(VAR_4, FUNC_12(VAR_5), VAR_1->stat_prev_loaded,
     &VAR_2->eth.tx_multicast,
     &VAR_3->eth.tx_multicast);

 FUNC_37(VAR_4, FUNC_1(VAR_5), VAR_1->stat_prev_loaded,
     &VAR_2->eth.tx_broadcast,
     &VAR_3->eth.tx_broadcast);

 FUNC_36(VAR_4, FUNC_33(VAR_5), VAR_1->stat_prev_loaded,
     &VAR_2->tx_dropped_link_down,
     &VAR_3->tx_dropped_link_down);

 FUNC_37(VAR_4, FUNC_19(VAR_5), VAR_1->stat_prev_loaded,
     &VAR_2->rx_size_64, &VAR_3->rx_size_64);

 FUNC_37(VAR_4, FUNC_15(VAR_5), VAR_1->stat_prev_loaded,
     &VAR_2->rx_size_127, &VAR_3->rx_size_127);

 FUNC_37(VAR_4, FUNC_17(VAR_5), VAR_1->stat_prev_loaded,
     &VAR_2->rx_size_255, &VAR_3->rx_size_255);

 FUNC_37(VAR_4, FUNC_18(VAR_5), VAR_1->stat_prev_loaded,
     &VAR_2->rx_size_511, &VAR_3->rx_size_511);

 FUNC_37(VAR_4, FUNC_14(VAR_5), VAR_1->stat_prev_loaded,
     &VAR_2->rx_size_1023, &VAR_3->rx_size_1023);

 FUNC_37(VAR_4, FUNC_16(VAR_5), VAR_1->stat_prev_loaded,
     &VAR_2->rx_size_1522, &VAR_3->rx_size_1522);

 FUNC_37(VAR_4, FUNC_20(VAR_5), VAR_1->stat_prev_loaded,
     &VAR_2->rx_size_big, &VAR_3->rx_size_big);

 FUNC_37(VAR_4, FUNC_26(VAR_5), VAR_1->stat_prev_loaded,
     &VAR_2->tx_size_64, &VAR_3->tx_size_64);

 FUNC_37(VAR_4, FUNC_22(VAR_5), VAR_1->stat_prev_loaded,
     &VAR_2->tx_size_127, &VAR_3->tx_size_127);

 FUNC_37(VAR_4, FUNC_24(VAR_5), VAR_1->stat_prev_loaded,
     &VAR_2->tx_size_255, &VAR_3->tx_size_255);

 FUNC_37(VAR_4, FUNC_25(VAR_5), VAR_1->stat_prev_loaded,
     &VAR_2->tx_size_511, &VAR_3->tx_size_511);

 FUNC_37(VAR_4, FUNC_21(VAR_5), VAR_1->stat_prev_loaded,
     &VAR_2->tx_size_1023, &VAR_3->tx_size_1023);

 FUNC_37(VAR_4, FUNC_23(VAR_5), VAR_1->stat_prev_loaded,
     &VAR_2->tx_size_1522, &VAR_3->tx_size_1522);

 FUNC_37(VAR_4, FUNC_27(VAR_5), VAR_1->stat_prev_loaded,
     &VAR_2->tx_size_big, &VAR_3->tx_size_big);

 FUNC_36(VAR_4, FUNC_8(VAR_5), VAR_1->stat_prev_loaded,
     &VAR_2->link_xon_rx, &VAR_3->link_xon_rx);

 FUNC_36(VAR_4, FUNC_6(VAR_5), VAR_1->stat_prev_loaded,
     &VAR_2->link_xoff_rx, &VAR_3->link_xoff_rx);

 FUNC_36(VAR_4, FUNC_9(VAR_5), VAR_1->stat_prev_loaded,
     &VAR_2->link_xon_tx, &VAR_3->link_xon_tx);

 FUNC_36(VAR_4, FUNC_7(VAR_5), VAR_1->stat_prev_loaded,
     &VAR_2->link_xoff_tx, &VAR_3->link_xoff_tx);

 FUNC_38(VAR_1);

 FUNC_36(VAR_4, FUNC_2(VAR_5), VAR_1->stat_prev_loaded,
     &VAR_2->crc_errors, &VAR_3->crc_errors);

 FUNC_36(VAR_4, FUNC_5(VAR_5), VAR_1->stat_prev_loaded,
     &VAR_2->illegal_bytes, &VAR_3->illegal_bytes);

 FUNC_36(VAR_4, FUNC_10(VAR_5), VAR_1->stat_prev_loaded,
     &VAR_2->mac_local_faults,
     &VAR_3->mac_local_faults);

 FUNC_36(VAR_4, FUNC_13(VAR_5), VAR_1->stat_prev_loaded,
     &VAR_2->mac_remote_faults,
     &VAR_3->mac_remote_faults);

 FUNC_36(VAR_4, FUNC_30(VAR_5), VAR_1->stat_prev_loaded,
     &VAR_2->rx_len_errors, &VAR_3->rx_len_errors);

 FUNC_36(VAR_4, FUNC_32(VAR_5), VAR_1->stat_prev_loaded,
     &VAR_2->rx_undersize, &VAR_3->rx_undersize);

 FUNC_36(VAR_4, FUNC_28(VAR_5), VAR_1->stat_prev_loaded,
     &VAR_2->rx_fragments, &VAR_3->rx_fragments);

 FUNC_36(VAR_4, FUNC_31(VAR_5), VAR_1->stat_prev_loaded,
     &VAR_2->rx_oversize, &VAR_3->rx_oversize);

 FUNC_36(VAR_4, FUNC_29(VAR_5), VAR_1->stat_prev_loaded,
     &VAR_2->rx_jabber, &VAR_3->rx_jabber);

 VAR_1->stat_prev_loaded = 1;
}
