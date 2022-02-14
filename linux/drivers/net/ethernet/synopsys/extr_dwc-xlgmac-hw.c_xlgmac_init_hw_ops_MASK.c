
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_hw_ops {int set_rss_lookup_table; int set_rss_hash_key; int disable_rss; int enable_rss; int read_mmc_stats; int rx_mmc_int; int tx_mmc_int; int config_pblx8; int get_tx_pbl_val; int config_tx_pbl_val; int get_rx_pbl_val; int config_rx_pbl_val; int config_osp_mode; int config_tsf_mode; int config_rsf_mode; int config_tx_threshold; int config_rx_threshold; int riwt_to_usec; int usec_to_riwt; int config_tx_coalesce; int config_rx_coalesce; int update_vlan_hash_table; int disable_rx_vlan_filtering; int enable_rx_vlan_filtering; int disable_rx_vlan_stripping; int enable_rx_vlan_stripping; int config_rx_flow_control; int config_tx_flow_control; int tx_start_xmit; int is_context_desc; int is_last_desc; int rx_desc_reset; int tx_desc_reset; int rx_desc_init; int tx_desc_init; int set_xlgmii_100000_speed; int set_xlgmii_50000_speed; int set_xlgmii_40000_speed; int set_xlgmii_25000_speed; int disable_rx_csum; int enable_rx_csum; int config_rx_mode; int set_mac_address; int disable_int; int enable_int; int dev_read; int dev_xmit; int disable_rx; int enable_rx; int disable_tx; int enable_tx; int tx_complete; int exit; int init; } ;


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

void FUNC_0(struct xlgmac_hw_ops *VAR_54)
{
 VAR_54->init = VAR_32;
 VAR_54->exit = VAR_31;

 VAR_54->tx_complete = VAR_47;

 VAR_54->enable_tx = VAR_28;
 VAR_54->disable_tx = VAR_21;
 VAR_54->enable_rx = VAR_24;
 VAR_54->disable_rx = VAR_17;

 VAR_54->dev_xmit = VAR_14;
 VAR_54->dev_read = VAR_13;
 VAR_54->enable_int = VAR_22;
 VAR_54->disable_int = VAR_15;

 VAR_54->set_mac_address = VAR_40;
 VAR_54->config_rx_mode = VAR_5;
 VAR_54->enable_rx_csum = VAR_25;
 VAR_54->disable_rx_csum = VAR_18;


 VAR_54->set_xlgmii_25000_speed = VAR_44;
 VAR_54->set_xlgmii_40000_speed = VAR_45;
 VAR_54->set_xlgmii_50000_speed = VAR_46;
 VAR_54->set_xlgmii_100000_speed = VAR_43;


 VAR_54->tx_desc_init = VAR_48;
 VAR_54->rx_desc_init = VAR_37;
 VAR_54->tx_desc_reset = VAR_49;
 VAR_54->rx_desc_reset = VAR_38;
 VAR_54->is_last_desc = VAR_34;
 VAR_54->is_context_desc = VAR_33;
 VAR_54->tx_start_xmit = VAR_51;


 VAR_54->config_tx_flow_control = VAR_10;
 VAR_54->config_rx_flow_control = VAR_4;


 VAR_54->enable_rx_vlan_stripping = VAR_27;
 VAR_54->disable_rx_vlan_stripping = VAR_20;
 VAR_54->enable_rx_vlan_filtering = VAR_26;
 VAR_54->disable_rx_vlan_filtering = VAR_19;
 VAR_54->update_vlan_hash_table = VAR_52;


 VAR_54->config_rx_coalesce = VAR_3;
 VAR_54->config_tx_coalesce = VAR_9;
 VAR_54->usec_to_riwt = VAR_53;
 VAR_54->riwt_to_usec = VAR_36;


 VAR_54->config_rx_threshold = VAR_7;
 VAR_54->config_tx_threshold = VAR_12;


 VAR_54->config_rsf_mode = VAR_2;
 VAR_54->config_tsf_mode = VAR_8;


 VAR_54->config_osp_mode = VAR_0;


 VAR_54->config_rx_pbl_val = VAR_6;
 VAR_54->get_rx_pbl_val = VAR_29;
 VAR_54->config_tx_pbl_val = VAR_11;
 VAR_54->get_tx_pbl_val = VAR_30;
 VAR_54->config_pblx8 = VAR_1;


 VAR_54->tx_mmc_int = VAR_50;
 VAR_54->rx_mmc_int = VAR_39;
 VAR_54->read_mmc_stats = VAR_35;


 VAR_54->enable_rss = VAR_23;
 VAR_54->disable_rss = VAR_16;
 VAR_54->set_rss_hash_key = VAR_41;
 VAR_54->set_rss_lookup_table = VAR_42;
}
