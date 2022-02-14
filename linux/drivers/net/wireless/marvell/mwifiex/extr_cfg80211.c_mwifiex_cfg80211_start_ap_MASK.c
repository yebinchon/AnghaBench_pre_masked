
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_7__ {int ssid_len; int * ssid; } ;
struct mwifiex_uap_bss_param {int sta_ao_timer; int ps_sta_ao_timer; int bcast_ssid_ctl; TYPE_1__ ssid; scalar_t__ dtim_period; scalar_t__ beacon_period; } ;
struct TYPE_8__ {int is_11h_active; } ;
struct mwifiex_private {int bss_cfg; TYPE_3__* adapter; int netdev; TYPE_2__ state_11h; int bss_mode; scalar_t__ ap_11ac_enabled; } ;
struct TYPE_10__ {int width; } ;
struct cfg80211_ap_settings {int ssid_len; int inactivity_timeout; int hidden_ssid; int beacon; TYPE_4__ chandef; struct mwifiex_uap_bss_param* ssid; scalar_t__ dtim_period; scalar_t__ beacon_interval; } ;
struct TYPE_9__ {scalar_t__ is_hw_11ac_capable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct mwifiex_private*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;



 int FUNC_1 (struct wiphy*,TYPE_4__*,int ) ;
 int FUNC_2 (struct mwifiex_uap_bss_param*) ;
 struct mwifiex_uap_bss_param* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,struct mwifiex_uap_bss_param*,int) ;
 scalar_t__ FUNC_5 (struct mwifiex_private*,int) ;
 scalar_t__ FUNC_6 (struct mwifiex_private*,struct mwifiex_uap_bss_param*) ;
 int FUNC_7 (struct mwifiex_private*,int *) ;
 int FUNC_8 (TYPE_3__*,int ,char*) ;
 scalar_t__ FUNC_9 (struct mwifiex_private*) ;
 struct mwifiex_private* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct mwifiex_private*) ;
 int FUNC_12 (struct mwifiex_private*) ;
 int FUNC_13 (struct mwifiex_private*,struct mwifiex_uap_bss_param*,struct cfg80211_ap_settings*) ;
 scalar_t__ FUNC_14 (struct mwifiex_private*,int *) ;
 scalar_t__ FUNC_15 (struct mwifiex_private*,struct mwifiex_uap_bss_param*,struct cfg80211_ap_settings*) ;
 int FUNC_16 (struct mwifiex_uap_bss_param*) ;
 int FUNC_17 (struct mwifiex_private*,struct mwifiex_uap_bss_param*,struct cfg80211_ap_settings*) ;
 int FUNC_18 (struct mwifiex_uap_bss_param*,struct cfg80211_ap_settings*) ;
 int FUNC_19 (struct mwifiex_private*,struct mwifiex_uap_bss_param*,struct cfg80211_ap_settings*) ;
 int FUNC_20 (struct mwifiex_private*,int ,scalar_t__) ;
 int FUNC_21 (struct mwifiex_private*,struct mwifiex_uap_bss_param*,struct cfg80211_ap_settings*) ;
 int FUNC_22 (struct mwifiex_private*,struct mwifiex_uap_bss_param*,TYPE_4__) ;
 int FUNC_23 (int ,TYPE_3__*) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ) ;

__attribute__((used)) static int FUNC_26(struct wiphy *VAR_6,
         struct net_device *VAR_7,
         struct cfg80211_ap_settings *VAR_8)
{
 struct mwifiex_uap_bss_param *VAR_9;
 struct mwifiex_private *VAR_10 = FUNC_10(VAR_7);

 if (FUNC_0(VAR_10) != VAR_5)
  return -1;

 VAR_9 = FUNC_3(sizeof(struct mwifiex_uap_bss_param), VAR_3);
 if (!VAR_9)
  return -VAR_1;

 FUNC_16(VAR_9);

 if (VAR_8->beacon_interval)
  VAR_9->beacon_period = VAR_8->beacon_interval;
 if (VAR_8->dtim_period)
  VAR_9->dtim_period = VAR_8->dtim_period;

 if (VAR_8->ssid && VAR_8->ssid_len) {
  FUNC_4(VAR_9->ssid.ssid, VAR_8->ssid, VAR_8->ssid_len);
  VAR_9->ssid.ssid_len = VAR_8->ssid_len;
 }
 if (VAR_8->inactivity_timeout > 0) {

  VAR_9->sta_ao_timer = 10 * VAR_8->inactivity_timeout;
  VAR_9->ps_sta_ao_timer = 10 * VAR_8->inactivity_timeout;
 }

 switch (VAR_8->hidden_ssid) {
 case 130:
  VAR_9->bcast_ssid_ctl = 1;
  break;
 case 128:
  VAR_9->bcast_ssid_ctl = 0;
  break;
 case 129:
  VAR_9->bcast_ssid_ctl = 2;
  break;
 default:
  FUNC_2(VAR_9);
  return -VAR_0;
 }

 FUNC_22(VAR_10, VAR_9, VAR_8->chandef);
 FUNC_18(VAR_9, VAR_8);

 if (FUNC_15(VAR_10, VAR_9, VAR_8)) {
  FUNC_8(VAR_10->adapter, VAR_2,
       "Failed to parse security parameters!\n");
  goto out;
 }

 FUNC_13(VAR_10, VAR_9, VAR_8);

 if (VAR_10->adapter->is_hw_11ac_capable) {
  FUNC_19(VAR_10, VAR_9, VAR_8);
  FUNC_20(VAR_10, VAR_8->chandef.width,
          VAR_10->ap_11ac_enabled);
 }

 if (VAR_10->ap_11ac_enabled)
  FUNC_11(VAR_10);
 else
  FUNC_12(VAR_10);

 FUNC_21(VAR_10, VAR_9, VAR_8);

 if (FUNC_9(VAR_10))
  FUNC_17(VAR_10, VAR_9, VAR_8);

 if (FUNC_9(VAR_10) &&
     !FUNC_1(VAR_6, &VAR_8->chandef,
        VAR_10->bss_mode)) {
  FUNC_8(VAR_10->adapter, VAR_4,
       "Disable 11h extensions in FW\n");
  if (FUNC_5(VAR_10, 0)) {
   FUNC_8(VAR_10->adapter, VAR_2,
        "Failed to disable 11h extensions!!");
   goto out;
  }
  VAR_10->state_11h.is_11h_active = 0;
 }

 FUNC_7(VAR_10, &VAR_8->beacon);

 if (FUNC_6(VAR_10, VAR_9)) {
  FUNC_8(VAR_10->adapter, VAR_2,
       "Failed to start AP\n");
  goto out;
 }

 if (FUNC_14(VAR_10, &VAR_8->beacon))
  goto out;

 if (!FUNC_24(VAR_10->netdev))
  FUNC_25(VAR_10->netdev);
 FUNC_23(VAR_10->netdev, VAR_10->adapter);

 FUNC_4(&VAR_10->bss_cfg, VAR_9, sizeof(VAR_10->bss_cfg));
 FUNC_2(VAR_9);
 return 0;

out:
 FUNC_2(VAR_9);
 return -1;
}
