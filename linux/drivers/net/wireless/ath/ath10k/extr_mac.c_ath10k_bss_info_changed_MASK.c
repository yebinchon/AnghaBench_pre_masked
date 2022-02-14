
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_19__ {int* mcast_rate; int basic_rates; int ps; } ;
struct ieee80211_vif {scalar_t__ type; TYPE_6__ bss_conf; int addr; scalar_t__ drv_priv; } ;
struct ieee80211_supported_band {TYPE_7__* bitrates; } ;
struct ieee80211_hw {struct ath10k* priv; } ;
struct ieee80211_bss_conf {int beacon_int; size_t dtim_period; int ssid_len; scalar_t__ ftm_responder; size_t txpower; scalar_t__ assoc; scalar_t__ use_short_preamble; scalar_t__ use_short_slot; int use_cts_prot; int bssid; int hidden_ssid; int ssid; } ;
struct cfg80211_chan_def {TYPE_5__* chan; } ;
struct TYPE_14__ {int ssid_len; int hidden_ssid; int ssid; } ;
struct TYPE_15__ {TYPE_1__ ap; } ;
struct ath10k_vif {int beacon_interval; size_t dtim_period; scalar_t__ ftm_responder; size_t txpower; int vdev_id; struct ieee80211_vif* vif; int ps; int use_cts_prot; int bssid; TYPE_2__ u; } ;
struct TYPE_12__ {TYPE_8__* vdev_param; int svc_map; TYPE_9__* pdev_param; } ;
struct ath10k {int phy_capability; int conf_mutex; TYPE_10__ wmi; TYPE_4__* hw; scalar_t__ monitor_started; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_22__ {int beacon_tx_mode; } ;
struct TYPE_21__ {int beacon_interval; int dtim_period; int rtt_responder_role; int slot_time; int preamble; int mcast_data_rate; int bcast_data_rate; int mgmt_rate; } ;
struct TYPE_20__ {int bitrate; } ;
struct TYPE_18__ {int band; } ;
struct TYPE_17__ {TYPE_3__* wiphy; } ;
struct TYPE_16__ {struct ieee80211_supported_band** bands; } ;
struct TYPE_13__ {int bitrate; int hw_value; } ;


 int VAR_0 ;
 size_t FUNC_0 (int,int ,int) ;
 scalar_t__ VAR_1 ;
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
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_1 (struct ieee80211_hw*,struct ieee80211_vif*,struct ieee80211_bss_conf*) ;
 int FUNC_2 (struct ieee80211_hw*,struct ieee80211_vif*) ;
 int FUNC_3 (struct ath10k*) ;
 int FUNC_4 (struct ath10k_vif*,struct ieee80211_bss_conf*) ;
 int FUNC_5 (struct ath10k_vif*,struct ieee80211_bss_conf*,int ) ;
 int FUNC_6 (struct ath10k*,int ,char*,int ,...) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (struct ath10k_vif*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct ath10k_vif*) ;
 int FUNC_11 (struct ath10k_vif*) ;
 int FUNC_12 (struct ath10k_vif*) ;
 int FUNC_13 (struct ath10k*) ;
 scalar_t__ FUNC_14 (struct ieee80211_vif*,struct cfg80211_chan_def*) ;
 int FUNC_15 (struct ath10k*) ;
 int FUNC_16 (struct ath10k*) ;
 int FUNC_17 (struct ath10k_vif*) ;
 int FUNC_18 (struct ath10k*,char*,int,...) ;
 TYPE_11__* VAR_29 ;
 int FUNC_19 (struct ath10k*,int,int ) ;
 int FUNC_20 (struct ath10k*,int ,int,int) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ) ;
 scalar_t__ FUNC_23 (struct ieee80211_vif*) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ,int ,int) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int ,char*,int) ;
 scalar_t__ FUNC_29 (int ,int ) ;

__attribute__((used)) static void FUNC_30(struct ieee80211_hw *VAR_30,
        struct ieee80211_vif *VAR_31,
        struct ieee80211_bss_conf *VAR_32,
        u32 VAR_33)
{
 struct ath10k *VAR_34 = VAR_30->priv;
 struct ath10k_vif *VAR_35 = (void *)VAR_31->drv_priv;
 struct cfg80211_chan_def VAR_36;
 u32 VAR_37, VAR_38, VAR_39, VAR_40;
 u16 VAR_41, VAR_42;
 u8 VAR_43, VAR_44, VAR_45;
 int VAR_46 = 0, VAR_47, VAR_48;
 enum nl80211_band VAR_49;
 const struct ieee80211_supported_band *VAR_50;

 FUNC_26(&VAR_34->conf_mutex);

 if (VAR_33 & VAR_14)
  FUNC_5(VAR_35, VAR_32, VAR_31->addr);

 if (VAR_33 & VAR_8) {
  VAR_35->beacon_interval = VAR_32->beacon_int;
  VAR_37 = VAR_34->wmi.vdev_param->beacon_interval;
  VAR_46 = FUNC_20(VAR_34, VAR_35->vdev_id, VAR_37,
      VAR_35->beacon_interval);
  FUNC_6(VAR_34, VAR_0,
      "mac vdev %d beacon_interval %d\n",
      VAR_35->vdev_id, VAR_35->beacon_interval);

  if (VAR_46)
   FUNC_18(VAR_34, "failed to set beacon interval for vdev %d: %i\n",
        VAR_35->vdev_id, VAR_46);
 }

 if (VAR_33 & VAR_5) {
  FUNC_6(VAR_34, VAR_0,
      "vdev %d set beacon tx mode to staggered\n",
      VAR_35->vdev_id);

  VAR_38 = VAR_34->wmi.pdev_param->beacon_tx_mode;
  VAR_46 = FUNC_19(VAR_34, VAR_38,
      VAR_21);
  if (VAR_46)
   FUNC_18(VAR_34, "failed to set beacon mode for vdev %d: %i\n",
        VAR_35->vdev_id, VAR_46);

  VAR_46 = FUNC_11(VAR_35);
  if (VAR_46)
   FUNC_18(VAR_34, "failed to update beacon template: %d\n",
        VAR_46);

  if (FUNC_23(VAR_31)) {

   FUNC_28(VAR_35->u.ap.ssid, "mesh",
    sizeof(VAR_35->u.ap.ssid));
   VAR_35->u.ap.ssid_len = 4;
  }
 }

 if (VAR_33 & VAR_2) {
  VAR_46 = FUNC_12(VAR_35);
  if (VAR_46)
   FUNC_18(VAR_34, "failed to setup probe resp template on vdev %i: %d\n",
        VAR_35->vdev_id, VAR_46);
 }

 if (VAR_33 & (VAR_7 | VAR_5)) {
  VAR_35->dtim_period = VAR_32->dtim_period;

  FUNC_6(VAR_34, VAR_0,
      "mac vdev %d dtim_period %d\n",
      VAR_35->vdev_id, VAR_35->dtim_period);

  VAR_37 = VAR_34->wmi.vdev_param->dtim_period;
  VAR_46 = FUNC_20(VAR_34, VAR_35->vdev_id, VAR_37,
      VAR_35->dtim_period);
  if (VAR_46)
   FUNC_18(VAR_34, "failed to set dtim period for vdev %d: %i\n",
        VAR_35->vdev_id, VAR_46);
 }

 if (VAR_33 & VAR_17 &&
     VAR_31->type == VAR_19) {
  VAR_35->u.ap.ssid_len = VAR_32->ssid_len;
  if (VAR_32->ssid_len)
   FUNC_25(VAR_35->u.ap.ssid, VAR_32->ssid, VAR_32->ssid_len);
  VAR_35->u.ap.hidden_ssid = VAR_32->hidden_ssid;
 }

 if (VAR_33 & VAR_9 && !FUNC_24(VAR_32->bssid))
  FUNC_21(VAR_35->bssid, VAR_32->bssid);

 if (VAR_33 & VAR_13 &&
     VAR_35->ftm_responder != VAR_32->ftm_responder &&
     FUNC_29(VAR_24, VAR_34->wmi.svc_map)) {
  VAR_35->ftm_responder = VAR_32->ftm_responder;

  VAR_37 = VAR_34->wmi.vdev_param->rtt_responder_role;
  VAR_46 = FUNC_20(VAR_34, VAR_35->vdev_id, VAR_37,
      VAR_35->ftm_responder);

  FUNC_6(VAR_34, VAR_0,
      "mac vdev %d ftm_responder %d:ret %d\n",
      VAR_35->vdev_id, VAR_35->ftm_responder, VAR_46);
 }

 if (VAR_33 & VAR_6)
  FUNC_4(VAR_35, VAR_32);

 if (VAR_33 & VAR_10) {
  VAR_35->use_cts_prot = VAR_32->use_cts_prot;

  VAR_46 = FUNC_17(VAR_35);
  if (VAR_46)
   FUNC_18(VAR_34, "failed to recalculate rts/cts prot for vdev %d: %d\n",
        VAR_35->vdev_id, VAR_46);

  if (FUNC_8(VAR_35)) {
   VAR_46 = FUNC_10(VAR_35);
   if (VAR_46)
    FUNC_18(VAR_34, "failed to set cts protection for vdev %d: %d\n",
         VAR_35->vdev_id, VAR_46);
  }
 }

 if (VAR_33 & VAR_12) {
  if (VAR_32->use_short_slot)
   VAR_39 = VAR_28;

  else
   VAR_39 = VAR_27;

  FUNC_6(VAR_34, VAR_0, "mac vdev %d slot_time %d\n",
      VAR_35->vdev_id, VAR_39);

  VAR_37 = VAR_34->wmi.vdev_param->slot_time;
  VAR_46 = FUNC_20(VAR_34, VAR_35->vdev_id, VAR_37,
      VAR_39);
  if (VAR_46)
   FUNC_18(VAR_34, "failed to set erp slot for vdev %d: %i\n",
        VAR_35->vdev_id, VAR_46);
 }

 if (VAR_33 & VAR_11) {
  if (VAR_32->use_short_preamble)
   VAR_40 = VAR_26;
  else
   VAR_40 = VAR_25;

  FUNC_6(VAR_34, VAR_0,
      "mac vdev %d preamble %dn",
      VAR_35->vdev_id, VAR_40);

  VAR_37 = VAR_34->wmi.vdev_param->preamble;
  VAR_46 = FUNC_20(VAR_34, VAR_35->vdev_id, VAR_37,
      VAR_40);
  if (VAR_46)
   FUNC_18(VAR_34, "failed to set preamble for vdev %d: %i\n",
        VAR_35->vdev_id, VAR_46);
 }

 if (VAR_33 & VAR_3) {
  if (VAR_32->assoc) {




   if (VAR_34->monitor_started)
    FUNC_16(VAR_34);
   FUNC_1(VAR_30, VAR_31, VAR_32);
   FUNC_15(VAR_34);
  } else {
   FUNC_2(VAR_30, VAR_31);
  }
 }

 if (VAR_33 & VAR_18) {
  FUNC_6(VAR_34, VAR_0, "mac vdev_id %i txpower %d\n",
      VAR_35->vdev_id, VAR_32->txpower);

  VAR_35->txpower = VAR_32->txpower;
  VAR_46 = FUNC_13(VAR_34);
  if (VAR_46)
   FUNC_18(VAR_34, "failed to recalc tx power: %d\n", VAR_46);
 }

 if (VAR_33 & VAR_16) {
  VAR_35->ps = VAR_31->bss_conf.ps;

  VAR_46 = FUNC_3(VAR_34);
  if (VAR_46)
   FUNC_18(VAR_34, "failed to setup ps on vdev %i: %d\n",
        VAR_35->vdev_id, VAR_46);
 }

 if (VAR_33 & VAR_15 &&
     !FUNC_14(VAR_35->vif, &VAR_36)) {
  VAR_49 = VAR_36.chan->band;
  VAR_48 = VAR_31->bss_conf.mcast_rate[VAR_49];
  if (VAR_48 > 0)
   VAR_45 = VAR_48 - 1;
  else
   VAR_45 = FUNC_22(VAR_31->bss_conf.basic_rates) - 1;

  if (VAR_34->phy_capability & VAR_20)
   VAR_45 += VAR_1;

  VAR_41 = VAR_29[VAR_45].bitrate;
  VAR_42 = VAR_29[VAR_45].hw_value;
  if (FUNC_7(VAR_41))
   VAR_40 = VAR_22;
  else
   VAR_40 = VAR_23;

  VAR_43 = FUNC_0(VAR_42, 0, VAR_40);

  FUNC_6(VAR_34, VAR_0,
      "mac vdev %d mcast_rate %x\n",
      VAR_35->vdev_id, VAR_43);

  VAR_37 = VAR_34->wmi.vdev_param->mcast_data_rate;
  VAR_46 = FUNC_20(VAR_34, VAR_35->vdev_id,
      VAR_37, VAR_43);
  if (VAR_46)
   FUNC_18(VAR_34,
        "failed to set mcast rate on vdev %i: %d\n",
        VAR_35->vdev_id, VAR_46);

  VAR_37 = VAR_34->wmi.vdev_param->bcast_data_rate;
  VAR_46 = FUNC_20(VAR_34, VAR_35->vdev_id,
      VAR_37, VAR_43);
  if (VAR_46)
   FUNC_18(VAR_34,
        "failed to set bcast rate on vdev %i: %d\n",
        VAR_35->vdev_id, VAR_46);
 }

 if (VAR_33 & VAR_4) {
  if (FUNC_14(VAR_31, &VAR_36)) {
   FUNC_27(&VAR_34->conf_mutex);
   return;
  }

  VAR_50 = VAR_34->hw->wiphy->bands[VAR_36.chan->band];
  VAR_44 = FUNC_22(VAR_31->bss_conf.basic_rates) - 1;
  VAR_41 = VAR_50->bitrates[VAR_44].bitrate;

  VAR_47 = FUNC_9(VAR_41);
  if (VAR_47 < 0) {
   FUNC_18(VAR_34, "bitrate not supported %d\n", VAR_41);
   FUNC_27(&VAR_34->conf_mutex);
   return;
  }

  VAR_37 = VAR_34->wmi.vdev_param->mgmt_rate;
  VAR_46 = FUNC_20(VAR_34, VAR_35->vdev_id, VAR_37,
      VAR_47);
  if (VAR_46)
   FUNC_18(VAR_34, "failed to set mgmt tx rate %d\n", VAR_46);
 }

 FUNC_27(&VAR_34->conf_mutex);
}
