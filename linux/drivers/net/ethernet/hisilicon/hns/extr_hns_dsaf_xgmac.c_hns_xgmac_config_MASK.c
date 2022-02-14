
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_params {int dev; int vaddr; int mac_mode; int mac_id; } ;
struct mac_driver {int update_stats; int get_strings; int get_regs_count; int get_sset_count; int get_ethtool_stats; int get_regs; int get_link_status; int get_pause_enable; int get_info; int * autoneg_stat; int mac_pausefrm_cfg; int config_max_frame_length; int set_tx_auto_pause_frames; int * adjust_link; int mac_free; int set_rx_ignore_pause_frames; int * config_half_duplex; int config_pad_and_crc; int * config_loopback; int * set_an_mode; int set_mac_addr; struct hns_mac_cb* mac_cb; int dev; int io_base; int mac_mode; int mac_id; int mac_disable; int mac_enable; int mac_init; } ;
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

void *FUNC_1(struct hns_mac_cb *VAR_20, struct mac_params *VAR_21)
{
 struct mac_driver *VAR_22;

 VAR_22 = FUNC_0(VAR_20->dev, sizeof(*VAR_22), VAR_0);
 if (!VAR_22)
  return ((void*)0);

 VAR_22->mac_init = VAR_14;
 VAR_22->mac_enable = VAR_4;
 VAR_22->mac_disable = VAR_3;

 VAR_22->mac_id = VAR_21->mac_id;
 VAR_22->mac_mode = VAR_21->mac_mode;
 VAR_22->io_base = VAR_21->vaddr;
 VAR_22->dev = VAR_21->dev;
 VAR_22->mac_cb = VAR_20;

 VAR_22->set_mac_addr = VAR_16;
 VAR_22->set_an_mode = ((void*)0);
 VAR_22->config_loopback = ((void*)0);
 VAR_22->config_pad_and_crc = VAR_2;
 VAR_22->config_half_duplex = ((void*)0);
 VAR_22->set_rx_ignore_pause_frames =
  VAR_17;
 VAR_22->mac_free = VAR_5;
 VAR_22->adjust_link = ((void*)0);
 VAR_22->set_tx_auto_pause_frames = VAR_18;
 VAR_22->config_max_frame_length = VAR_1;
 VAR_22->mac_pausefrm_cfg = VAR_15;
 VAR_22->autoneg_stat = ((void*)0);
 VAR_22->get_info = VAR_6;
 VAR_22->get_pause_enable = VAR_8;
 VAR_22->get_link_status = VAR_7;
 VAR_22->get_regs = VAR_9;
 VAR_22->get_ethtool_stats = VAR_12;
 VAR_22->get_sset_count = VAR_11;
 VAR_22->get_regs_count = VAR_10;
 VAR_22->get_strings = VAR_13;
 VAR_22->update_stats = VAR_19;

 return (void *)VAR_22;
}
