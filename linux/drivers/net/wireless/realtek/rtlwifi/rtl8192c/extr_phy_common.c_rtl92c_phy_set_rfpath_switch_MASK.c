
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_hal {int version; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211_hw*,int,int) ;
 struct rtl_hal* FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211_hw*) ;

void FUNC_4(struct ieee80211_hw *VAR_0, bool VAR_1)
{
 struct rtl_hal *VAR_2 = FUNC_2(FUNC_3(VAR_0));

 if (FUNC_0(VAR_2->version))
  FUNC_1(VAR_0, VAR_1, 1);
 else
  FUNC_1(VAR_0, VAR_1, 0);
}
