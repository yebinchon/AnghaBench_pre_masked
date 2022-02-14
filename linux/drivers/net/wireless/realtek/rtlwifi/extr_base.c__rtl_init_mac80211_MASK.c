
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct rtl_sta_info {int dummy; } ;
struct TYPE_6__ {int pattern_max_len; int pattern_min_len; int n_patterns; int flags; } ;
struct TYPE_4__ {int wo_wlan_mode; scalar_t__ fwctrl_lps; scalar_t__ swctrl_lps; } ;
struct rtl_priv {TYPE_3__ wowlan; TYPE_1__ psc; } ;
struct rtl_mac {struct ieee80211_supported_band* bands; } ;
struct rtl_hal {scalar_t__ macphymode; scalar_t__ bandset; scalar_t__ current_bandtype; } ;
struct rtl_efuse {int* dev_addr; } ;
struct ieee80211_supported_band {int vht_cap; int ht_cap; } ;
struct ieee80211_hw {int sta_data_size; TYPE_2__* wiphy; int max_rate_tries; int max_listen_interval; int extra_tx_headroom; int queues; } ;
struct TYPE_5__ {int interface_modes; int rts_threshold; TYPE_3__* wowlan; int flags; struct ieee80211_supported_band** bands; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
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
 int FUNC_1 (struct ieee80211_hw*,int*) ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_2 (struct ieee80211_hw*,int *) ;
 int FUNC_3 (struct ieee80211_hw*,int *) ;
 int FUNC_4 (int*,int) ;
 int FUNC_5 (struct ieee80211_hw*,int ) ;
 scalar_t__ FUNC_6 (int*) ;
 int FUNC_7 (struct ieee80211_supported_band*,int *,int) ;
 int FUNC_8 (char*,scalar_t__) ;
 int VAR_35 ;
 int VAR_36 ;
 struct rtl_efuse* FUNC_9 (struct rtl_priv*) ;
 struct rtl_hal* FUNC_10 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_11 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_12 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_13(struct ieee80211_hw *VAR_37)
{
 struct rtl_priv *VAR_38 = FUNC_12(VAR_37);
 struct rtl_hal *VAR_39 = FUNC_10(VAR_38);
 struct rtl_mac *VAR_40 = FUNC_11(FUNC_12(VAR_37));
 struct rtl_efuse *VAR_41 = FUNC_9(FUNC_12(VAR_37));
 struct ieee80211_supported_band *VAR_42;

 if (VAR_39->macphymode == VAR_25 &&
     VAR_39->bandset == VAR_4) {


  VAR_42 = &(VAR_40->bands[VAR_12]);



  FUNC_7(&(VAR_40->bands[VAR_12]), &VAR_35,
    sizeof(struct ieee80211_supported_band));


  FUNC_2(VAR_37, &VAR_42->ht_cap);


  VAR_37->wiphy->bands[VAR_12] = VAR_42;



  VAR_42 = &(VAR_40->bands[VAR_13]);



  FUNC_7(&(VAR_40->bands[VAR_13]), &VAR_36,
    sizeof(struct ieee80211_supported_band));


  FUNC_2(VAR_37, &VAR_42->ht_cap);

  FUNC_3(VAR_37, &VAR_42->vht_cap);

  VAR_37->wiphy->bands[VAR_13] = VAR_42;
 } else {
  if (VAR_39->current_bandtype == VAR_2) {

   VAR_42 = &(VAR_40->bands[VAR_12]);



   FUNC_7(&(VAR_40->bands[VAR_12]),
          &VAR_35,
          sizeof(struct ieee80211_supported_band));


   FUNC_2(VAR_37, &VAR_42->ht_cap);


   VAR_37->wiphy->bands[VAR_12] = VAR_42;
  } else if (VAR_39->current_bandtype == VAR_3) {

   VAR_42 = &(VAR_40->bands[VAR_13]);



   FUNC_7(&(VAR_40->bands[VAR_13]),
          &VAR_36,
          sizeof(struct ieee80211_supported_band));


   FUNC_2(VAR_37, &VAR_42->ht_cap);

   FUNC_3(VAR_37, &VAR_42->vht_cap);

   VAR_37->wiphy->bands[VAR_13] = VAR_42;
  } else {
   FUNC_8("Err BAND %d\n",
          VAR_39->current_bandtype);
  }
 }

 FUNC_5(VAR_37, VAR_24);
 FUNC_5(VAR_37, VAR_23);
 FUNC_5(VAR_37, VAR_1);
 FUNC_5(VAR_37, VAR_10);
 FUNC_5(VAR_37, VAR_21);
 FUNC_5(VAR_37, VAR_26);
 FUNC_5(VAR_37, VAR_29);


 if (VAR_38->psc.swctrl_lps) {
  FUNC_5(VAR_37, VAR_28);
  FUNC_5(VAR_37, VAR_20);
 }
 if (VAR_38->psc.fwctrl_lps) {
  FUNC_5(VAR_37, VAR_28);
  FUNC_5(VAR_37, VAR_27);
 }
 VAR_37->wiphy->interface_modes =
     FUNC_0(VAR_15) |
     FUNC_0(VAR_19) |
     FUNC_0(VAR_14) |
     FUNC_0(VAR_16) |
     FUNC_0(VAR_17) |
     FUNC_0(VAR_18);
 VAR_37->wiphy->flags |= VAR_33;

 VAR_37->wiphy->flags |= VAR_32;

 VAR_37->wiphy->rts_threshold = 2347;

 VAR_37->queues = VAR_0;
 VAR_37->extra_tx_headroom = VAR_22;


 VAR_37->max_listen_interval = VAR_6;
 VAR_37->max_rate_tries = VAR_7;

 VAR_37->sta_data_size = sizeof(struct rtl_sta_info);
 if (FUNC_6(VAR_41->dev_addr)) {
  FUNC_1(VAR_37, VAR_41->dev_addr);
 } else {
  u8 VAR_43[] = { 0x00, 0xe0, 0x4c, 0x81, 0x92, 0x00 };

  FUNC_4((VAR_43 + (VAR_5 - 1)), 1);
  FUNC_1(VAR_37, VAR_43);
 }
}
