
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_8__ {int conf_mutex; } ;
struct TYPE_7__ {int rfkill_state; } ;
struct rtl_priv {TYPE_4__ locks; TYPE_3__ rfkill; TYPE_2__* cfg; int status; } ;
struct ieee80211_hw {int wiphy; } ;
struct TYPE_6__ {TYPE_1__* ops; } ;
struct TYPE_5__ {int (* radio_onoff_checking ) (struct ieee80211_hw*,scalar_t__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*,scalar_t__*) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static void FUNC_8(struct ieee80211_hw *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_3(VAR_3);

 bool VAR_5;
 bool VAR_6;
 u8 VAR_7 = 0;

 if (!FUNC_5(VAR_2, &VAR_4->status))
  return;

 FUNC_1(&VAR_4->locks.conf_mutex);


 VAR_5 = VAR_4->cfg->ops->radio_onoff_checking(VAR_3, &VAR_7);

 if (VAR_7) {
  if (FUNC_6(VAR_5 != VAR_4->rfkill.rfkill_state)) {
   VAR_4->rfkill.rfkill_state = VAR_5;

   FUNC_0(VAR_4, VAR_0, VAR_1,
     "wireless radio switch turned %s\n",
      VAR_5 ? "on" : "off");

   VAR_6 = (VAR_4->rfkill.rfkill_state == 1) ? 0 : 1;
   FUNC_7(VAR_3->wiphy, VAR_6);
  }
 }

 FUNC_2(&VAR_4->locks.conf_mutex);
}
