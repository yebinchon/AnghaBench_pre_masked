
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_rxon_context {int dummy; } ;
struct iwl_priv {int dummy; } ;
struct ieee80211_sta_ht_cap {scalar_t__ ampdu_density; scalar_t__ ampdu_factor; int ht_supported; } ;
struct ieee80211_sta {int smps_mode; int addr; struct ieee80211_sta_ht_cap ht_cap; } ;
typedef int __le32 ;





 int FUNC_0 (struct iwl_priv*,char*,int ,char*) ;
 int FUNC_1 (struct iwl_priv*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct iwl_priv*,struct iwl_rxon_context*,struct ieee80211_sta*) ;

__attribute__((used)) static void FUNC_4(struct iwl_priv *VAR_7,
      struct ieee80211_sta *VAR_8,
      struct iwl_rxon_context *VAR_9,
      __le32 *VAR_10, __le32 *VAR_11)
{
 struct ieee80211_sta_ht_cap *VAR_12 = &VAR_8->ht_cap;

 *VAR_11 = VAR_6 |
  VAR_5 |
  VAR_2 |
  VAR_3 |
  VAR_0;
 *VAR_10 = 0;

 if (!VAR_8 || !VAR_12->ht_supported)
  return;

 FUNC_0(VAR_7, "STA %pM SM PS mode: %s\n",
   VAR_8->addr,
   (VAR_8->smps_mode == 128) ?
   "static" :
   (VAR_8->smps_mode == 130) ?
   "dynamic" : "disabled");

 switch (VAR_8->smps_mode) {
 case 128:
  *VAR_10 |= VAR_5;
  break;
 case 130:
  *VAR_10 |= VAR_6;
  break;
 case 129:
  break;
 default:
  FUNC_1(VAR_7, "Invalid MIMO PS mode %d\n", VAR_8->smps_mode);
  break;
 }

 *VAR_10 |= FUNC_2(
  (u32)VAR_12->ampdu_factor << VAR_4);

 *VAR_10 |= FUNC_2(
  (u32)VAR_12->ampdu_density << VAR_1);

 if (FUNC_3(VAR_7, VAR_9, VAR_8))
  *VAR_10 |= VAR_2;
}
