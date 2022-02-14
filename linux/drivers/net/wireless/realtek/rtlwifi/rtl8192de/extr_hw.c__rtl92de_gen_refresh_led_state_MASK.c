
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl_ps_ctl {scalar_t__ rfoff_reason; } ;
struct rtl_led {int dummy; } ;
struct TYPE_2__ {struct rtl_led sw_led0; } ;
struct rtl_priv {TYPE_1__ ledctl; } ;
struct rtl_pci {scalar_t__ up_first_time; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ieee80211_hw*,struct rtl_led*) ;
 int FUNC_1 (struct ieee80211_hw*,struct rtl_led*) ;
 struct rtl_pci* FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_5 (struct rtl_priv*) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_4(VAR_2);
 struct rtl_pci *VAR_4 = FUNC_2(FUNC_3(VAR_2));
 struct rtl_ps_ctl *VAR_5 = FUNC_5(FUNC_4(VAR_2));
 struct rtl_led *VAR_6 = &VAR_3->ledctl.sw_led0;

 if (VAR_4->up_first_time)
  return;
 if (VAR_5->rfoff_reason == VAR_1)
  FUNC_1(VAR_2, VAR_6);
 else if (VAR_5->rfoff_reason == VAR_0)
  FUNC_1(VAR_2, VAR_6);
 else
  FUNC_0(VAR_2, VAR_6);
}
