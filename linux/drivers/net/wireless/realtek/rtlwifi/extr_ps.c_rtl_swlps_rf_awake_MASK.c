
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rtl_ps_ctl {int reg_rfps_level; } ;
struct TYPE_5__ {int lps_mutex; } ;
struct TYPE_6__ {int swctrl_lps; } ;
struct rtl_priv {TYPE_2__ locks; TYPE_1__* intf_ops; TYPE_3__ psc; } ;
struct rtl_mac {scalar_t__ link_state; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_4__ {int (* disable_aspm ) (struct ieee80211_hw*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtl_ps_ctl*,int ) ;
 scalar_t__ FUNC_1 (struct rtl_ps_ctl*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct rtl_mac* FUNC_4 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct ieee80211_hw*,int ,int ) ;
 struct rtl_ps_ctl* FUNC_7 (struct rtl_priv*) ;
 int FUNC_8 (struct ieee80211_hw*) ;

void FUNC_9(struct ieee80211_hw *VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_5(VAR_5);
 struct rtl_ps_ctl *VAR_7 = FUNC_7(FUNC_5(VAR_5));
 struct rtl_mac *VAR_8 = FUNC_4(FUNC_5(VAR_5));

 if (!VAR_6->psc.swctrl_lps)
  return;
 if (VAR_8->link_state != VAR_1)
  return;

 if (VAR_7->reg_rfps_level & VAR_4 &&
     FUNC_1(VAR_7, VAR_3)) {
  VAR_6->intf_ops->disable_aspm(VAR_5);
  FUNC_0(VAR_7, VAR_3);
 }

 FUNC_2(&VAR_6->locks.lps_mutex);
 FUNC_6(VAR_5, VAR_0, VAR_2);
 FUNC_3(&VAR_6->locks.lps_mutex);
}
