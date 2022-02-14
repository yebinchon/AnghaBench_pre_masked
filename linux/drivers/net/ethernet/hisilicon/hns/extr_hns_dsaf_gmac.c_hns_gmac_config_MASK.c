
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_params {int dev; int vaddr; int mac_mode; int mac_id; } ;
struct mac_driver {int wait_fifo_clean; int set_promiscuous; int update_stats; int get_strings; int get_sset_count; int get_ethtool_stats; int get_regs_count; int get_regs; int get_link_status; int get_pause_enable; int autoneg_stat; int get_info; int set_rx_ignore_pause_frames; int config_half_duplex; int config_pad_and_crc; int config_loopback; int set_an_mode; int set_mac_addr; struct hns_mac_cb* mac_cb; int dev; int io_base; int mac_mode; int mac_id; int mac_pausefrm_cfg; int config_max_frame_length; int set_tx_auto_pause_frames; int need_adjust_link; int adjust_link; int mac_free; int mac_disable; int mac_enable; int mac_init; } ;
struct hns_mac_cb {int dev; } ;


 int VAR_0 ;
 struct mac_driver* FUNC_0 (int ,int,int ) ;
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

void *FUNC_1(struct hns_mac_cb *VAR_28, struct mac_params *VAR_29)
{
 struct mac_driver *VAR_30;

 VAR_30 = FUNC_0(VAR_28->dev, sizeof(*VAR_30), VAR_0);
 if (!VAR_30)
  return ((void*)0);

 VAR_30->mac_init = VAR_18;
 VAR_30->mac_enable = VAR_8;
 VAR_30->mac_disable = VAR_7;
 VAR_30->mac_free = VAR_9;
 VAR_30->adjust_link = VAR_1;
 VAR_30->need_adjust_link = VAR_19;
 VAR_30->set_tx_auto_pause_frames = VAR_25;
 VAR_30->config_max_frame_length = VAR_5;
 VAR_30->mac_pausefrm_cfg = VAR_20;

 VAR_30->mac_id = VAR_29->mac_id;
 VAR_30->mac_mode = VAR_29->mac_mode;
 VAR_30->io_base = VAR_29->vaddr;
 VAR_30->dev = VAR_29->dev;
 VAR_30->mac_cb = VAR_28;

 VAR_30->set_mac_addr = VAR_22;
 VAR_30->set_an_mode = VAR_3;
 VAR_30->config_loopback = VAR_4;
 VAR_30->config_pad_and_crc = VAR_6;
 VAR_30->config_half_duplex = VAR_21;
 VAR_30->set_rx_ignore_pause_frames = VAR_24;
 VAR_30->get_info = VAR_10;
 VAR_30->autoneg_stat = VAR_2;
 VAR_30->get_pause_enable = VAR_12;
 VAR_30->get_link_status = VAR_11;
 VAR_30->get_regs = VAR_13;
 VAR_30->get_regs_count = VAR_14;
 VAR_30->get_ethtool_stats = VAR_16;
 VAR_30->get_sset_count = VAR_15;
 VAR_30->get_strings = VAR_17;
 VAR_30->update_stats = VAR_26;
 VAR_30->set_promiscuous = VAR_23;
 VAR_30->wait_fifo_clean = VAR_27;

 return (void *)VAR_30;
}
