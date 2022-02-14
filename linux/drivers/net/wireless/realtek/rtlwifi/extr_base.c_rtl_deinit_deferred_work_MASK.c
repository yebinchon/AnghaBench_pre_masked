
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int c2hcmd_wq; int fwevt_wq; int ps_rfon_wq; int ps_work; int ips_nic_off_wq; int watchdog_wq; int watchdog_timer; } ;
struct rtl_priv {TYPE_1__ works; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;

void FUNC_4(struct ieee80211_hw *VAR_0, bool VAR_1)
{
 struct rtl_priv *VAR_2 = FUNC_3(VAR_0);

 FUNC_2(&VAR_2->works.watchdog_timer);

 FUNC_1(&VAR_2->works.watchdog_wq);
 if (VAR_1)
  FUNC_0(&VAR_2->works.ips_nic_off_wq);
 else
  FUNC_1(&VAR_2->works.ips_nic_off_wq);
 FUNC_1(&VAR_2->works.ps_work);
 FUNC_1(&VAR_2->works.ps_rfon_wq);
 FUNC_1(&VAR_2->works.fwevt_wq);
 FUNC_1(&VAR_2->works.c2hcmd_wq);
}
