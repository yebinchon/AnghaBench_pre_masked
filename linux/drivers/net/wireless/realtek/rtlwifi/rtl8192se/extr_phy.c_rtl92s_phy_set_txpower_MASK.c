
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct rtl_efuse {int txpwr_fromeprom; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct ieee80211_hw*,int ,int *,int *) ;
 int FUNC_2 (struct ieee80211_hw*,int ,int *,int *) ;
 int FUNC_3 (struct ieee80211_hw*,int ) ;
 int FUNC_4 (struct ieee80211_hw*,int *,int ) ;
 struct rtl_efuse* FUNC_5 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_6 (struct ieee80211_hw*) ;

void FUNC_7(struct ieee80211_hw *VAR_2, u8 VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_6(VAR_2);
 struct rtl_efuse *VAR_5 = FUNC_5(FUNC_6(VAR_2));

 u8 VAR_6[2], VAR_7[2];

 if (!VAR_5->txpwr_fromeprom)
  return;







 FUNC_2(VAR_2, VAR_3, &VAR_6[0],
   &VAR_7[0]);

 FUNC_0(VAR_4, VAR_0, VAR_1,
   "Channel-%d, cckPowerLevel (A / B) = 0x%x / 0x%x, ofdmPowerLevel (A / B) = 0x%x / 0x%x\n",
   VAR_3, VAR_6[0], VAR_6[1],
   VAR_7[0], VAR_7[1]);

 FUNC_1(VAR_2, VAR_3, &VAR_6[0],
   &VAR_7[0]);

 FUNC_3(VAR_2, VAR_6[0]);
 FUNC_4(VAR_2, &VAR_7[0], VAR_3);

}
