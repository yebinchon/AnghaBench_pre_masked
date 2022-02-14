
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_8__ {int qos; int hlid; } ;
struct wl12xx_vif {scalar_t__ bss_type; size_t band; int ip_addr; TYPE_3__ sta; int rate_set; int flags; int basic_rate_set; int basic_rate; int rssi_thold; } ;
struct TYPE_10__ {scalar_t__ forced_ps; } ;
struct TYPE_6__ {TYPE_5__ conn; } ;
struct wl1271 {TYPE_1__ conf; } ;
struct ieee80211_vif {int dummy; } ;
struct TYPE_9__ {int* rx_mask; } ;
struct ieee80211_sta_ht_cap {scalar_t__ ht_supported; TYPE_4__ mcs; } ;
struct ieee80211_sta {int* supp_rates; struct ieee80211_sta_ht_cap ht_cap; } ;
struct TYPE_7__ {scalar_t__ width; } ;
struct ieee80211_bss_conf {int basic_rates; int arp_addr_cnt; scalar_t__ assoc; int qos; int * arp_addr_list; int ht_operation_mode; TYPE_2__ chandef; scalar_t__ ps; scalar_t__ dtim_period; int ibss_joined; int bssid; int cqm_rssi_thold; int cqm_rssi_hyst; int idle; scalar_t__ enable_beacon; } ;
typedef int __be32 ;


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
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (int) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 struct ieee80211_sta* FUNC_1 (struct ieee80211_vif*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (struct wl1271*,struct wl12xx_vif*,int,int ) ;
 int FUNC_8 (struct wl1271*,struct wl12xx_vif*,int) ;
 int FUNC_9 (struct wl1271*,struct wl12xx_vif*,int,int ,int ) ;
 int FUNC_10 (struct wl1271*,struct wl12xx_vif*,int ) ;
 int FUNC_11 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_12 (struct wl1271*,struct ieee80211_vif*,struct ieee80211_bss_conf*,int) ;
 int FUNC_13 (struct wl1271*,struct ieee80211_vif*,struct ieee80211_bss_conf*,int) ;
 int FUNC_14 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_15 (int ,char*,...) ;
 int FUNC_16 (struct wl1271*,struct wl12xx_vif*,int) ;
 int FUNC_17 (struct wl1271*,struct wl12xx_vif*,int ) ;
 int FUNC_18 (struct wl1271*,int,size_t) ;
 int FUNC_19 (struct wl1271*,int ) ;
 int FUNC_20 (char*,...) ;
 int FUNC_21 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_22 (struct wl1271*,struct wl12xx_vif*) ;
 struct wl12xx_vif* FUNC_23 (struct ieee80211_vif*) ;
 int FUNC_24 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_25 (struct wl1271*,struct ieee80211_sta_ht_cap*,int,int ,int ) ;
 int FUNC_26 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_27 (struct wl1271*,struct wl12xx_vif*,struct ieee80211_bss_conf*,int) ;
 int FUNC_28 (struct wl1271*,struct wl12xx_vif*,struct ieee80211_bss_conf*,int) ;
 int FUNC_29 (struct wl1271*,struct wl12xx_vif*) ;

__attribute__((used)) static void FUNC_30(struct wl1271 *VAR_30,
     struct ieee80211_vif *VAR_31,
     struct ieee80211_bss_conf *VAR_32,
     u32 VAR_33)
{
 struct wl12xx_vif *VAR_34 = FUNC_23(VAR_31);
 bool VAR_35 = 0;
 bool VAR_36 = (VAR_34->bss_type == VAR_15);
 bool VAR_37 = 0;
 u32 VAR_38 = 0;
 int VAR_39;
 struct ieee80211_sta *VAR_40;
 bool VAR_41 = 0;
 struct ieee80211_sta_ht_cap VAR_42;

 if (VAR_36) {
  VAR_39 = FUNC_12(VAR_30, VAR_31, VAR_32,
           VAR_33);
  if (VAR_39 < 0)
   goto out;
 }

 if (VAR_33 & VAR_11) {
  if (VAR_32->ibss_joined) {
   FUNC_5(VAR_26, &VAR_34->flags);
   VAR_37 = 1;
  } else {
   FUNC_29(VAR_30, VAR_34);
   FUNC_21(VAR_30, VAR_34);
  }
 }

 if ((VAR_33 & VAR_7) && VAR_37)
  VAR_35 = 1;


 if ((VAR_33 & VAR_4) && VAR_37)
  VAR_35 = 1;

 if ((VAR_33 & VAR_5) && VAR_37) {
  FUNC_15(VAR_18, "ad-hoc beaconing: %s",
        VAR_32->enable_beacon ? "enabled" : "disabled");

  VAR_35 = 1;
 }

 if (VAR_33 & VAR_12 && !VAR_36)
  FUNC_17(VAR_30, VAR_34, VAR_32->idle);

 if (VAR_33 & VAR_9) {
  bool VAR_43 = 0;
  if (VAR_32->cqm_rssi_thold)
   VAR_43 = 1;
  VAR_39 = FUNC_9(VAR_30, VAR_34, VAR_43,
        VAR_32->cqm_rssi_thold,
        VAR_32->cqm_rssi_hyst);
  if (VAR_39 < 0)
   goto out;
  VAR_34->rssi_thold = VAR_32->cqm_rssi_thold;
 }

 if (VAR_33 & (VAR_8 | VAR_10 |
         VAR_3)) {
  FUNC_3();
  VAR_40 = FUNC_1(VAR_31, VAR_32->bssid);
  if (VAR_40) {
   u8 *VAR_44 = VAR_40->ht_cap.mcs.rx_mask;


   VAR_38 = VAR_40->supp_rates[VAR_34->band];
   if (VAR_40->ht_cap.ht_supported)
    VAR_38 |=
     (VAR_44[0] << VAR_20) |
     (VAR_44[1] << VAR_21);
   VAR_42 = VAR_40->ht_cap;
   VAR_41 = 1;
  }

  FUNC_4();
 }

 if (VAR_33 & VAR_8) {
  if (!FUNC_2(VAR_32->bssid)) {
   VAR_39 = FUNC_28(VAR_30, VAR_34, VAR_32,
            VAR_38);
   if (VAR_39 < 0)
    goto out;


   VAR_35 = 1;
  } else {
   VAR_39 = FUNC_24(VAR_30, VAR_34);
   if (VAR_39 < 0)
    goto out;
  }
 }

 if (VAR_33 & VAR_11) {
  FUNC_15(VAR_18, "ibss_joined: %d",
        VAR_32->ibss_joined);

  if (VAR_32->ibss_joined) {
   u32 VAR_45 = VAR_32->basic_rates;
   VAR_34->basic_rate_set =
    FUNC_18(VAR_30, VAR_45,
           VAR_34->band);
   VAR_34->basic_rate =
    FUNC_19(VAR_30,
             VAR_34->basic_rate_set);


   VAR_34->rate_set = VAR_17;
   VAR_39 = FUNC_11(VAR_30, VAR_34);
   if (VAR_39 < 0)
    goto out;
  }
 }

 if ((VAR_33 & VAR_6) && VAR_32->dtim_period) {

  VAR_39 = FUNC_8(VAR_30, VAR_34, 1);
  if (VAR_39 < 0)
   goto out;
 }

 VAR_39 = FUNC_13(VAR_30, VAR_31, VAR_32, VAR_33);
 if (VAR_39 < 0)
  goto out;

 if (VAR_35) {
  VAR_39 = FUNC_26(VAR_30, VAR_34);
  if (VAR_39 < 0) {
   FUNC_20("cmd join failed %d", VAR_39);
   goto out;
  }
 }

 if (VAR_33 & VAR_3) {
  if (VAR_32->assoc) {
   VAR_39 = FUNC_27(VAR_30, VAR_34, VAR_32,
            VAR_38);
   if (VAR_39 < 0)
    goto out;

   if (FUNC_6(VAR_29, &VAR_34->flags))
    FUNC_22(VAR_30, VAR_34);
  } else {
   FUNC_29(VAR_30, VAR_34);
  }
 }

 if (VAR_33 & VAR_13) {
  if ((VAR_32->ps) &&
      FUNC_6(VAR_28, &VAR_34->flags) &&
      !FUNC_6(VAR_27, &VAR_34->flags)) {
   int VAR_46;
   char *VAR_47;

   if (VAR_30->conf.conn.forced_ps) {
    VAR_46 = VAR_25;
    VAR_47 = "forced";
   } else {
    VAR_46 = VAR_24;
    VAR_47 = "auto";
   }

   FUNC_15(VAR_19, "%s ps enabled", VAR_47);

   VAR_39 = FUNC_16(VAR_30, VAR_34, VAR_46);
   if (VAR_39 < 0)
    FUNC_20("enter %s ps failed %d",
            VAR_47, VAR_39);
  } else if (!VAR_32->ps &&
      FUNC_6(VAR_27, &VAR_34->flags)) {
   FUNC_15(VAR_19, "auto ps disabled");

   VAR_39 = FUNC_16(VAR_30, VAR_34,
       VAR_23);
   if (VAR_39 < 0)
    FUNC_20("exit auto ps failed %d", VAR_39);
  }
 }


 if (VAR_41) {
  bool VAR_48 =
   VAR_32->chandef.width != VAR_22;

  VAR_39 = FUNC_25(VAR_30,
          &VAR_42,
          VAR_48,
          VAR_34->rate_set,
          VAR_34->sta.hlid);
  if (VAR_39 < 0) {
   FUNC_20("Set ht cap failed %d", VAR_39);
   goto out;

  }

  if (VAR_48) {
   VAR_39 = FUNC_10(VAR_30, VAR_34,
      VAR_32->ht_operation_mode);
   if (VAR_39 < 0) {
    FUNC_20("Set ht information failed %d",
            VAR_39);
    goto out;
   }
  }
 }


 if ((VAR_33 & VAR_2) ||
     (!VAR_36 && (VAR_33 & VAR_14))) {
  __be32 VAR_49 = VAR_32->arp_addr_list[0];
  VAR_34->sta.qos = VAR_32->qos;
  FUNC_0(VAR_34->bss_type != VAR_16);

  if (VAR_32->arp_addr_cnt == 1 && VAR_32->assoc) {
   VAR_34->ip_addr = VAR_49;






   VAR_39 = FUNC_14(VAR_30, VAR_34);
   if (VAR_39 < 0) {
    FUNC_20("build arp rsp failed: %d", VAR_39);
    goto out;
   }

   VAR_39 = FUNC_7(VAR_30, VAR_34,
    (VAR_0 |
     VAR_1),
    VAR_49);
  } else {
   VAR_34->ip_addr = 0;
   VAR_39 = FUNC_7(VAR_30, VAR_34, 0, VAR_49);
  }

  if (VAR_39 < 0)
   goto out;
 }

out:
 return;
}
