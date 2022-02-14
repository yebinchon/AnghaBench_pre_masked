
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u32 ;
struct wmi_start_scan_arg {int n_channels; int burst_duration_ms; int scan_ctrl_flags; void* max_scan_time; void* dwell_time_passive; void* dwell_time_active; int * channels; int scan_id; int vdev_id; } ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct ath10k* priv; } ;
struct ieee80211_channel {int center_freq; } ;
struct ath10k_vif {int vdev_id; } ;
struct TYPE_5__ {int state; int is_roc; int roc_notify; int timeout; int on_channel; int roc_freq; int vdev_id; int completed; int started; } ;
struct ath10k {int conf_mutex; TYPE_2__ scan; TYPE_3__* hw; int data_lock; } ;
typedef enum ieee80211_roc_type { ____Placeholder_ieee80211_roc_type } ieee80211_roc_type ;
typedef int arg ;
struct TYPE_6__ {TYPE_1__* wiphy; } ;
struct TYPE_4__ {int max_remain_on_channel_duration; } ;



 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct ieee80211_hw*,struct ieee80211_vif*) ;
 int FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*,struct wmi_start_scan_arg*) ;
 int FUNC_3 (struct ath10k*,char*,...) ;
 int FUNC_4 (struct ath10k*,struct wmi_start_scan_arg*) ;
 int FUNC_5 (TYPE_3__*,int *,int ) ;
 int FUNC_6 (struct wmi_start_scan_arg*,int ,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int) ;

__attribute__((used)) static int FUNC_14(struct ieee80211_hw *VAR_6,
        struct ieee80211_vif *VAR_7,
        struct ieee80211_channel *VAR_8,
        int VAR_9,
        enum ieee80211_roc_type VAR_10)
{
 struct ath10k *VAR_11 = VAR_6->priv;
 struct ath10k_vif *VAR_12 = (void *)VAR_7->drv_priv;
 struct wmi_start_scan_arg VAR_13;
 int VAR_14 = 0;
 u32 VAR_15;

 FUNC_8(&VAR_11->conf_mutex);

 if (FUNC_0(VAR_6, VAR_7) > 0) {
  VAR_14 = -VAR_1;
  goto exit;
 }

 FUNC_11(&VAR_11->data_lock);
 switch (VAR_11->scan.state) {
 case 130:
  FUNC_10(&VAR_11->scan.started);
  FUNC_10(&VAR_11->scan.completed);
  FUNC_10(&VAR_11->scan.on_channel);
  VAR_11->scan.state = 128;
  VAR_11->scan.is_roc = 1;
  VAR_11->scan.vdev_id = VAR_12->vdev_id;
  VAR_11->scan.roc_freq = VAR_8->center_freq;
  VAR_11->scan.roc_notify = 1;
  VAR_14 = 0;
  break;
 case 128:
 case 129:
 case 131:
  VAR_14 = -VAR_1;
  break;
 }
 FUNC_12(&VAR_11->data_lock);

 if (VAR_14)
  goto exit;

 VAR_15 = VAR_11->hw->wiphy->max_remain_on_channel_duration * 2;

 FUNC_6(&VAR_13, 0, sizeof(VAR_13));
 FUNC_4(VAR_11, &VAR_13);
 VAR_13.vdev_id = VAR_12->vdev_id;
 VAR_13.scan_id = VAR_0;
 VAR_13.n_channels = 1;
 VAR_13.channels[0] = VAR_8->center_freq;
 VAR_13.dwell_time_active = VAR_15;
 VAR_13.dwell_time_passive = VAR_15;
 VAR_13.max_scan_time = VAR_15;
 VAR_13.scan_ctrl_flags |= VAR_5;
 VAR_13.scan_ctrl_flags |= VAR_4;
 VAR_13.burst_duration_ms = VAR_9;

 VAR_14 = FUNC_2(VAR_11, &VAR_13);
 if (VAR_14) {
  FUNC_3(VAR_11, "failed to start roc scan: %d\n", VAR_14);
  FUNC_11(&VAR_11->data_lock);
  VAR_11->scan.state = 130;
  FUNC_12(&VAR_11->data_lock);
  goto exit;
 }

 VAR_14 = FUNC_13(&VAR_11->scan.on_channel, 3 * VAR_3);
 if (VAR_14 == 0) {
  FUNC_3(VAR_11, "failed to switch to channel for roc scan\n");

  VAR_14 = FUNC_1(VAR_11);
  if (VAR_14)
   FUNC_3(VAR_11, "failed to stop scan: %d\n", VAR_14);

  VAR_14 = -VAR_2;
  goto exit;
 }

 FUNC_5(VAR_11->hw, &VAR_11->scan.timeout,
         FUNC_7(VAR_9));

 VAR_14 = 0;
exit:
 FUNC_9(&VAR_11->conf_mutex);
 return VAR_14;
}
