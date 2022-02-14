
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_hw_if {int set_vxlan_id; int disable_vxlan; int enable_vxlan; int disable_ecc_sec; int disable_ecc_ded; int set_rss_lookup_table; int set_rss_hash_key; int disable_rss; int enable_rss; int config_dcb_pfc; int config_dcb_tc; int config_tc; int get_tx_tstamp; int get_tstamp_time; int set_tstamp_time; int update_tstamp_addend; int config_tstamp; int read_mmc_stats; int rx_mmc_int; int tx_mmc_int; int config_osp_mode; int config_tsf_mode; int config_rsf_mode; int config_tx_threshold; int config_rx_threshold; int riwt_to_usec; int usec_to_riwt; int config_tx_coalesce; int config_rx_coalesce; int config_rx_flow_control; int config_tx_flow_control; int tx_start_xmit; int is_context_desc; int is_last_desc; int rx_desc_reset; int tx_desc_reset; int rx_desc_init; int tx_desc_init; int exit; int init; int disable_int; int enable_int; int dev_read; int dev_xmit; int powerdown_rx; int powerup_rx; int powerdown_tx; int powerup_tx; int disable_rx; int enable_rx; int disable_tx; int enable_tx; int clr_gpio; int set_gpio; int write_ext_mii_regs; int read_ext_mii_regs; int set_ext_mii_mode; int set_speed; int write_mmd_regs; int read_mmd_regs; int update_vlan_hash_table; int disable_rx_vlan_filtering; int enable_rx_vlan_filtering; int disable_rx_vlan_stripping; int enable_rx_vlan_stripping; int disable_rx_csum; int enable_rx_csum; int config_rx_mode; int set_mac_address; int tx_complete; } ;


 int FUNC_0 (char*) ;
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
 int VAR_68 ;
 int VAR_69 ;

void FUNC_1(struct xgbe_hw_if *VAR_70)
{
 FUNC_0("-->xgbe_init_function_ptrs\n");

 VAR_70->tx_complete = VAR_60;

 VAR_70->set_mac_address = VAR_54;
 VAR_70->config_rx_mode = VAR_7;

 VAR_70->enable_rx_csum = VAR_30;
 VAR_70->disable_rx_csum = VAR_22;

 VAR_70->enable_rx_vlan_stripping = VAR_32;
 VAR_70->disable_rx_vlan_stripping = VAR_24;
 VAR_70->enable_rx_vlan_filtering = VAR_31;
 VAR_70->disable_rx_vlan_filtering = VAR_23;
 VAR_70->update_vlan_hash_table = VAR_66;

 VAR_70->read_mmd_regs = VAR_47;
 VAR_70->write_mmd_regs = VAR_69;

 VAR_70->set_speed = VAR_57;

 VAR_70->set_ext_mii_mode = VAR_52;
 VAR_70->read_ext_mii_regs = VAR_45;
 VAR_70->write_ext_mii_regs = VAR_68;

 VAR_70->set_gpio = VAR_53;
 VAR_70->clr_gpio = VAR_0;

 VAR_70->enable_tx = VAR_33;
 VAR_70->disable_tx = VAR_25;
 VAR_70->enable_rx = VAR_29;
 VAR_70->disable_rx = VAR_21;

 VAR_70->powerup_tx = VAR_44;
 VAR_70->powerdown_tx = VAR_42;
 VAR_70->powerup_rx = VAR_43;
 VAR_70->powerdown_rx = VAR_41;

 VAR_70->dev_xmit = VAR_16;
 VAR_70->dev_read = VAR_15;
 VAR_70->enable_int = VAR_27;
 VAR_70->disable_int = VAR_19;
 VAR_70->init = VAR_38;
 VAR_70->exit = VAR_35;


 VAR_70->tx_desc_init = VAR_61;
 VAR_70->rx_desc_init = VAR_49;
 VAR_70->tx_desc_reset = VAR_62;
 VAR_70->rx_desc_reset = VAR_50;
 VAR_70->is_last_desc = VAR_40;
 VAR_70->is_context_desc = VAR_39;
 VAR_70->tx_start_xmit = VAR_64;


 VAR_70->config_tx_flow_control = VAR_13;
 VAR_70->config_rx_flow_control = VAR_6;


 VAR_70->config_rx_coalesce = VAR_5;
 VAR_70->config_tx_coalesce = VAR_12;
 VAR_70->usec_to_riwt = VAR_67;
 VAR_70->riwt_to_usec = VAR_48;


 VAR_70->config_rx_threshold = VAR_8;
 VAR_70->config_tx_threshold = VAR_14;


 VAR_70->config_rsf_mode = VAR_4;
 VAR_70->config_tsf_mode = VAR_10;


 VAR_70->config_osp_mode = VAR_3;


 VAR_70->tx_mmc_int = VAR_63;
 VAR_70->rx_mmc_int = VAR_51;
 VAR_70->read_mmc_stats = VAR_46;


 VAR_70->config_tstamp = VAR_11;
 VAR_70->update_tstamp_addend = VAR_65;
 VAR_70->set_tstamp_time = VAR_58;
 VAR_70->get_tstamp_time = VAR_36;
 VAR_70->get_tx_tstamp = VAR_37;


 VAR_70->config_tc = VAR_9;
 VAR_70->config_dcb_tc = VAR_2;
 VAR_70->config_dcb_pfc = VAR_1;


 VAR_70->enable_rss = VAR_28;
 VAR_70->disable_rss = VAR_20;
 VAR_70->set_rss_hash_key = VAR_55;
 VAR_70->set_rss_lookup_table = VAR_56;


 VAR_70->disable_ecc_ded = VAR_17;
 VAR_70->disable_ecc_sec = VAR_18;


 VAR_70->enable_vxlan = VAR_34;
 VAR_70->disable_vxlan = VAR_26;
 VAR_70->set_vxlan_id = VAR_59;

 FUNC_0("<--xgbe_init_function_ptrs\n");
}
