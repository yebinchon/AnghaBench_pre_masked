
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct il_priv {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_key_conf {int dummy; } ;
struct ieee80211_hw {struct il_priv* priv; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct il_priv*,struct ieee80211_key_conf*,struct ieee80211_sta*,int ,int *) ;

void
FUNC_2(struct ieee80211_hw *VAR_0, struct ieee80211_vif *VAR_1,
      struct ieee80211_key_conf *VAR_2,
      struct ieee80211_sta *VAR_3, u32 VAR_4, u16 * VAR_5)
{
 struct il_priv *VAR_6 = VAR_0->priv;

 FUNC_0("enter\n");

 FUNC_1(VAR_6, VAR_2, VAR_3, VAR_4, VAR_5);

 FUNC_0("leave\n");
}
