
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lps_change_work; } ;
struct rtl_priv {int enter_ps; TYPE_1__ works; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 () ;
 void FUNC_1 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct ieee80211_hw *VAR_0)
{
 struct rtl_priv *VAR_1 = FUNC_2(VAR_0);

 if (!FUNC_0())
  return FUNC_1(VAR_0);
 VAR_1->enter_ps = 1;
 FUNC_3(&VAR_1->works.lps_change_work);
}
