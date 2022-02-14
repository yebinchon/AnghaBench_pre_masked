
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rtl_priv {int dummy; } ;
struct rtl_mac {int beacon_interval; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int ) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 struct rtl_mac* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct rtl_priv*,int ,int ) ;

void FUNC_6(struct ieee80211_hw *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_4(VAR_3);
 struct rtl_mac *VAR_5 = FUNC_3(FUNC_4(VAR_3));
 u16 VAR_6 = VAR_5->beacon_interval;

 FUNC_0(VAR_4, VAR_0, VAR_1,
   "beacon_interval:%d\n", VAR_6);
 FUNC_1(VAR_3);
 FUNC_5(VAR_4, VAR_2, VAR_6);
 FUNC_2(VAR_3);
}
