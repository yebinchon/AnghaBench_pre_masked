
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mwl8k_vif {TYPE_2__* wep_key_conf; } ;
struct mwl8k_priv {int ap_fw; } ;
struct ieee80211_vif {int dummy; } ;
struct TYPE_4__ {scalar_t__ ht_supported; } ;
struct ieee80211_sta {TYPE_1__ ht_cap; } ;
struct ieee80211_key_conf {int dummy; } ;
struct ieee80211_hw {struct mwl8k_priv* priv; } ;
struct TYPE_6__ {int peer_id; int is_ampdu_allowed; } ;
struct TYPE_5__ {scalar_t__ enabled; int key; } ;


 struct ieee80211_key_conf* FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (struct ieee80211_sta*) ;
 struct mwl8k_vif* FUNC_2 (struct ieee80211_vif*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct ieee80211_hw*,struct ieee80211_vif*,struct ieee80211_sta*) ;
 int FUNC_4 (struct ieee80211_hw*,struct ieee80211_vif*,struct ieee80211_sta*) ;
 int FUNC_5 (struct ieee80211_hw*,int ,struct ieee80211_vif*,struct ieee80211_sta*,struct ieee80211_key_conf*) ;

__attribute__((used)) static int FUNC_6(struct ieee80211_hw *VAR_2,
    struct ieee80211_vif *VAR_3,
    struct ieee80211_sta *VAR_4)
{
 struct mwl8k_priv *VAR_5 = VAR_2->priv;
 int VAR_6;
 int VAR_7;
 struct mwl8k_vif *VAR_8 = FUNC_2(VAR_3);
 struct ieee80211_key_conf *VAR_9;

 if (!VAR_5->ap_fw) {
  VAR_6 = FUNC_4(VAR_2, VAR_3, VAR_4);
  if (VAR_6 >= 0) {
   FUNC_1(VAR_4)->peer_id = VAR_6;
   if (VAR_4->ht_cap.ht_supported)
    FUNC_1(VAR_4)->is_ampdu_allowed = 1;
   VAR_6 = 0;
  }

 } else {
  VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_4);
 }

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_9 = FUNC_0(VAR_8->wep_key_conf[VAR_7].key);
  if (VAR_8->wep_key_conf[VAR_7].enabled)
   FUNC_5(VAR_2, VAR_1, VAR_3, VAR_4, VAR_9);
 }
 return VAR_6;
}
