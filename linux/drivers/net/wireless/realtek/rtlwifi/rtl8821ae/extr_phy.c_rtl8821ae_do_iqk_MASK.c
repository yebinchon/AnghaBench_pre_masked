
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_dm {int thermalvalue_iqk; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (struct ieee80211_hw*,int) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 struct rtl_dm* FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211_hw*) ;

void FUNC_4(struct ieee80211_hw *VAR_0, u8 VAR_1,
        u8 VAR_2, u8 VAR_3)
{
 struct rtl_dm *VAR_4 = FUNC_2(FUNC_3(VAR_0));

 FUNC_1(VAR_0);

 VAR_4->thermalvalue_iqk = VAR_2;
 FUNC_0(VAR_0, 0);
}
