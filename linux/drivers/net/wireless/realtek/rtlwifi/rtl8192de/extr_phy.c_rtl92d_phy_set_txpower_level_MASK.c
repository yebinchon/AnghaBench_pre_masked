
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ current_bandtype; } ;
struct rtl_priv {TYPE_1__ rtlhal; } ;
struct rtl_efuse {int txpwr_fromeprom; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211_hw*,int ,int *,int *) ;
 int FUNC_2 (struct ieee80211_hw*,int ,int *,int *) ;
 int FUNC_3 (struct ieee80211_hw*,int *) ;
 int FUNC_4 (struct ieee80211_hw*,int *,int ) ;
 struct rtl_efuse* FUNC_5 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_6 (struct ieee80211_hw*) ;

void FUNC_7(struct ieee80211_hw *VAR_1, u8 VAR_2)
{
 struct rtl_efuse *VAR_3 = FUNC_5(FUNC_6(VAR_1));
 struct rtl_priv *VAR_4 = FUNC_6(VAR_1);
 u8 VAR_5[2], VAR_6[2];

 if (!VAR_3->txpwr_fromeprom)
  return;
 VAR_2 = FUNC_0(VAR_2);
 FUNC_2(VAR_1, VAR_2, &VAR_5[0],
  &VAR_6[0]);
 if (VAR_4->rtlhal.current_bandtype == VAR_0)
  FUNC_1(VAR_1, VAR_2, &VAR_5[0],
    &VAR_6[0]);
 if (VAR_4->rtlhal.current_bandtype == VAR_0)
  FUNC_3(VAR_1, &VAR_5[0]);
 FUNC_4(VAR_1, &VAR_6[0], VAR_2);
}
