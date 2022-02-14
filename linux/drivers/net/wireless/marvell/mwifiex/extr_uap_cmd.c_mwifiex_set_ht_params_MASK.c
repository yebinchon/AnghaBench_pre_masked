
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {int ampdu_params_info; int cap_info; } ;
struct mwifiex_uap_bss_param {TYPE_3__ ht_cap; } ;
struct mwifiex_private {int ap_11n_enabled; TYPE_2__* adapter; } ;
struct ieee80211_ht_cap {int dummy; } ;
struct TYPE_5__ {int tail_len; int tail; } ;
struct cfg80211_ap_settings {TYPE_1__ beacon; } ;
struct TYPE_6__ {int fw_cap_info; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int const*,int) ;
 int FUNC_4 (TYPE_3__*,int ,int) ;

void
FUNC_5(struct mwifiex_private *VAR_3,
        struct mwifiex_uap_bss_param *VAR_4,
        struct cfg80211_ap_settings *VAR_5)
{
 const u8 *VAR_6;

 if (!FUNC_0(VAR_3->adapter->fw_cap_info))
  return;

 VAR_6 = FUNC_1(VAR_2, VAR_5->beacon.tail,
     VAR_5->beacon.tail_len);
 if (VAR_6) {
  FUNC_3(&VAR_4->ht_cap, VAR_6 + 2,
         sizeof(struct ieee80211_ht_cap));
  VAR_3->ap_11n_enabled = 1;
 } else {
  FUNC_4(&VAR_4->ht_cap, 0, sizeof(struct ieee80211_ht_cap));
  VAR_4->ht_cap.cap_info = FUNC_2(VAR_1);
  VAR_4->ht_cap.ampdu_params_info = VAR_0;
 }

 return;
}
