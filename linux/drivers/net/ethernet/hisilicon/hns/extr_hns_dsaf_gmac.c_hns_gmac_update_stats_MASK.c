
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mac_hw_stats {int tx_pfc_tc0; int tx_crc_err; int tx_vlan; int tx_underrun_err; int tx_jabber_err; int tx_1519tomax; int tx_1024to1518; int tx_512to1023; int tx_256to511; int tx_128to255; int tx_65to127; int tx_64bytes; int tx_bc_pkts; int tx_mc_pkts; int tx_uc_pkts; int tx_bad_bytes; int tx_good_bytes; int rx_comma_err; int rx_len_err; int rx_fifo_overrun_err; int rx_filter_bytes; int rx_filter_pkts; int rx_under_min; int rx_minto64; int rx_long_err; int rx_unknown_ctrl; int rx_pfc_tc0; int rx_jabber_err; int rx_oversize; int rx_align_err; int rx_data_err; int rx_vlan_pkts; int rx_fcs_err; int rx_1519tomax; int rx_1024to1518; int rx_512to1023; int rx_256to511; int rx_128to255; int rx_65to127; int rx_64bytes; int rx_bc_pkts; int rx_mc_pkts; int rx_uc_pkts; int rx_bad_bytes; int rx_good_bytes; } ;
struct mac_driver {TYPE_1__* mac_cb; } ;
struct TYPE_2__ {struct mac_hw_stats hw_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 scalar_t__ FUNC_0 (struct mac_driver*,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_45)
{
 struct mac_hw_stats *VAR_46 = ((void*)0);
 struct mac_driver *VAR_47 = (struct mac_driver *)VAR_45;

 VAR_46 = &VAR_47->mac_cb->hw_stats;


 VAR_46->rx_good_bytes
  += FUNC_0(VAR_47, VAR_14);
 VAR_46->rx_bad_bytes
  += FUNC_0(VAR_47, VAR_12);
 VAR_46->rx_uc_pkts += FUNC_0(VAR_47, VAR_27);
 VAR_46->rx_mc_pkts += FUNC_0(VAR_47, VAR_11);
 VAR_46->rx_bc_pkts += FUNC_0(VAR_47, VAR_3);
 VAR_46->rx_64bytes
  += FUNC_0(VAR_47, VAR_22);
 VAR_46->rx_65to127
  += FUNC_0(VAR_47, VAR_23);
 VAR_46->rx_128to255
  += FUNC_0(VAR_47, VAR_18);
 VAR_46->rx_256to511
  += FUNC_0(VAR_47, VAR_20);
 VAR_46->rx_512to1023
  += FUNC_0(VAR_47, VAR_21);
 VAR_46->rx_1024to1518
  += FUNC_0(VAR_47, VAR_17);
 VAR_46->rx_1519tomax
  += FUNC_0(VAR_47, VAR_19);
 VAR_46->rx_fcs_err += FUNC_0(VAR_47, VAR_6);
 VAR_46->rx_vlan_pkts += FUNC_0(VAR_47, VAR_26);
 VAR_46->rx_data_err += FUNC_0(VAR_47, VAR_4);
 VAR_46->rx_align_err
  += FUNC_0(VAR_47, VAR_2);
 VAR_46->rx_oversize
  += FUNC_0(VAR_47, VAR_10);
 VAR_46->rx_jabber_err
  += FUNC_0(VAR_47, VAR_8);
 VAR_46->rx_pfc_tc0
  += FUNC_0(VAR_47, VAR_16);
 VAR_46->rx_unknown_ctrl
  += FUNC_0(VAR_47, VAR_28);
 VAR_46->rx_long_err
  += FUNC_0(VAR_47, VAR_29);
 VAR_46->rx_minto64
  += FUNC_0(VAR_47, VAR_24);
 VAR_46->rx_under_min
  += FUNC_0(VAR_47, VAR_25);
 VAR_46->rx_filter_pkts
  += FUNC_0(VAR_47, VAR_7);
 VAR_46->rx_filter_bytes
  += FUNC_0(VAR_47, VAR_13);
 VAR_46->rx_fifo_overrun_err
  += FUNC_0(VAR_47, VAR_15);
 VAR_46->rx_len_err
  += FUNC_0(VAR_47, VAR_9);
 VAR_46->rx_comma_err
  += FUNC_0(VAR_47, VAR_5);


 VAR_46->tx_good_bytes
  += FUNC_0(VAR_47, VAR_1);
 VAR_46->tx_bad_bytes
  += FUNC_0(VAR_47, VAR_0);
 VAR_46->tx_uc_pkts += FUNC_0(VAR_47, VAR_43);
 VAR_46->tx_mc_pkts += FUNC_0(VAR_47, VAR_33);
 VAR_46->tx_bc_pkts += FUNC_0(VAR_47, VAR_30);
 VAR_46->tx_64bytes
  += FUNC_0(VAR_47, VAR_40);
 VAR_46->tx_65to127
  += FUNC_0(VAR_47, VAR_41);
 VAR_46->tx_128to255
  += FUNC_0(VAR_47, VAR_36);
 VAR_46->tx_256to511
  += FUNC_0(VAR_47, VAR_38);
 VAR_46->tx_512to1023
  += FUNC_0(VAR_47, VAR_39);
 VAR_46->tx_1024to1518
  += FUNC_0(VAR_47, VAR_35);
 VAR_46->tx_1519tomax
  += FUNC_0(VAR_47, VAR_37);
 VAR_46->tx_jabber_err
  += FUNC_0(VAR_47, VAR_32);
 VAR_46->tx_underrun_err
  += FUNC_0(VAR_47, VAR_44);
 VAR_46->tx_vlan += FUNC_0(VAR_47, VAR_42);
 VAR_46->tx_crc_err += FUNC_0(VAR_47, VAR_31);
 VAR_46->tx_pfc_tc0
  += FUNC_0(VAR_47, VAR_34);
}
