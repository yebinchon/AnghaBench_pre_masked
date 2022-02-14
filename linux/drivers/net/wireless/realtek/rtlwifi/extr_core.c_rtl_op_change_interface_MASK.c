
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_priv {int dummy; } ;
struct ieee80211_vif {int type; int p2p; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int) ;
 int FUNC_1 (struct ieee80211_hw*,struct ieee80211_vif*) ;
 int FUNC_2 (struct ieee80211_hw*,struct ieee80211_vif*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_2,
       struct ieee80211_vif *VAR_3,
       enum nl80211_iftype VAR_4, bool VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_3(VAR_2);
 int VAR_7;

 FUNC_2(VAR_2, VAR_3);

 VAR_3->type = VAR_4;
 VAR_3->p2p = VAR_5;
 VAR_7 = FUNC_1(VAR_2, VAR_3);
 FUNC_0(VAR_6, VAR_0, VAR_1,
   "p2p  %x\n", VAR_5);
 return VAR_7;
}
