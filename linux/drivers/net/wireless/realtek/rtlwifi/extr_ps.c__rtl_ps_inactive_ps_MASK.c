
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl_ps_ctl {int swrf_processing; scalar_t__ inactive_pwrstate; int reg_rfps_level; } ;
struct rtl_priv {TYPE_1__* intf_ops; } ;
struct rtl_hal {scalar_t__ interface; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_2__ {int (* enable_aspm ) (struct ieee80211_hw*) ;int (* disable_aspm ) (struct ieee80211_hw*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtl_ps_ctl*,int ) ;
 scalar_t__ FUNC_1 (struct rtl_ps_ctl*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct rtl_ps_ctl*,int ) ;
 struct rtl_hal* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*,scalar_t__,int ) ;
 struct rtl_ps_ctl* FUNC_6 (struct rtl_priv*) ;
 int FUNC_7 (struct ieee80211_hw*) ;
 int FUNC_8 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_9(struct ieee80211_hw *VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_4(VAR_6);
 struct rtl_hal *VAR_8 = FUNC_3(FUNC_4(VAR_6));
 struct rtl_ps_ctl *VAR_9 = FUNC_6(FUNC_4(VAR_6));

 VAR_9->swrf_processing = 1;

 if (VAR_9->inactive_pwrstate == VAR_1 &&
     VAR_8->interface == VAR_2) {
  if ((VAR_9->reg_rfps_level & VAR_5) &&
      FUNC_1(VAR_9, VAR_4) &&
      VAR_8->interface == VAR_2) {
   VAR_7->intf_ops->disable_aspm(VAR_6);
   FUNC_0(VAR_9, VAR_4);
  }
 }

 FUNC_5(VAR_6, VAR_9->inactive_pwrstate,
       VAR_3);

 if (VAR_9->inactive_pwrstate == VAR_0 &&
     VAR_8->interface == VAR_2) {
  if (VAR_9->reg_rfps_level & VAR_5 &&
      !FUNC_1(VAR_9, VAR_4)) {
   VAR_7->intf_ops->enable_aspm(VAR_6);
   FUNC_2(VAR_9, VAR_4);
  }
 }

 VAR_9->swrf_processing = 0;
}
