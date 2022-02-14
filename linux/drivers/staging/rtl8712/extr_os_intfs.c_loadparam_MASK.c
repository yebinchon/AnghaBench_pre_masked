
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef void* u16 ;
struct TYPE_2__ {int SsidLength; int Ssid; } ;
struct registry_priv {void* wifi_test; void* low_power; void* rf_config; void* ampdu_enable; void* cbw40_enable; void* ht_enable; void* uapsd_acvo_en; void* uapsd_acvi_en; void* uapsd_acbe_en; void* uapsd_acbk_en; void* uapsd_max_sp; void* uapsd_enable; void* wmm_enable; void* software_decrypt; void* software_encrypt; void* mp_mode; void* ack_policy; void* busy_thresh; void* short_retry_lmt; void* long_retry_lmt; void* radio_enable; void* power_mgnt; void* smart_ps; void* soft_ap; void* adhoc_tx_pwr; void* scan_mode; void* preamble; void* frag_thresh; void* vcs_type; void* vrtl_carrier_sense; void* wireless_mode; void* channel; TYPE_1__ ssid; void* network_mode; void* hci; void* lbkmode; void* rfintfs; void* chip_version; } ;
struct net_device {int dummy; } ;
struct _adapter {struct registry_priv registrypriv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
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

__attribute__((used)) static void FUNC_1(struct _adapter *VAR_39, struct net_device *VAR_40)
{
 struct registry_priv *VAR_41 = &VAR_39->registrypriv;

 VAR_41->chip_version = (u8)VAR_6;
 VAR_41->rfintfs = (u8)VAR_21;
 VAR_41->lbkmode = (u8)VAR_11;
 VAR_41->hci = (u8)VAR_8;
 VAR_41->network_mode = (u8)VAR_15;
 FUNC_0(VAR_41->ssid.Ssid, "ANY", 3);
 VAR_41->ssid.SsidLength = 3;
 VAR_41->channel = (u8)VAR_5;
 VAR_41->wireless_mode = (u8)VAR_37;
 VAR_41->vrtl_carrier_sense = (u8)VAR_35;
 VAR_41->vcs_type = (u8)VAR_34;
 VAR_41->frag_thresh = (u16)VAR_7;
 VAR_41->preamble = (u8)VAR_17;
 VAR_41->scan_mode = (u8)VAR_22;
 VAR_41->adhoc_tx_pwr = (u8)VAR_1;
 VAR_41->soft_ap = (u8)VAR_25;
 VAR_41->smart_ps = (u8)VAR_24;
 VAR_41->power_mgnt = (u8)VAR_16;
 VAR_41->radio_enable = (u8)VAR_19;
 VAR_41->long_retry_lmt = (u8)VAR_12;
 VAR_41->short_retry_lmt = (u8)VAR_23;
 VAR_41->busy_thresh = (u16)VAR_3;
 VAR_41->ack_policy = (u8)VAR_0;
 VAR_41->mp_mode = (u8)VAR_14;
 VAR_41->software_encrypt = (u8)VAR_27;
 VAR_41->software_decrypt = (u8)VAR_26;

 VAR_41->wmm_enable = (u8)VAR_38;
 VAR_41->uapsd_enable = (u8)VAR_32;
 VAR_41->uapsd_max_sp = (u8)VAR_33;
 VAR_41->uapsd_acbk_en = (u8)VAR_29;
 VAR_41->uapsd_acbe_en = (u8)VAR_28;
 VAR_41->uapsd_acvi_en = (u8)VAR_30;
 VAR_41->uapsd_acvo_en = (u8)VAR_31;
 VAR_41->ht_enable = (u8)VAR_9;
 VAR_41->cbw40_enable = (u8)VAR_4;
 VAR_41->ampdu_enable = (u8)VAR_2;
 VAR_41->rf_config = (u8)VAR_20;
 VAR_41->low_power = (u8)VAR_13;
 VAR_41->wifi_test = (u8)VAR_36;
 VAR_18 = VAR_10;
}
