
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int queue; } ;
struct TYPE_5__ {int list; } ;
struct TYPE_4__ {int iqk_lock; int fw_ps_lock; int cck_and_rw_pagea_lock; int scan_list_lock; int c2hcmd_lock; int entry_list_lock; int waitq_lock; int rf_lock; int rf_ps_lock; int h2c_lock; int irq_th_lock; int lps_mutex; int ips_mutex; int conf_mutex; } ;
struct rtl_priv {int c2hcmd_queue; TYPE_3__ tx_report; TYPE_2__ scan_list; int entry_list; TYPE_1__ locks; } ;
struct rtl_mac {int link_state; struct ieee80211_hw* hw; } ;
struct ieee80211_hw {char* rate_control_algorithm; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 struct rtl_mac* FUNC_5 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_6 (struct ieee80211_hw*) ;
 int VAR_1 ;
 scalar_t__ FUNC_7 (struct ieee80211_hw*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct ieee80211_hw *VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_6(VAR_2);
 struct rtl_mac *VAR_4 = FUNC_5(FUNC_6(VAR_2));


 FUNC_2(VAR_2);
 VAR_4->hw = VAR_2;


 VAR_2->rate_control_algorithm = "rtl_rc";





 if (FUNC_7(VAR_2, VAR_1)) {
  FUNC_4("REGD init failed\n");
  return 1;
 }


 FUNC_3(&VAR_3->locks.conf_mutex);
 FUNC_3(&VAR_3->locks.ips_mutex);
 FUNC_3(&VAR_3->locks.lps_mutex);
 FUNC_9(&VAR_3->locks.irq_th_lock);
 FUNC_9(&VAR_3->locks.h2c_lock);
 FUNC_9(&VAR_3->locks.rf_ps_lock);
 FUNC_9(&VAR_3->locks.rf_lock);
 FUNC_9(&VAR_3->locks.waitq_lock);
 FUNC_9(&VAR_3->locks.entry_list_lock);
 FUNC_9(&VAR_3->locks.c2hcmd_lock);
 FUNC_9(&VAR_3->locks.scan_list_lock);
 FUNC_9(&VAR_3->locks.cck_and_rw_pagea_lock);
 FUNC_9(&VAR_3->locks.fw_ps_lock);
 FUNC_9(&VAR_3->locks.iqk_lock);

 FUNC_0(&VAR_3->entry_list);
 FUNC_0(&VAR_3->scan_list.list);
 FUNC_8(&VAR_3->tx_report.queue);
 FUNC_8(&VAR_3->c2hcmd_queue);

 VAR_4->link_state = VAR_0;


 FUNC_1(VAR_2);

 return 0;
}
