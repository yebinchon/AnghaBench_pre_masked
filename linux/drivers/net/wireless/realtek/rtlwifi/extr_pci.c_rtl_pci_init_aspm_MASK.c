
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_ps_ctl {int reg_rfps_level; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtl_ps_ctl*,int) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_1)
{
 struct rtl_ps_ctl *VAR_2 = FUNC_4(FUNC_3(VAR_1));

 FUNC_1(VAR_1);

 if (VAR_2->reg_rfps_level & VAR_0) {

  FUNC_2(VAR_1);
  FUNC_0(VAR_2, VAR_0);
 }
}
