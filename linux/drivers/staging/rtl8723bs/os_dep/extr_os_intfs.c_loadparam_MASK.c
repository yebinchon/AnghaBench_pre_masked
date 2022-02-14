
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef void* u16 ;
struct TYPE_2__ {int SsidLength; int Ssid; } ;
struct registry_priv {int accept_addba_req; int RegPowerBase; int TxBBSwing_2G; int TxBBSwing_5G; int bEn_RFE; int RFE_Type; void* hiq_filter; void* qos_opt_enable; void* RegDecryptCustomFile; void* load_phy_file; void* RegEnableTxPowerByRate; void* RegEnableTxPowerLimit; void* notch_filter; int ifname; void* enable80211d; void* max_roaming_times; void* hw_wps_pbc; void* antdiv_type; void* antdiv_cfg; scalar_t__ ant_num; void* bt_ampdu; void* bt_sco; void* bt_iso; void* btcoex; void* channel_plan; void* wifi_spec; void* low_power; void* rf_config; void* lowrate_two_xmit; void* beamform_cap; void* stbc_cap; void* ldpc_cap; void* short_gi; void* ampdu_amsdu; void* rx_stbc; void* ampdu_enable; void* bw_mode; void* ht_enable; void* uapsd_acvo_en; void* uapsd_acvi_en; void* uapsd_acbe_en; void* uapsd_acbk_en; void* uapsd_max_sp; void* uapsd_enable; void* wmm_enable; void* usb_rxagg_mode; void* acm_method; void* software_decrypt; void* software_encrypt; void* ack_policy; void* busy_thresh; void* short_retry_lmt; void* long_retry_lmt; void* radio_enable; void* ips_mode; void* power_mgnt; void* check_fw_ps; void* smart_ps; void* soft_ap; void* adhoc_tx_pwr; void* scan_mode; void* preamble; void* frag_thresh; void* rts_thresh; void* vcs_type; void* vrtl_carrier_sense; void* wireless_mode; void* channel; TYPE_1__ ssid; void* network_mode; void* lbkmode; void* rfintfs; void* chip_version; } ;
struct adapter {struct registry_priv registrypriv; } ;
typedef scalar_t__ s8 ;
typedef int _nic_hdl ;


 char* VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 scalar_t__ VAR_45 ;
 scalar_t__ VAR_46 ;
 scalar_t__ VAR_47 ;
 scalar_t__ VAR_48 ;
 scalar_t__ VAR_49 ;
 scalar_t__ VAR_50 ;
 scalar_t__ VAR_51 ;
 scalar_t__ VAR_52 ;
 scalar_t__ VAR_53 ;
 scalar_t__ VAR_54 ;
 scalar_t__ VAR_55 ;
 scalar_t__ VAR_56 ;
 scalar_t__ VAR_57 ;
 scalar_t__ VAR_58 ;
 scalar_t__ VAR_59 ;
 scalar_t__ VAR_60 ;
 scalar_t__ VAR_61 ;
 scalar_t__ VAR_62 ;
 scalar_t__ VAR_63 ;
 scalar_t__ VAR_64 ;
 scalar_t__ VAR_65 ;
 int FUNC_1 (int ,int,char*,char*) ;

__attribute__((used)) static void FUNC_2(struct adapter *VAR_66, _nic_hdl VAR_67)
{
 struct registry_priv *VAR_68 = &VAR_66->registrypriv;

 VAR_68->chip_version = (u8)VAR_20;
 VAR_68->rfintfs = (u8)VAR_41;
 VAR_68->lbkmode = (u8)VAR_27;

 VAR_68->network_mode = (u8)VAR_34;

 FUNC_0(VAR_68->ssid.Ssid, "ANY", 3);
 VAR_68->ssid.SsidLength = 3;

 VAR_68->channel = (u8)VAR_17;
 VAR_68->wireless_mode = (u8)VAR_64;

 VAR_68->vrtl_carrier_sense = (u8)VAR_62 ;
 VAR_68->vcs_type = (u8)VAR_61;
 VAR_68->rts_thresh = (u16)VAR_42;
 VAR_68->frag_thresh = (u16)VAR_22;
 VAR_68->preamble = (u8)VAR_37;
 VAR_68->scan_mode = (u8)VAR_44;
 VAR_68->adhoc_tx_pwr = (u8)VAR_4;
 VAR_68->soft_ap = (u8)VAR_48;
 VAR_68->smart_ps = (u8)VAR_47;
 VAR_68->check_fw_ps = (u8)VAR_19;
 VAR_68->power_mgnt = (u8)VAR_36;
 VAR_68->ips_mode = (u8)VAR_26;
 VAR_68->radio_enable = (u8)VAR_39;
 VAR_68->long_retry_lmt = (u8)VAR_30;
 VAR_68->short_retry_lmt = (u8)VAR_46;
 VAR_68->busy_thresh = (u16)VAR_15;

 VAR_68->ack_policy = (u8)VAR_2;
 VAR_68->software_encrypt = (u8)VAR_50;
 VAR_68->software_decrypt = (u8)VAR_49;

 VAR_68->acm_method = (u8)VAR_3;
 VAR_68->usb_rxagg_mode = (u8)VAR_60;


 VAR_68->wmm_enable = (u8)VAR_65;
 VAR_68->uapsd_enable = (u8)VAR_58;
 VAR_68->uapsd_max_sp = (u8)VAR_59;
 VAR_68->uapsd_acbk_en = (u8)VAR_55;
 VAR_68->uapsd_acbe_en = (u8)VAR_54;
 VAR_68->uapsd_acvi_en = (u8)VAR_56;
 VAR_68->uapsd_acvo_en = (u8)VAR_57;

 VAR_68->ht_enable = (u8)VAR_24;
 VAR_68->bw_mode = (u8)VAR_16;
 VAR_68->ampdu_enable = (u8)VAR_6;
 VAR_68->rx_stbc = (u8)VAR_43;
 VAR_68->ampdu_amsdu = (u8)VAR_5;
 VAR_68->short_gi = (u8)VAR_45;
 VAR_68->ldpc_cap = (u8)VAR_28;
 VAR_68->stbc_cap = (u8)VAR_51;
 VAR_68->beamform_cap = (u8)VAR_10;

 VAR_68->lowrate_two_xmit = (u8)VAR_32;
 VAR_68->rf_config = (u8)VAR_40;
 VAR_68->low_power = (u8)VAR_31;


 VAR_68->wifi_spec = (u8)VAR_63;

 VAR_68->channel_plan = (u8)VAR_18;

 VAR_68->btcoex = (u8)VAR_14;
 VAR_68->bt_iso = (u8)VAR_12;
 VAR_68->bt_sco = (u8)VAR_13;
 VAR_68->bt_ampdu = (u8)VAR_11;
 VAR_68->ant_num = (s8)VAR_7;

 VAR_68->accept_addba_req = 1;

 VAR_68->antdiv_cfg = (u8)VAR_8;
 VAR_68->antdiv_type = (u8)VAR_9;

 VAR_68->hw_wps_pbc = (u8)VAR_25;

 VAR_68->max_roaming_times = (u8)VAR_33;

 VAR_68->enable80211d = (u8)VAR_1;

 FUNC_1(VAR_68->ifname, 16, "%s", VAR_0);

 VAR_68->notch_filter = (u8)VAR_35;

 VAR_68->RegEnableTxPowerLimit = (u8)VAR_53;
 VAR_68->RegEnableTxPowerByRate = (u8)VAR_52;

 VAR_68->RegPowerBase = 14;
 VAR_68->TxBBSwing_2G = 0xFF;
 VAR_68->TxBBSwing_5G = 0xFF;
 VAR_68->bEn_RFE = 1;
 VAR_68->RFE_Type = 64;

 VAR_68->load_phy_file = (u8)VAR_29;
 VAR_68->RegDecryptCustomFile = (u8)VAR_21;
 VAR_68->qos_opt_enable = (u8)VAR_38;

 VAR_68->hiq_filter = (u8)VAR_23;
}
