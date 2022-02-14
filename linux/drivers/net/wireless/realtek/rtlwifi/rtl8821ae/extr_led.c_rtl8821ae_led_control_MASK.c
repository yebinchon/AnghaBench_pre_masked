
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_ps_ctl {scalar_t__ rfoff_reason; } ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum led_ctl_mode { ____Placeholder_led_ctl_mode } led_ctl_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int) ;
 int FUNC_1 (struct ieee80211_hw*,int) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_3 (struct rtl_priv*) ;

void FUNC_4(struct ieee80211_hw *VAR_10,
      enum led_ctl_mode VAR_11)
{
 struct rtl_priv *VAR_12 = FUNC_2(VAR_10);
 struct rtl_ps_ctl *VAR_13 = FUNC_3(FUNC_2(VAR_10));

 if ((VAR_13->rfoff_reason > VAR_9) &&
     (VAR_11 == VAR_8 ||
      VAR_11 == VAR_5 ||
      VAR_11 == VAR_6 ||
      VAR_11 == VAR_2 ||
      VAR_11 == VAR_3 ||
      VAR_11 == VAR_7 ||
      VAR_11 == VAR_4)) {
  return;
 }
 FUNC_0(VAR_12, VAR_0, VAR_1, "ledaction %d,\n",
   VAR_11);
 FUNC_1(VAR_10, VAR_11);
}
