
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct adm8211_priv* priv; } ;
struct ieee80211_bss_conf {int bssid; } ;
struct adm8211_priv {int bssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_hw*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_2,
         struct ieee80211_vif *VAR_3,
         struct ieee80211_bss_conf *VAR_4,
         u32 VAR_5)
{
 struct adm8211_priv *VAR_6 = VAR_2->priv;

 if (!(VAR_5 & VAR_0))
  return;

 if (!FUNC_1(VAR_4->bssid, VAR_6->bssid)) {
  FUNC_0(VAR_2, VAR_4->bssid);
  FUNC_2(VAR_6->bssid, VAR_4->bssid, VAR_1);
 }
}
