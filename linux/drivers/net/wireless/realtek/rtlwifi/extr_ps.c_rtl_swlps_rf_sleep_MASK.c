
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
struct rtl_ps_ctl {int reg_rfps_level; } ;
struct TYPE_16__ {int ps_rfon_wq; int rtl_wq; } ;
struct TYPE_15__ {int dtim_counter; scalar_t__ rfchange_inprogress; int sw_ps_enabled; } ;
struct TYPE_12__ {int lps_mutex; int rf_ps_lock; } ;
struct TYPE_11__ {scalar_t__ busytraffic; } ;
struct TYPE_10__ {scalar_t__ being_setkey; } ;
struct rtl_priv {TYPE_7__ works; TYPE_6__ psc; TYPE_4__* intf_ops; TYPE_3__ locks; TYPE_2__ link_info; TYPE_1__ sec; } ;
struct rtl_mac {scalar_t__ opmode; scalar_t__ link_state; int cnt_after_linked; TYPE_9__* vif; } ;
struct TYPE_14__ {int ps_dtim_period; } ;
struct ieee80211_hw {TYPE_5__ conf; } ;
struct TYPE_17__ {int beacon_int; } ;
struct TYPE_18__ {TYPE_8__ bss_conf; } ;
struct TYPE_13__ {int (* enable_aspm ) (struct ieee80211_hw*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct rtl_ps_ctl*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct rtl_ps_ctl*,int ) ;
 int FUNC_3 (struct rtl_priv*,int ,int ,char*,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *,int ) ;
 struct rtl_mac* FUNC_7 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_8 (struct ieee80211_hw*) ;
 int FUNC_9 (struct ieee80211_hw*,int ,int ) ;
 struct rtl_ps_ctl* FUNC_10 (struct rtl_priv*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct ieee80211_hw*) ;

void FUNC_14(struct ieee80211_hw *VAR_9)
{
 struct rtl_priv *VAR_10 = FUNC_8(VAR_9);
 struct rtl_mac *VAR_11 = FUNC_7(FUNC_8(VAR_9));
 struct rtl_ps_ctl *VAR_12 = FUNC_10(FUNC_8(VAR_9));
 u8 VAR_13;

 if (!VAR_10->psc.sw_ps_enabled)
  return;

 if ((VAR_10->sec.being_setkey) ||
     (VAR_11->opmode == VAR_5))
  return;


 if ((VAR_11->link_state != VAR_3) || (VAR_11->cnt_after_linked < 5))
  return;

 if (VAR_10->link_info.busytraffic)
  return;

 FUNC_11(&VAR_10->locks.rf_ps_lock);
 if (VAR_10->psc.rfchange_inprogress) {
  FUNC_12(&VAR_10->locks.rf_ps_lock);
  return;
 }
 FUNC_12(&VAR_10->locks.rf_ps_lock);

 FUNC_4(&VAR_10->locks.lps_mutex);
 FUNC_9(VAR_9, VAR_2, VAR_6);
 FUNC_5(&VAR_10->locks.lps_mutex);

 if (VAR_12->reg_rfps_level & VAR_8 &&
     !FUNC_1(VAR_12, VAR_7)) {
  VAR_10->intf_ops->enable_aspm(VAR_9);
  FUNC_2(VAR_12, VAR_7);
 }







 if (VAR_10->psc.dtim_counter == 0) {
  if (VAR_9->conf.ps_dtim_period == 1)
   VAR_13 = VAR_9->conf.ps_dtim_period * 2;
  else
   VAR_13 = VAR_9->conf.ps_dtim_period;
 } else {
  VAR_13 = VAR_10->psc.dtim_counter;
 }

 if (VAR_13 > VAR_4)
  VAR_13 = VAR_4;




 FUNC_3(VAR_10, VAR_0, VAR_1,
   "dtim_counter:%x will sleep :%d beacon_intv\n",
    VAR_10->psc.dtim_counter, VAR_13);


 FUNC_6(VAR_10->works.rtl_wq, &VAR_10->works.ps_rfon_wq,
   FUNC_0(VAR_13 * VAR_11->vif->bss_conf.beacon_int - 40));
}
