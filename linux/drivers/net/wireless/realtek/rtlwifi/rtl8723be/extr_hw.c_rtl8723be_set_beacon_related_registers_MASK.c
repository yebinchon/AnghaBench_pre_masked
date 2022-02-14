
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
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 struct rtl_mac* FUNC_2 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct rtl_priv*,int,int) ;
 int FUNC_5 (struct rtl_priv*,int ,int) ;

void FUNC_6(struct ieee80211_hw *VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_3(VAR_5);
 struct rtl_mac *VAR_7 = FUNC_2(FUNC_3(VAR_5));
 u16 VAR_8, VAR_9;

 VAR_8 = VAR_7->beacon_interval;
 VAR_9 = 2;
 FUNC_0(VAR_5);
 FUNC_5(VAR_6, VAR_0, VAR_9);
 FUNC_5(VAR_6, VAR_2, VAR_8);
 FUNC_5(VAR_6, VAR_1, 0x660f);
 FUNC_4(VAR_6, VAR_3, 0x18);
 FUNC_4(VAR_6, VAR_4, 0x18);
 FUNC_4(VAR_6, 0x606, 0x30);
 FUNC_1(VAR_5);
}
