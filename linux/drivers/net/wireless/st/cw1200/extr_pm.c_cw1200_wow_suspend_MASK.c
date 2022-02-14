
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct ieee80211_hw {struct cw1200_common* priv; } ;
struct cw1200_suspend_state {scalar_t__ prev_ps_mode; int beacon_skipping; void* link_id_gc; void* direct_probe; void* join_tmo; void* bss_loss_tmo; } ;
struct cw1200_pm_state {struct cw1200_suspend_state* suspend_state; int lock; int stay_awake; } ;
struct TYPE_13__ {int lock; int probe_work; } ;
struct TYPE_15__ {scalar_t__ mode; } ;
struct TYPE_9__ {scalar_t__ num_queued; } ;
struct cw1200_common {scalar_t__ join_status; int join_dtim_period; int conf_mutex; TYPE_5__ scan; int link_id_gc_work; int join_timeout; int bss_loss_work; int bh_rx; TYPE_4__* hw; int hwbus_priv; TYPE_3__* hwbus_ops; int mcast_timeout; int has_multicast_subscription; int recent_scan; int clear_recent_scan_work; int ps_mode_switch_in_progress; int ps_mode_switch_done; TYPE_7__ powersave_mode; TYPE_2__* vif; int hw_bufs_used; int bh_evt_wq; scalar_t__ join_pending; scalar_t__ channel_switch_in_progress; TYPE_1__ tx_queue_stats; struct cw1200_pm_state pm_state; } ;
struct cfg80211_wowlan {int dummy; } ;
struct TYPE_16__ {int hdr; } ;
struct TYPE_14__ {int hdr; } ;
struct TYPE_12__ {int wiphy; } ;
struct TYPE_11__ {int (* power_mgmt ) (int ,int) ;} ;
struct TYPE_10__ {int p2p; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct cw1200_common*) ;
 scalar_t__ FUNC_5 (struct cw1200_common*) ;
 int VAR_7 ;
 TYPE_8__ VAR_8 ;
 int FUNC_6 (struct cw1200_common*,int *,void*) ;
 int FUNC_7 (struct cw1200_common*,TYPE_7__*) ;
 void* FUNC_8 (int *) ;
 int VAR_9 ;
 TYPE_6__ VAR_10 ;
 int FUNC_9 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (struct cw1200_suspend_state*) ;
 struct cw1200_suspend_state* FUNC_12 (int,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ,int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (int ,int,int) ;
 scalar_t__ FUNC_21 (int ,int,int) ;
 int FUNC_22 (int ,char*,int) ;
 int FUNC_23 (struct cw1200_common*) ;
 int FUNC_24 (struct cw1200_common*,int,int) ;
 int FUNC_25 (struct cw1200_common*,int *) ;
 int FUNC_26 (struct cw1200_common*,int *) ;
 int FUNC_27 (struct cw1200_common*) ;

int FUNC_28(struct ieee80211_hw *VAR_11, struct cfg80211_wowlan *VAR_12)
{
 struct cw1200_common *VAR_13 = VAR_11->priv;
 struct cw1200_pm_state *VAR_14 = &VAR_13->pm_state;
 struct cw1200_suspend_state *VAR_15;
 int VAR_16;

 FUNC_15(&VAR_14->lock);
 VAR_16 = FUNC_18(&VAR_14->stay_awake);
 FUNC_16(&VAR_14->lock);
 if (VAR_16)
  return -VAR_2;


 if (VAR_13->tx_queue_stats.num_queued)
  return -VAR_3;


 if (!FUNC_13(&VAR_13->conf_mutex))
  return -VAR_3;





 if (VAR_13->channel_switch_in_progress)
  goto revert1;


 if (VAR_13->join_pending)
  goto revert1;


 if (FUNC_10(&VAR_13->scan.lock))
  goto revert1;


 FUNC_23(VAR_13);




 if (FUNC_21(VAR_13->bh_evt_wq,
          !VAR_13->hw_bufs_used, VAR_5 / 10) <= 0)
  goto revert2;


 FUNC_26(VAR_13, &VAR_10.hdr);


 FUNC_25(VAR_13, &VAR_8.hdr);


 VAR_15 = FUNC_12(sizeof(struct cw1200_suspend_state), VAR_4);
 if (!VAR_15)
  goto revert3;


 if (!VAR_13->vif->p2p &&
     VAR_13->join_status == VAR_1 &&
     VAR_13->powersave_mode.mode != VAR_6) {
  VAR_15->prev_ps_mode = VAR_13->powersave_mode.mode;
  VAR_13->powersave_mode.mode = VAR_6;
  FUNC_7(VAR_13, &VAR_13->powersave_mode);
  if (FUNC_20(VAR_13->ps_mode_switch_done,
           !VAR_13->ps_mode_switch_in_progress, 1*VAR_5) <= 0) {
   goto revert4;
  }
 }


 VAR_15->bss_loss_tmo =
  FUNC_8(&VAR_13->bss_loss_work);
 VAR_15->join_tmo =
  FUNC_8(&VAR_13->join_timeout);
 VAR_15->direct_probe =
  FUNC_8(&VAR_13->scan.probe_work);
 VAR_15->link_id_gc =
  FUNC_8(&VAR_13->link_id_gc_work);

 FUNC_3(&VAR_13->clear_recent_scan_work);
 FUNC_2(&VAR_13->recent_scan, 0);


 if (VAR_13->join_status == VAR_1 &&
     VAR_13->join_dtim_period &&
     !VAR_13->has_multicast_subscription) {
  VAR_15->beacon_skipping = 1;
  FUNC_24(VAR_13,
          VAR_13->join_dtim_period,
          VAR_0 * VAR_13->join_dtim_period);
 }


 if (FUNC_5(VAR_13))
  goto revert5;

 VAR_16 = FUNC_18(&VAR_13->mcast_timeout);
 if (VAR_16)
  goto revert6;


 VAR_14->suspend_state = VAR_15;


 VAR_16 = VAR_13->hwbus_ops->power_mgmt(VAR_13->hwbus_priv, 1);
 if (VAR_16) {
  FUNC_22(VAR_13->hw->wiphy,
     "PM request failed: %d. WoW is disabled.\n", VAR_16);
  FUNC_9(VAR_11);
  return -VAR_3;
 }


 if (FUNC_1(&VAR_13->bh_rx)) {
  FUNC_9(VAR_11);
  return -VAR_2;
 }

 return 0;

revert6:
 FUNC_0(FUNC_4(VAR_13));
revert5:
 FUNC_6(VAR_13, &VAR_13->bss_loss_work,
      VAR_15->bss_loss_tmo);
 FUNC_6(VAR_13, &VAR_13->join_timeout,
      VAR_15->join_tmo);
 FUNC_6(VAR_13, &VAR_13->scan.probe_work,
      VAR_15->direct_probe);
 FUNC_6(VAR_13, &VAR_13->link_id_gc_work,
      VAR_15->link_id_gc);
revert4:
 FUNC_11(VAR_15);
revert3:
 FUNC_26(VAR_13, &VAR_9);
 FUNC_25(VAR_13, &VAR_7);
revert2:
 FUNC_27(VAR_13);
 FUNC_19(&VAR_13->scan.lock);
revert1:
 FUNC_14(&VAR_13->conf_mutex);
 return -VAR_3;
}
