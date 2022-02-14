
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int ssid; int length; } ;
struct wcn36xx_vif {int is_joining; int sta_assoc; void* bss_index; int dtim_period; TYPE_1__ ssid; int encrypt_type; } ;
struct wcn36xx_sta {int aid; } ;
struct wcn36xx {int conf_mutex; } ;
struct sk_buff {int dummy; } ;
struct ieee80211_vif {scalar_t__ type; int addr; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hw {struct wcn36xx* priv; } ;
struct ieee80211_bss_conf {int dtim_period; int enable_beacon; int bssid; int aid; scalar_t__ assoc; int ssid_len; int ssid; } ;
typedef enum wcn36xx_hal_link_state { ____Placeholder_wcn36xx_hal_link_state } wcn36xx_hal_link_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct wcn36xx*) ;
 int VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (struct wcn36xx*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct ieee80211_hw*,struct ieee80211_vif*,int *,int *) ;
 struct ieee80211_sta* FUNC_4 (struct ieee80211_vif*,int ) ;
 struct sk_buff* FUNC_5 (struct ieee80211_hw*,struct ieee80211_vif*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (int ,char*,int ,int ) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (struct wcn36xx*,struct ieee80211_vif*,struct ieee80211_sta*,int ,int) ;
 int FUNC_14 (struct wcn36xx*,struct ieee80211_vif*,struct ieee80211_sta*) ;
 int FUNC_15 (struct wcn36xx*,struct ieee80211_vif*) ;
 int FUNC_16 (struct wcn36xx*,int ,int ,int ) ;
 int FUNC_17 (struct wcn36xx*,struct ieee80211_vif*,struct sk_buff*,int ,int ) ;
 int FUNC_18 (struct wcn36xx*,int ,int ,int) ;
 int FUNC_19 (struct wcn36xx*,struct ieee80211_vif*,struct sk_buff*) ;
 struct wcn36xx_sta* FUNC_20 (struct ieee80211_sta*) ;
 int FUNC_21 (struct ieee80211_sta*,int ) ;
 struct wcn36xx_vif* FUNC_22 (struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_23(struct ieee80211_hw *VAR_17,
         struct ieee80211_vif *VAR_18,
         struct ieee80211_bss_conf *VAR_19,
         u32 VAR_20)
{
 struct wcn36xx *VAR_21 = VAR_17->priv;
 struct sk_buff *VAR_22 = ((void*)0);
 u16 VAR_23, VAR_24;
 enum wcn36xx_hal_link_state VAR_25;
 struct wcn36xx_vif *VAR_26 = FUNC_22(VAR_18);

 FUNC_10(VAR_9, "mac bss info changed vif %p changed 0x%08x\n",
      VAR_18, VAR_20);

 FUNC_8(&VAR_21->conf_mutex);

 if (VAR_20 & VAR_4) {
  FUNC_10(VAR_9,
       "mac bss changed dtim period %d\n",
       VAR_19->dtim_period);

  VAR_26->dtim_period = VAR_19->dtim_period;
 }

 if (VAR_20 & VAR_5) {
  FUNC_10(VAR_9, "mac bss changed_bssid %pM\n",
       VAR_19->bssid);

  if (!FUNC_6(VAR_19->bssid)) {
   VAR_26->is_joining = 1;
   VAR_26->bss_index = VAR_10;
   FUNC_18(VAR_21, VAR_19->bssid, VAR_18->addr,
      VAR_16);
   FUNC_16(VAR_21, VAR_19->bssid,
      VAR_18->addr, FUNC_1(VAR_21));
   FUNC_13(VAR_21, VAR_18, ((void*)0),
            VAR_19->bssid, 0);
  } else {
   VAR_26->is_joining = 0;
   FUNC_15(VAR_21, VAR_18);
   FUNC_18(VAR_21, VAR_19->bssid, VAR_18->addr,
      VAR_14);
   VAR_26->encrypt_type = VAR_11;
  }
 }

 if (VAR_20 & VAR_6) {
  FUNC_10(VAR_9,
       "mac bss changed ssid\n");
  FUNC_11(VAR_9, "ssid ",
     VAR_19->ssid, VAR_19->ssid_len);

  VAR_26->ssid.length = VAR_19->ssid_len;
  FUNC_7(&VAR_26->ssid.ssid,
         VAR_19->ssid,
         VAR_19->ssid_len);
 }

 if (VAR_20 & VAR_1) {
  VAR_26->is_joining = 0;
  if (VAR_19->assoc) {
   struct ieee80211_sta *VAR_27;
   struct wcn36xx_sta *VAR_28;

   FUNC_10(VAR_9,
        "mac assoc bss %pM vif %pM AID=%d\n",
         VAR_19->bssid,
         VAR_18->addr,
         VAR_19->aid);

   VAR_26->sta_assoc = 1;







   VAR_27 = FUNC_4(VAR_18, VAR_19->bssid);
   if (!VAR_27) {
    FUNC_12("sta %pM is not found\n",
           VAR_19->bssid);
    goto out;
   }
   VAR_28 = FUNC_20(VAR_27);

   FUNC_21(VAR_27, FUNC_0(VAR_21));

   FUNC_18(VAR_21, VAR_19->bssid,
    VAR_18->addr,
    VAR_15);
   FUNC_13(VAR_21, VAR_18, VAR_27,
            VAR_19->bssid,
            1);
   VAR_28->aid = VAR_19->aid;




   FUNC_14(VAR_21, VAR_18, VAR_27);
  } else {
   FUNC_10(VAR_9,
        "disassociated bss %pM vif %pM AID=%d\n",
        VAR_19->bssid,
        VAR_18->addr,
        VAR_19->aid);
   VAR_26->sta_assoc = 0;
   FUNC_18(VAR_21,
      VAR_19->bssid,
      VAR_18->addr,
      VAR_14);
  }
 }

 if (VAR_20 & VAR_0) {
  FUNC_10(VAR_9, "mac bss changed ap probe resp\n");
  VAR_22 = FUNC_5(VAR_17, VAR_18);
  if (!VAR_22) {
   FUNC_12("failed to alloc probereq skb\n");
   goto out;
  }

  FUNC_19(VAR_21, VAR_18, VAR_22);
  FUNC_2(VAR_22);
 }

 if (VAR_20 & VAR_3 ||
     VAR_20 & VAR_2) {
  FUNC_10(VAR_9,
       "mac bss changed beacon enabled %d\n",
       VAR_19->enable_beacon);

  if (VAR_19->enable_beacon) {
   VAR_26->dtim_period = VAR_19->dtim_period;
   VAR_26->bss_index = VAR_10;
   FUNC_13(VAR_21, VAR_18, ((void*)0),
            VAR_18->addr, 0);
   VAR_22 = FUNC_3(VAR_17, VAR_18, &VAR_23,
             &VAR_24);
   if (!VAR_22) {
    FUNC_12("failed to alloc beacon skb\n");
    goto out;
   }
   FUNC_17(VAR_21, VAR_18, VAR_22, VAR_23, 0);
   FUNC_2(VAR_22);

   if (VAR_18->type == VAR_7 ||
       VAR_18->type == VAR_8)
    VAR_25 = VAR_13;
   else
    VAR_25 = VAR_12;

   FUNC_18(VAR_21, VAR_18->addr, VAR_18->addr,
      VAR_25);
  } else {
   FUNC_15(VAR_21, VAR_18);
   FUNC_18(VAR_21, VAR_18->addr, VAR_18->addr,
      VAR_14);
  }
 }
out:

 FUNC_9(&VAR_21->conf_mutex);

 return;
}
