
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int fast_antenna_training_timer; int fw_clockoff_timer; } ;
struct TYPE_5__ {scalar_t__ low_power_enable; } ;
struct TYPE_4__ {int * pfirmware; } ;
struct rtl_priv {TYPE_3__ works; TYPE_2__ psc; TYPE_1__ rtlhal; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int *) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ieee80211_hw *VAR_0)
{
 struct rtl_priv *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->rtlhal.pfirmware) {
  FUNC_2(VAR_1->rtlhal.pfirmware);
  VAR_1->rtlhal.pfirmware = ((void*)0);
 }

 if (VAR_1->psc.low_power_enable)
  FUNC_0(&VAR_1->works.fw_clockoff_timer);

 FUNC_0(&VAR_1->works.fast_antenna_training_timer);
}
