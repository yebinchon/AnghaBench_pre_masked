
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mac_hw_stats {void* rx_fcs_err; void* rx_symbol_err; void* rx_1731_pkts; void* tx_bad_to_sw; void* tx_good_to_sw; void* rx_unknown_ctrl; void* rx_pfc_tc7; void* rx_pfc_tc6; void* rx_pfc_tc5; void* rx_pfc_tc4; void* rx_pfc_tc3; void* rx_pfc_tc2; void* rx_pfc_tc1; void* rx_pfc_tc0; void* rx_bc_pkts; void* rx_mc_pkts; void* rx_uc_pkts; void* rx_total_bytes; void* rx_total_pkts; void* rx_good_bytes; void* rx_good_pkts; void* rx_jabber_err; void* rx_oversize; void* rx_1519tomax_good; void* rx_1519tomax; void* rx_1024to1518; void* rx_512to1023; void* rx_256to511; void* rx_128to255; void* rx_65to127; void* rx_64bytes; void* rx_under_min; void* rx_undersize; void* rx_fragment_err; void* tx_bad_pkts; void* rx_bad_from_sw; void* rx_good_from_sw; void* tx_1588_pkts; void* tx_1731_pkts; void* tx_ctrl; void* tx_pfc_tc7; void* tx_pfc_tc6; void* tx_pfc_tc5; void* tx_pfc_tc4; void* tx_pfc_tc3; void* tx_pfc_tc2; void* tx_pfc_tc1; void* tx_pfc_tc0; void* tx_bc_pkts; void* tx_mc_pkts; void* tx_uc_pkts; void* tx_total_bytes; void* tx_total_pkts; void* tx_good_bytes; void* tx_good_pkts; void* tx_jabber_err; void* tx_oversize; void* tx_1519tomax_good; void* tx_1519tomax; void* tx_1024to1518; void* tx_512to1023; void* tx_256to511; void* tx_128to255; void* tx_65to127; void* tx_64bytes; void* tx_under_min_pkts; void* tx_undersize; void* tx_fragment_err; } ;
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
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 void* FUNC_0 (struct mac_driver*,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_68)
{
 struct mac_driver *VAR_69 = (struct mac_driver *)VAR_68;
 struct mac_hw_stats *VAR_70 = &VAR_69->mac_cb->hw_stats;


 VAR_70->tx_fragment_err
  = FUNC_0(VAR_69, VAR_50);
 VAR_70->tx_undersize
  = FUNC_0(VAR_69, VAR_54);
 VAR_70->tx_under_min_pkts
  = FUNC_0(VAR_69, VAR_53);
 VAR_70->tx_64bytes = FUNC_0(VAR_69, VAR_48);
 VAR_70->tx_65to127
  = FUNC_0(VAR_69, VAR_49);
 VAR_70->tx_128to255
  = FUNC_0(VAR_69, VAR_43);
 VAR_70->tx_256to511
  = FUNC_0(VAR_69, VAR_46);
 VAR_70->tx_512to1023
  = FUNC_0(VAR_69, VAR_47);
 VAR_70->tx_1024to1518
  = FUNC_0(VAR_69, VAR_42);
 VAR_70->tx_1519tomax
  = FUNC_0(VAR_69, VAR_44);
 VAR_70->tx_1519tomax_good
  = FUNC_0(VAR_69, VAR_45);
 VAR_70->tx_oversize = FUNC_0(VAR_69, VAR_52);
 VAR_70->tx_jabber_err = FUNC_0(VAR_69, VAR_51);
 VAR_70->tx_good_pkts = FUNC_0(VAR_69, VAR_39);
 VAR_70->tx_good_bytes = FUNC_0(VAR_69, VAR_38);
 VAR_70->tx_total_pkts = FUNC_0(VAR_69, VAR_66);
 VAR_70->tx_total_bytes
  = FUNC_0(VAR_69, VAR_65);
 VAR_70->tx_uc_pkts = FUNC_0(VAR_69, VAR_67);
 VAR_70->tx_mc_pkts = FUNC_0(VAR_69, VAR_41);
 VAR_70->tx_bc_pkts = FUNC_0(VAR_69, VAR_36);
 VAR_70->tx_pfc_tc0 = FUNC_0(VAR_69, VAR_55);
 VAR_70->tx_pfc_tc1 = FUNC_0(VAR_69, VAR_56);
 VAR_70->tx_pfc_tc2 = FUNC_0(VAR_69, VAR_57);
 VAR_70->tx_pfc_tc3 = FUNC_0(VAR_69, VAR_58);
 VAR_70->tx_pfc_tc4 = FUNC_0(VAR_69, VAR_59);
 VAR_70->tx_pfc_tc5 = FUNC_0(VAR_69, VAR_60);
 VAR_70->tx_pfc_tc6 = FUNC_0(VAR_69, VAR_61);
 VAR_70->tx_pfc_tc7 = FUNC_0(VAR_69, VAR_62);
 VAR_70->tx_ctrl = FUNC_0(VAR_69, VAR_40);
 VAR_70->tx_1731_pkts = FUNC_0(VAR_69, VAR_35);
 VAR_70->tx_1588_pkts = FUNC_0(VAR_69, VAR_34);
 VAR_70->rx_good_from_sw
  = FUNC_0(VAR_69, VAR_4);
 VAR_70->rx_bad_from_sw
  = FUNC_0(VAR_69, VAR_3);
 VAR_70->tx_bad_pkts = FUNC_0(VAR_69, VAR_37);


 VAR_70->rx_fragment_err
  = FUNC_0(VAR_69, VAR_18);
 VAR_70->rx_undersize
  = FUNC_0(VAR_69, VAR_9);
 VAR_70->rx_under_min
  = FUNC_0(VAR_69, VAR_21);
 VAR_70->rx_64bytes = FUNC_0(VAR_69, VAR_16);
 VAR_70->rx_65to127
  = FUNC_0(VAR_69, VAR_17);
 VAR_70->rx_128to255
  = FUNC_0(VAR_69, VAR_11);
 VAR_70->rx_256to511
  = FUNC_0(VAR_69, VAR_14);
 VAR_70->rx_512to1023
  = FUNC_0(VAR_69, VAR_15);
 VAR_70->rx_1024to1518
  = FUNC_0(VAR_69, VAR_10);
 VAR_70->rx_1519tomax
  = FUNC_0(VAR_69, VAR_12);
 VAR_70->rx_1519tomax_good
  = FUNC_0(VAR_69, VAR_13);
 VAR_70->rx_oversize = FUNC_0(VAR_69, VAR_20);
 VAR_70->rx_jabber_err = FUNC_0(VAR_69, VAR_19);
 VAR_70->rx_good_pkts = FUNC_0(VAR_69, VAR_6);
 VAR_70->rx_good_bytes = FUNC_0(VAR_69, VAR_5);
 VAR_70->rx_total_pkts = FUNC_0(VAR_69, VAR_32);
 VAR_70->rx_total_bytes
  = FUNC_0(VAR_69, VAR_31);
 VAR_70->rx_uc_pkts = FUNC_0(VAR_69, VAR_33);
 VAR_70->rx_mc_pkts = FUNC_0(VAR_69, VAR_8);
 VAR_70->rx_bc_pkts = FUNC_0(VAR_69, VAR_1);
 VAR_70->rx_pfc_tc0 = FUNC_0(VAR_69, VAR_22);
 VAR_70->rx_pfc_tc1 = FUNC_0(VAR_69, VAR_23);
 VAR_70->rx_pfc_tc2 = FUNC_0(VAR_69, VAR_24);
 VAR_70->rx_pfc_tc3 = FUNC_0(VAR_69, VAR_25);
 VAR_70->rx_pfc_tc4 = FUNC_0(VAR_69, VAR_26);
 VAR_70->rx_pfc_tc5 = FUNC_0(VAR_69, VAR_27);
 VAR_70->rx_pfc_tc6 = FUNC_0(VAR_69, VAR_28);
 VAR_70->rx_pfc_tc7 = FUNC_0(VAR_69, VAR_29);

 VAR_70->rx_unknown_ctrl
  = FUNC_0(VAR_69, VAR_7);
 VAR_70->tx_good_to_sw
  = FUNC_0(VAR_69, VAR_64);
 VAR_70->tx_bad_to_sw
  = FUNC_0(VAR_69, VAR_63);
 VAR_70->rx_1731_pkts = FUNC_0(VAR_69, VAR_0);
 VAR_70->rx_symbol_err
  = FUNC_0(VAR_69, VAR_30);
 VAR_70->rx_fcs_err = FUNC_0(VAR_69, VAR_2);
}
