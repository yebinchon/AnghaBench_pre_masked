
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rfoff_reason; } ;
struct rtl_led {int dummy; } ;
struct TYPE_3__ {struct rtl_led sw_led0; } ;
struct rtl_priv {TYPE_2__ psc; TYPE_1__ ledctl; } ;
struct rtl_pci {int up_first_time; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ieee80211_hw*,struct rtl_led*) ;
 int FUNC_1 (struct ieee80211_hw*,struct rtl_led*) ;
 struct rtl_pci* FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_1)
{
 struct rtl_priv *VAR_2 = FUNC_4(VAR_1);
 struct rtl_pci *VAR_3 = FUNC_2(FUNC_3(VAR_1));
 struct rtl_led *VAR_4 = &VAR_2->ledctl.sw_led0;

 if (VAR_3->up_first_time == 1)
  return;

 if (VAR_2->psc.rfoff_reason == VAR_0)
  FUNC_1(VAR_1, VAR_4);
 else
  FUNC_0(VAR_1, VAR_4);
}
