
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_ps_ctl {scalar_t__ rfpwr_state; int rfchange_inprogress; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_7 (int ) ;

void FUNC_8(struct ieee80211_hw *VAR_1)
{
 struct rtl_ps_ctl *VAR_2 = FUNC_7(FUNC_6(VAR_1));
 bool VAR_3 = 0;
 bool VAR_4 = 1;
 if ((VAR_2->rfpwr_state == VAR_0) && ((!VAR_3) &&
     VAR_4) && (!VAR_2->rfchange_inprogress)) {
  FUNC_5(VAR_1);
  FUNC_3(VAR_1);
  FUNC_4(VAR_1);
  FUNC_1(VAR_1);

  FUNC_2(VAR_1);



  FUNC_0(VAR_1);
 }
}
