
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


typedef int u8 ;
struct TYPE_9__ {scalar_t__ p2p_ps_mode; } ;
struct rtl_ps_ctl {scalar_t__ rfpwr_state; int rfchange_inprogress; TYPE_3__ p2p_ps_info; } ;
struct TYPE_11__ {scalar_t__ num_qry_beacon_pkt; } ;
struct TYPE_12__ {TYPE_5__ dbginfo; } ;
struct TYPE_10__ {int rf_ps_lock; } ;
struct rtl_priv {TYPE_6__ dm; TYPE_4__ locks; TYPE_2__* cfg; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_8__ {TYPE_1__* ops; } ;
struct TYPE_7__ {int (* get_hw_reg ) (struct ieee80211_hw*,int ,int *) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (struct ieee80211_hw*) ;
 int FUNC_8 (struct ieee80211_hw*) ;
 int FUNC_9 (struct ieee80211_hw*) ;
 int FUNC_10 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_11 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_12 (struct rtl_priv*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct ieee80211_hw*,int ,int *) ;
 int FUNC_16 (struct ieee80211_hw*,int ,int *) ;

void FUNC_17(struct ieee80211_hw *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_11(VAR_3);
 struct rtl_ps_ctl *VAR_5 = FUNC_12(FUNC_11(VAR_3));
 bool VAR_6 = 0;
 bool VAR_7 = 1;

 VAR_4->cfg->ops->get_hw_reg(VAR_3, VAR_2,
          (u8 *)(&VAR_6));

 VAR_4->cfg->ops->get_hw_reg(VAR_3, VAR_1,
          (u8 *)(&VAR_7));

 if (VAR_5->p2p_ps_info.p2p_ps_mode)
  VAR_7 = 0;

 FUNC_13(&VAR_4->locks.rf_ps_lock);
 if ((VAR_5->rfpwr_state == VAR_0) &&
  ((!VAR_6) && VAR_7) &&
  (!VAR_5->rfchange_inprogress)) {
  FUNC_4(VAR_3);
  FUNC_9(VAR_3);
  FUNC_2(VAR_3);
  FUNC_5(VAR_3);
  FUNC_7(VAR_3);
  FUNC_0(VAR_3);
  FUNC_10(VAR_3);
  FUNC_1(VAR_3);
  FUNC_6(VAR_3);
  FUNC_3(VAR_3);
  FUNC_8(VAR_3);
 }
 FUNC_14(&VAR_4->locks.rf_ps_lock);
 VAR_4->dm.dbginfo.num_qry_beacon_pkt = 0;
}
