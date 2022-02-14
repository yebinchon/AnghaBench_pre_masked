
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_ps_ctl {int rfpwr_state; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum rf_pwrstate { ____Placeholder_rf_pwrstate } rf_pwrstate ;


 int FUNC_0 (struct ieee80211_hw*,int) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_2 (int ) ;

bool FUNC_3(struct ieee80211_hw *VAR_0,
          enum rf_pwrstate VAR_1)
{
 struct rtl_ps_ctl *VAR_2 = FUNC_2(FUNC_1(VAR_0));

 bool VAR_3 = 0;

 if (VAR_1 == VAR_2->rfpwr_state)
  return VAR_3;
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 return VAR_3;
}
