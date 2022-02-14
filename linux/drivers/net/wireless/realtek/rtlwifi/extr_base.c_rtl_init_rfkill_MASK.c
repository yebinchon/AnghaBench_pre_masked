
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_6__ {int rfkill_state; } ;
struct rtl_priv {TYPE_3__ rfkill; TYPE_2__* cfg; } ;
struct ieee80211_hw {int wiphy; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* radio_onoff_checking ) (struct ieee80211_hw*,scalar_t__*) ;} ;


 int FUNC_0 (char*,char*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*,scalar_t__*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct ieee80211_hw *VAR_0)
{
 struct rtl_priv *VAR_1 = FUNC_1(VAR_0);

 bool VAR_2;
 bool VAR_3;
 u8 VAR_4 = 0;


 VAR_1->rfkill.rfkill_state = 1;
 FUNC_3(VAR_0->wiphy, 0);

 VAR_2 = VAR_1->cfg->ops->radio_onoff_checking(VAR_0, &VAR_4);

 if (VAR_4) {
  FUNC_0("rtlwifi: wireless switch is %s\n",
   VAR_1->rfkill.rfkill_state ? "on" : "off");

  VAR_1->rfkill.rfkill_state = VAR_2;

  VAR_3 = (VAR_1->rfkill.rfkill_state == 1) ? 0 : 1;
  FUNC_3(VAR_0->wiphy, VAR_3);
 }

 FUNC_4(VAR_0->wiphy);
}
