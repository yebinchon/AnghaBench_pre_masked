
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct rtl_ps_ctl {scalar_t__ rfpwr_state; } ;
struct TYPE_8__ {int conf_mutex; } ;
struct rtl_priv {TYPE_4__ locks; TYPE_3__* intf_ops; TYPE_2__* cfg; } ;
struct rtl_mac {int vendor; int bssid; int link_state; } ;
struct rtl_hal {scalar_t__ enter_pnp_sleep; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_7__ {int (* adapter_stop ) (struct ieee80211_hw*) ;} ;
struct TYPE_6__ {TYPE_1__* ops; } ;
struct TYPE_5__ {int (* get_hw_reg ) (struct ieee80211_hw*,int ,int *) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct rtl_hal*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*,int) ;
 struct rtl_hal* FUNC_6 (struct rtl_priv*) ;
 int FUNC_7 (struct ieee80211_hw*) ;
 struct rtl_mac* FUNC_8 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_9 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_10 (struct rtl_priv*) ;
 int FUNC_11 (struct ieee80211_hw*,int ,int *) ;
 int FUNC_12 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static void FUNC_14(struct ieee80211_hw *VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_9(VAR_4);
 struct rtl_mac *VAR_6 = FUNC_8(FUNC_9(VAR_4));
 struct rtl_hal *VAR_7 = FUNC_6(FUNC_9(VAR_4));
 struct rtl_ps_ctl *VAR_8 = FUNC_10(FUNC_9(VAR_4));
 bool VAR_9 = 0;

 if (FUNC_1(VAR_7))
  return;

 VAR_5->cfg->ops->get_hw_reg(VAR_4, VAR_1,
          (u8 *)(&VAR_9));




 if (FUNC_13(VAR_8->rfpwr_state == VAR_0))
  FUNC_7(VAR_4);

 FUNC_2(&VAR_5->locks.conf_mutex);

 if (!(VAR_9 &&
       VAR_7->enter_pnp_sleep)) {
  VAR_6->link_state = VAR_2;
  FUNC_0(VAR_6->bssid);
  VAR_6->vendor = VAR_3;


  FUNC_4(VAR_4);

  FUNC_5(VAR_4, 0);
 }
 VAR_5->intf_ops->adapter_stop(VAR_4);

 FUNC_3(&VAR_5->locks.conf_mutex);
}
