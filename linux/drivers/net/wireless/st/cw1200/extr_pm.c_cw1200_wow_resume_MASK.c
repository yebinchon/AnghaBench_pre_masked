
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ieee80211_hw {struct cw1200_common* priv; } ;
struct cw1200_suspend_state {int beacon_skipping; int link_id_gc; int direct_probe; int join_tmo; int bss_loss_tmo; int prev_ps_mode; } ;
struct cw1200_pm_state {struct cw1200_suspend_state* suspend_state; } ;
struct TYPE_7__ {int probe_work; int lock; } ;
struct TYPE_8__ {int mode; } ;
struct cw1200_common {scalar_t__ join_status; int beacon_int; int join_dtim_period; int conf_mutex; int link_id_gc_work; TYPE_3__ scan; int join_timeout; int bss_loss_work; TYPE_4__ powersave_mode; TYPE_2__* vif; int hwbus_priv; TYPE_1__* hwbus_ops; struct cw1200_pm_state pm_state; } ;
struct TYPE_6__ {int p2p; } ;
struct TYPE_5__ {int (* power_mgmt ) (int ,int) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cw1200_common*) ;
 int VAR_2 ;
 int FUNC_2 (struct cw1200_common*,int *,int ) ;
 int FUNC_3 (struct cw1200_common*,TYPE_4__*) ;
 int VAR_3 ;
 int FUNC_4 (struct cw1200_suspend_state*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct cw1200_common*,int,int ) ;
 int FUNC_9 (struct cw1200_common*,int *) ;
 int FUNC_10 (struct cw1200_common*,int *) ;
 int FUNC_11 (struct cw1200_common*) ;

int FUNC_12(struct ieee80211_hw *VAR_4)
{
 struct cw1200_common *VAR_5 = VAR_4->priv;
 struct cw1200_pm_state *VAR_6 = &VAR_5->pm_state;
 struct cw1200_suspend_state *VAR_7;

 VAR_7 = VAR_6->suspend_state;
 VAR_6->suspend_state = ((void*)0);


 VAR_5->hwbus_ops->power_mgmt(VAR_5->hwbus_priv, 0);





 FUNC_7(&VAR_5->scan.lock);


 FUNC_0(FUNC_1(VAR_5));


 if (!VAR_5->vif->p2p && VAR_5->join_status == VAR_0) {
  VAR_5->powersave_mode.mode = VAR_7->prev_ps_mode;
  FUNC_3(VAR_5, &VAR_5->powersave_mode);
 }

 if (VAR_7->beacon_skipping) {
  FUNC_8(VAR_5, VAR_5->beacon_int *
          VAR_5->join_dtim_period >
          VAR_1 ? 1 :
          VAR_5->join_dtim_period, 0);
  VAR_7->beacon_skipping = 0;
 }


 FUNC_2(VAR_5, &VAR_5->bss_loss_work,
      VAR_7->bss_loss_tmo);
 FUNC_2(VAR_5, &VAR_5->join_timeout,
      VAR_7->join_tmo);
 FUNC_2(VAR_5, &VAR_5->scan.probe_work,
      VAR_7->direct_probe);
 FUNC_2(VAR_5, &VAR_5->link_id_gc_work,
      VAR_7->link_id_gc);


 FUNC_10(VAR_5, &VAR_3);


 FUNC_9(VAR_5, &VAR_2);


 FUNC_11(VAR_5);


 FUNC_5(&VAR_5->conf_mutex);


 FUNC_4(VAR_7);

 return 0;
}
