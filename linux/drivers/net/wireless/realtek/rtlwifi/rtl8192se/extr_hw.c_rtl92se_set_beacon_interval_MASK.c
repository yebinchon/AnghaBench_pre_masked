
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rtl_priv {int dummy; } ;
struct rtl_mac {int beacon_interval; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_hw*,int ) ;
 struct rtl_mac* FUNC_1 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct rtl_priv*,int ,int ) ;

void FUNC_4(struct ieee80211_hw *VAR_1)
{
 struct rtl_priv *VAR_2 = FUNC_2(VAR_1);
 struct rtl_mac *VAR_3 = FUNC_1(FUNC_2(VAR_1));
 u16 VAR_4 = VAR_3->beacon_interval;


 FUNC_3(VAR_2, VAR_0, VAR_4);

 FUNC_0(VAR_1, VAR_4);
}
