
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_efuse {scalar_t__ antenna_div_type; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 struct rtl_efuse* FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_3)
{
 struct rtl_efuse *VAR_4 = FUNC_3(FUNC_4(VAR_3));

 if (VAR_4->antenna_div_type == VAR_0)
  FUNC_1(VAR_3);
 else if (VAR_4->antenna_div_type == VAR_1)
  FUNC_2(VAR_3);
 else if (VAR_4->antenna_div_type == VAR_2)
  FUNC_0(VAR_3);

}
