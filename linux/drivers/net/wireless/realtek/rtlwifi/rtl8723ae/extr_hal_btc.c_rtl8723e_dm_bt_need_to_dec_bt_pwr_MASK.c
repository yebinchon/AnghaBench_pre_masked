
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cstate; } ;
struct rtl_priv {TYPE_1__ btcoexist; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 scalar_t__ FUNC_1 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

__attribute__((used)) static bool FUNC_3(struct ieee80211_hw *VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_2(VAR_4);

 if (FUNC_1(VAR_4) == VAR_3) {
  FUNC_0(VAR_5, VAR_1, VAR_2,
   "Need to decrease bt power\n");
  VAR_5->btcoexist.cstate |=
  VAR_0;
  return 1;
 }

 VAR_5->btcoexist.cstate &= ~VAR_0;
 return 0;
}
