
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct rtl_ps_ctl {int rfpwr_state; scalar_t__ rfoff_reason; int inactive_pwrstate; int in_powersavemode; int swrf_processing; scalar_t__ inactiveps; } ;
struct TYPE_12__ {int ips_mutex; } ;
struct TYPE_11__ {TYPE_4__* btc_ops; } ;
struct TYPE_7__ {int ips_nic_off_wq; } ;
struct rtl_priv {TYPE_6__ locks; TYPE_5__ btcoexist; TYPE_3__* cfg; TYPE_1__ works; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum rf_pwrstate { ____Placeholder_rf_pwrstate } rf_pwrstate ;
struct TYPE_10__ {int (* btc_ips_notify ) (struct rtl_priv*,int) ;} ;
struct TYPE_9__ {TYPE_2__* ops; } ;
struct TYPE_8__ {scalar_t__ (* get_btc_status ) () ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_5 (struct rtl_priv*) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (struct rtl_priv*,int) ;

void FUNC_8(struct ieee80211_hw *VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_4(VAR_2);
 struct rtl_ps_ctl *VAR_4 = FUNC_5(FUNC_4(VAR_2));
 enum rf_pwrstate VAR_5;

 FUNC_1(&VAR_3->works.ips_nic_off_wq);

 FUNC_2(&VAR_3->locks.ips_mutex);
 if (VAR_4->inactiveps) {
  VAR_5 = VAR_4->rfpwr_state;

  if (VAR_5 != VAR_0 &&
      !VAR_4->swrf_processing &&
      VAR_4->rfoff_reason <= VAR_1) {

   VAR_4->inactive_pwrstate = VAR_0;
   VAR_4->in_powersavemode = 0;
   FUNC_0(VAR_2);

   if (VAR_3->cfg->ops->get_btc_status())
    VAR_3->btcoexist.btc_ops->btc_ips_notify(VAR_3,
         VAR_4->inactive_pwrstate);
  }
 }
 FUNC_3(&VAR_3->locks.ips_mutex);
}
