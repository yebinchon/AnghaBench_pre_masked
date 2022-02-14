
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int c2hcmd_wq; int fwevt_wq; int ps_rfon_wq; int ps_work; int ips_nic_off_wq; int watchdog_wq; int rtl_wq; struct ieee80211_hw* hw; int dualmac_easyconcurrent_retrytimer; int watchdog_timer; } ;
struct rtl_priv {TYPE_2__ works; TYPE_1__* cfg; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (int *,void*) ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int *,int ,int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_8)
{
 struct rtl_priv *VAR_9 = FUNC_3(VAR_8);


 FUNC_4(&VAR_9->works.watchdog_timer,
      VAR_6, 0);
 FUNC_4(&VAR_9->works.dualmac_easyconcurrent_retrytimer,
      VAR_1, 0);

 VAR_9->works.hw = VAR_8;
 VAR_9->works.rtl_wq = FUNC_1("%s", 0, 0, VAR_9->cfg->name);
 if (FUNC_5(!VAR_9->works.rtl_wq)) {
  FUNC_2("Failed to allocate work queue\n");
  return;
 }

 FUNC_0(&VAR_9->works.watchdog_wq,
     (void *)VAR_7);
 FUNC_0(&VAR_9->works.ips_nic_off_wq,
     (void *)VAR_3);
 FUNC_0(&VAR_9->works.ps_work,
     (void *)VAR_5);
 FUNC_0(&VAR_9->works.ps_rfon_wq,
     (void *)VAR_4);
 FUNC_0(&VAR_9->works.fwevt_wq,
     (void *)VAR_2);
 FUNC_0(&VAR_9->works.c2hcmd_wq,
     (void *)VAR_0);
}
