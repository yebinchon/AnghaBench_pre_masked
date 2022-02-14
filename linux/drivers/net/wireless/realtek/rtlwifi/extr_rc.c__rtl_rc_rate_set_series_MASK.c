
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct rtl_sta_info {scalar_t__ wireless_mode; } ;
struct rtl_priv {int dummy; } ;
struct rtl_mac {scalar_t__ opmode; scalar_t__ bw_40; scalar_t__ bw_80; } ;
struct ieee80211_tx_rate_control {scalar_t__ short_preamble; } ;
struct ieee80211_tx_rate {int count; int idx; int flags; } ;
struct TYPE_4__ {int cap; scalar_t__ vht_supported; } ;
struct TYPE_3__ {int cap; scalar_t__ ht_supported; } ;
struct ieee80211_sta {TYPE_2__ vht_cap; TYPE_1__ ht_cap; scalar_t__ drv_priv; } ;
typedef int s8 ;


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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 struct rtl_mac* FUNC_0 (struct rtl_priv*) ;

__attribute__((used)) static void FUNC_1(struct rtl_priv *VAR_17,
        struct ieee80211_sta *VAR_18,
        struct ieee80211_tx_rate *VAR_19,
        struct ieee80211_tx_rate_control *VAR_20,
        u8 VAR_21, s8 VAR_22, int VAR_23,
        bool VAR_24)
{
 struct rtl_mac *VAR_25 = FUNC_0(VAR_17);
 struct rtl_sta_info *VAR_26 = ((void*)0);
 u16 VAR_27 = 0;
 u8 VAR_28 = 0, VAR_29 = 0, VAR_30 = 0;

 if (VAR_18) {
  VAR_28 = VAR_18->ht_cap.cap & VAR_0;
  VAR_29 = VAR_18->ht_cap.cap & VAR_1;
  VAR_30 = VAR_18->vht_cap.cap & VAR_9;
  VAR_26 = (struct rtl_sta_info *)VAR_18->drv_priv;
  VAR_27 = VAR_26->wireless_mode;
 }
 VAR_19->count = VAR_21;
 VAR_19->idx = VAR_22 >= 0x00 ? VAR_22 : 0x00;

 if (!VAR_24) {
  if (VAR_20->short_preamble)
   VAR_19->flags |= VAR_7;
  if (VAR_25->opmode == VAR_11 ||
   VAR_25->opmode == VAR_10) {
   if (VAR_18 && (VAR_18->ht_cap.cap &
        VAR_2))
    VAR_19->flags |= VAR_3;
   if (VAR_18 && VAR_18->vht_cap.vht_supported)
    VAR_19->flags |= VAR_4;
  } else {
   if (VAR_25->bw_80)
    VAR_19->flags |= VAR_4;
   else if (VAR_25->bw_40)
    VAR_19->flags |= VAR_3;
  }

  if (VAR_28 || VAR_29 || VAR_30)
   VAR_19->flags |= VAR_6;
  if (VAR_18 && VAR_18->ht_cap.ht_supported &&
      (VAR_27 == VAR_16 ||
       VAR_27 == VAR_15))
   VAR_19->flags |= VAR_5;
  if (VAR_18 && VAR_18->vht_cap.vht_supported &&
      (VAR_27 == VAR_13 ||
       VAR_27 == VAR_12 ||
       VAR_27 == VAR_14))
   VAR_19->flags |= VAR_8;
 }
}
