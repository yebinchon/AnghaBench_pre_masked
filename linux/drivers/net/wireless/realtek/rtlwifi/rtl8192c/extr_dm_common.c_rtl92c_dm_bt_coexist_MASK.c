
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bt_coexist_type; scalar_t__ bt_coexistence; } ;
struct rtl_priv {TYPE_1__ btcoexist; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;

void FUNC_5(struct ieee80211_hw *VAR_1)
{
 struct rtl_priv *VAR_2 = FUNC_4(VAR_1);
 bool VAR_3;
 bool VAR_4;
 bool VAR_5;

 if ((VAR_2->btcoexist.bt_coexistence) &&
     (VAR_2->btcoexist.bt_coexist_type == VAR_0)) {
  VAR_3 = FUNC_2(VAR_1);
  VAR_4 = FUNC_1(VAR_1);
  VAR_5 = FUNC_0(VAR_1);

  if (VAR_3 || VAR_4 || VAR_5)
   FUNC_3(VAR_1);
 }
}
