
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mwifiex_uap_bss_param {int vht_cap; } ;
struct mwifiex_private {int ap_11ac_enabled; } ;
struct ieee80211_vht_cap {int dummy; } ;
struct TYPE_2__ {int tail_len; int tail; } ;
struct cfg80211_ap_settings {TYPE_1__ beacon; } ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *,int const*,int) ;

void FUNC_2(struct mwifiex_private *VAR_1,
       struct mwifiex_uap_bss_param *VAR_2,
       struct cfg80211_ap_settings *VAR_3)
{
 const u8 *VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_3->beacon.tail,
      VAR_3->beacon.tail_len);
 if (VAR_4) {
  FUNC_1(&VAR_2->vht_cap, VAR_4 + 2,
         sizeof(struct ieee80211_vht_cap));
  VAR_1->ap_11ac_enabled = 1;
 } else {
  VAR_1->ap_11ac_enabled = 0;
 }

 return;
}
