
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_6__ {scalar_t__ opp_ps; } ;
struct rtl_ps_ctl {scalar_t__ dot11_psmode; int smart_ps; int fwctrl_psmode; int pwr_mode; TYPE_1__ p2p_ps_info; scalar_t__ report_linked; scalar_t__ fwctrl_lps; } ;
struct TYPE_8__ {TYPE_2__* btc_ops; } ;
struct rtl_priv {TYPE_5__* cfg; TYPE_3__ btcoexist; } ;
struct rtl_mac {scalar_t__ opmode; scalar_t__ link_state; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_10__ {TYPE_4__* ops; } ;
struct TYPE_9__ {int (* set_hw_reg ) (struct ieee80211_hw*,int ,scalar_t__*) ;scalar_t__ (* get_btc_status ) () ;} ;
struct TYPE_7__ {int (* btc_lps_notify ) (struct rtl_priv*,scalar_t__) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int ) ;
 scalar_t__ FUNC_1 (struct ieee80211_hw*) ;
 struct rtl_mac* FUNC_2 (struct rtl_priv*) ;
 int FUNC_3 (struct ieee80211_hw*,int ) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_5 (struct rtl_priv*) ;
 int FUNC_6 (struct ieee80211_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (struct rtl_priv*,scalar_t__) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (struct rtl_priv*,scalar_t__) ;
 int FUNC_11 (struct ieee80211_hw*,int ,scalar_t__*) ;

void FUNC_12(struct ieee80211_hw *VAR_8, u8 VAR_9)
{
 struct rtl_priv *VAR_10 = FUNC_4(VAR_8);
 struct rtl_mac *VAR_11 = FUNC_2(FUNC_4(VAR_8));
 struct rtl_ps_ctl *VAR_12 = FUNC_5(FUNC_4(VAR_8));
 bool VAR_13;

 if (VAR_11->opmode == VAR_6)
  return;

 if (VAR_11->link_state != VAR_5)
  return;

 if (VAR_12->dot11_psmode == VAR_9 && VAR_9 == VAR_2)
  return;


 VAR_12->dot11_psmode = VAR_9;
 if ((VAR_12->fwctrl_lps) && VAR_12->report_linked) {
  if (VAR_12->dot11_psmode == VAR_2) {
   FUNC_0(VAR_10, VAR_0, VAR_1,
     "FW LPS leave ps_mode:%x\n",
      VAR_3);
   VAR_13 = 0;
   VAR_12->pwr_mode = VAR_3;
   VAR_12->smart_ps = 0;
   VAR_10->cfg->ops->set_hw_reg(VAR_8, VAR_4,
            (u8 *)(&VAR_13));
   if (VAR_12->p2p_ps_info.opp_ps)
    FUNC_3(VAR_8 , VAR_7);

   if (VAR_10->cfg->ops->get_btc_status())
    VAR_10->btcoexist.btc_ops->btc_lps_notify(VAR_10, VAR_9);
  } else {
   if (FUNC_1(VAR_8)) {
    FUNC_0(VAR_10, VAR_0, VAR_1,
      "FW LPS enter ps_mode:%x\n",
      VAR_12->fwctrl_psmode);
    if (VAR_10->cfg->ops->get_btc_status())
     VAR_10->btcoexist.btc_ops->btc_lps_notify(VAR_10, VAR_9);
    VAR_13 = 1;
    VAR_12->pwr_mode = VAR_12->fwctrl_psmode;
    VAR_12->smart_ps = 2;
    VAR_10->cfg->ops->set_hw_reg(VAR_8,
       VAR_4,
       (u8 *)(&VAR_13));

   } else {

    VAR_12->dot11_psmode = VAR_2;
   }
  }
 }
}
