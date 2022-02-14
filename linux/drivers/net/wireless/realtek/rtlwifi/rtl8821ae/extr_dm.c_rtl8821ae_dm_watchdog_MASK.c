
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
struct rtl_hal {scalar_t__ hw_type; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_8__ {TYPE_1__* ops; } ;
struct TYPE_7__ {int (* get_hw_reg ) (struct ieee80211_hw*,int ,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
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
 int FUNC_11 (struct ieee80211_hw*) ;
 int FUNC_12 (struct ieee80211_hw*) ;
 struct rtl_hal* FUNC_13 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_14 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_15 (struct rtl_priv*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct ieee80211_hw*,int ,int *) ;
 int FUNC_19 (struct ieee80211_hw*,int ,int *) ;

void FUNC_20(struct ieee80211_hw *VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_14(VAR_6);
 struct rtl_ps_ctl *VAR_8 = FUNC_15(FUNC_14(VAR_6));
 struct rtl_hal *VAR_9 = FUNC_13(FUNC_14(VAR_6));
 bool VAR_10 = 0;
 bool VAR_11 = 1;

 VAR_7->cfg->ops->get_hw_reg(VAR_6, VAR_5,
          (u8 *)(&VAR_10));

 VAR_7->cfg->ops->get_hw_reg(VAR_6, VAR_4,
          (u8 *)(&VAR_11));

 if (VAR_8->p2p_ps_info.p2p_ps_mode)
  VAR_11 = 0;

 FUNC_16(&VAR_7->locks.rf_ps_lock);
 if ((VAR_8->rfpwr_state == VAR_2) &&
     ((!VAR_10) && VAR_11) &&
     (!VAR_8->rfchange_inprogress)) {
  FUNC_6(VAR_6);
  FUNC_9(VAR_6);
  FUNC_4(VAR_6);
  FUNC_7(VAR_6);
  FUNC_2(VAR_6);
  FUNC_12(VAR_6);
  FUNC_11(VAR_6);
  FUNC_3(VAR_6);
  FUNC_8(VAR_6);
  if (VAR_9->hw_type == VAR_3)
   FUNC_1(VAR_6);
  else
   FUNC_5(VAR_6);
  FUNC_10(VAR_6);
 }
 FUNC_17(&VAR_7->locks.rf_ps_lock);

 VAR_7->dm.dbginfo.num_qry_beacon_pkt = 0;
 FUNC_0(VAR_7, VAR_0, VAR_1, "\n");
}
