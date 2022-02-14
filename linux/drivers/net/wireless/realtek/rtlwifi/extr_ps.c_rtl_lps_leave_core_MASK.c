
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtl_ps_ctl {scalar_t__ dot11_psmode; int reg_rfps_level; scalar_t__ fwctrl_lps; } ;
struct TYPE_4__ {int lps_mutex; } ;
struct rtl_priv {TYPE_2__ locks; TYPE_1__* intf_ops; } ;
struct rtl_hal {scalar_t__ interface; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_3__ {int (* disable_aspm ) (struct ieee80211_hw*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct rtl_ps_ctl*,int ) ;
 scalar_t__ FUNC_1 (struct rtl_ps_ctl*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct rtl_hal* FUNC_5 (struct rtl_priv*) ;
 int FUNC_6 (struct ieee80211_hw*,scalar_t__) ;
 struct rtl_priv* FUNC_7 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_8 (struct rtl_priv*) ;
 int FUNC_9 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_10(struct ieee80211_hw *VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_7(VAR_6);
 struct rtl_ps_ctl *VAR_8 = FUNC_8(FUNC_7(VAR_6));
 struct rtl_hal *VAR_9 = FUNC_5(FUNC_7(VAR_6));

 FUNC_3(&VAR_7->locks.lps_mutex);

 if (VAR_8->fwctrl_lps) {
  if (VAR_8->dot11_psmode != VAR_2) {




   if (VAR_8->reg_rfps_level & VAR_5 &&
       FUNC_1(VAR_8, VAR_4) &&
       VAR_9->interface == VAR_3) {
    VAR_7->intf_ops->disable_aspm(VAR_6);
    FUNC_0(VAR_8, VAR_4);
   }

   FUNC_2(VAR_7, VAR_0, VAR_1,
     "Busy Traffic,Leave 802.11 power save..\n");

   FUNC_6(VAR_6, VAR_2);
  }
 }
 FUNC_4(&VAR_7->locks.lps_mutex);
}
