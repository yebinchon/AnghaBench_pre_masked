
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct rtl_hal {int macphymode; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;

 struct rtl_hal* FUNC_1 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct rtl_priv*,int ,int) ;

void FUNC_4(struct ieee80211_hw *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_2(VAR_3);
 struct rtl_hal *VAR_5 = FUNC_1(FUNC_2(VAR_3));
 u8 VAR_6 = VAR_2;

 switch (VAR_5->macphymode) {
 case 130:
  FUNC_0(VAR_4, VAR_0, VAR_1,
    "MacPhyMode: DUALMAC_DUALPHY\n");
  FUNC_3(VAR_4, VAR_6, 0xF3);
  break;
 case 128:
  FUNC_0(VAR_4, VAR_0, VAR_1,
    "MacPhyMode: SINGLEMAC_SINGLEPHY\n");
  FUNC_3(VAR_4, VAR_6, 0xF4);
  break;
 case 129:
  FUNC_0(VAR_4, VAR_0, VAR_1,
    "MacPhyMode: DUALMAC_SINGLEPHY\n");
  FUNC_3(VAR_4, VAR_6, 0xF1);
  break;
 }
}
