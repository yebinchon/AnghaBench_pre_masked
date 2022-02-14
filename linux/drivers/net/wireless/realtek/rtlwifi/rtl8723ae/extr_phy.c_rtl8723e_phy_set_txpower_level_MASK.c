
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_efuse {int txpwr_fromeprom; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (struct ieee80211_hw*,int ,int *,int *) ;
 int FUNC_1 (struct ieee80211_hw*,int ,int *,int *) ;
 int FUNC_2 (struct ieee80211_hw*,int *) ;
 int FUNC_3 (struct ieee80211_hw*,int *,int ) ;
 struct rtl_efuse* FUNC_4 (int ) ;
 int FUNC_5 (struct ieee80211_hw*) ;

void FUNC_6(struct ieee80211_hw *VAR_0, u8 VAR_1)
{
 struct rtl_efuse *VAR_2 = FUNC_4(FUNC_5(VAR_0));
 u8 VAR_3[2], VAR_4[2];

 if (VAR_2->txpwr_fromeprom == 0)
  return;
 FUNC_1(VAR_0, VAR_1,
        &VAR_3[0], &VAR_4[0]);
 FUNC_0(VAR_0,
           VAR_1, &VAR_3[0],
           &VAR_4[0]);
 FUNC_2(VAR_0, &VAR_3[0]);
 FUNC_3(VAR_0, &VAR_4[0], VAR_1);
}
