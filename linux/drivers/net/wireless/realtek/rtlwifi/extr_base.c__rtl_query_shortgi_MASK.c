
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct rtl_tcb_desc {int use_shortgi; } ;
struct rtl_mac {scalar_t__ opmode; int bw_40; int bw_80; } ;
struct TYPE_6__ {TYPE_1__* rates; } ;
struct ieee80211_tx_info {TYPE_2__ control; } ;
struct TYPE_8__ {int cap; int vht_supported; } ;
struct TYPE_7__ {int cap; int ht_supported; } ;
struct ieee80211_sta {TYPE_4__ vht_cap; TYPE_3__ ht_cap; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 struct rtl_mac* FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_9,
          struct ieee80211_sta *VAR_10,
          struct rtl_tcb_desc *VAR_11,
          struct ieee80211_tx_info *VAR_12)
{
 struct rtl_mac *VAR_13 = FUNC_0(FUNC_1(VAR_9));
 u8 VAR_14 = VAR_12->control.rates[0].flags;
 u8 VAR_15 = 0, VAR_16 = 0, VAR_17 = 0;
 u8 VAR_18 = 0, VAR_19 = 0;

 VAR_11->use_shortgi = 0;

 if (VAR_10 == ((void*)0))
  return;

 VAR_15 = VAR_10->ht_cap.cap & VAR_1;
 VAR_16 = VAR_10->ht_cap.cap & VAR_0;
 VAR_18 = VAR_10->vht_cap.cap & VAR_4;

 if ((!VAR_10->ht_cap.ht_supported) && (!VAR_10->vht_cap.vht_supported))
  return;

 if (!VAR_15 && !VAR_16)
  return;

 if (VAR_13->opmode == VAR_8) {
  VAR_17 = VAR_13->bw_40;
  VAR_19 = VAR_13->bw_80;
 } else if (VAR_13->opmode == VAR_6 ||
   VAR_13->opmode == VAR_5 ||
   VAR_13->opmode == VAR_7) {
  VAR_17 = VAR_10->ht_cap.cap & VAR_2;
  VAR_19 = VAR_10->vht_cap.vht_supported;
 }

 if (VAR_19) {
  if (VAR_18)
   VAR_11->use_shortgi = 1;
  else
   VAR_11->use_shortgi = 0;
 } else {
  if (VAR_17 && VAR_15)
   VAR_11->use_shortgi = 1;
  else if (!VAR_17 && VAR_16)
   VAR_11->use_shortgi = 1;
 }

 if (!(VAR_14 & VAR_3))
  VAR_11->use_shortgi = 0;
}
