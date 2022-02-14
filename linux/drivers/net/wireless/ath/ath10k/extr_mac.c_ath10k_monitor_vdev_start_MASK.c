
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int chan_radar; int max_power; int max_reg_power; int max_antenna_gain; scalar_t__ min_power; int mode; int band_center_freq2; int band_center_freq1; int freq; } ;
struct wmi_vdev_start_request_arg {int vdev_id; TYPE_1__ channel; } ;
struct ieee80211_channel {int flags; int max_power; int max_reg_power; int max_antenna_gain; int center_freq; } ;
struct cfg80211_chan_def {int center_freq2; int center_freq1; struct ieee80211_channel* chan; } ;
struct ath10k {int monitor_vdev_id; int mac_addr; int vdev_delete_done; int vdev_setup_done; int hw; int conf_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ath10k*,int ,char*,int) ;
 int VAR_3 ;
 int FUNC_2 (struct ath10k*) ;
 int FUNC_3 (struct ath10k*,char*,int,int) ;
 int FUNC_4 (struct ath10k*,struct wmi_vdev_start_request_arg*) ;
 int FUNC_5 (struct ath10k*,int) ;
 int FUNC_6 (struct ath10k*,int,int ,int ) ;
 int FUNC_7 (struct cfg80211_chan_def*) ;
 int FUNC_8 (int ,int ,struct cfg80211_chan_def**) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct ath10k *VAR_4, int VAR_5)
{
 struct cfg80211_chan_def *VAR_6 = ((void*)0);
 struct ieee80211_channel *VAR_7 = ((void*)0);
 struct wmi_vdev_start_request_arg VAR_8 = {};
 int VAR_9 = 0;

 FUNC_9(&VAR_4->conf_mutex);

 FUNC_8(VAR_4->hw,
         VAR_3,
         &VAR_6);
 if (FUNC_0(!VAR_6))
  return -VAR_1;

 VAR_7 = VAR_6->chan;

 VAR_8.vdev_id = VAR_5;
 VAR_8.channel.freq = VAR_7->center_freq;
 VAR_8.channel.band_center_freq1 = VAR_6->center_freq1;
 VAR_8.channel.band_center_freq2 = VAR_6->center_freq2;




 VAR_8.channel.mode = FUNC_7(VAR_6);
 VAR_8.channel.chan_radar =
   !!(VAR_7->flags & VAR_2);

 VAR_8.channel.min_power = 0;
 VAR_8.channel.max_power = VAR_7->max_power * 2;
 VAR_8.channel.max_reg_power = VAR_7->max_reg_power * 2;
 VAR_8.channel.max_antenna_gain = VAR_7->max_antenna_gain * 2;

 FUNC_10(&VAR_4->vdev_setup_done);
 FUNC_10(&VAR_4->vdev_delete_done);

 VAR_9 = FUNC_4(VAR_4, &VAR_8);
 if (VAR_9) {
  FUNC_3(VAR_4, "failed to request monitor vdev %i start: %d\n",
       VAR_5, VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_2(VAR_4);
 if (VAR_9) {
  FUNC_3(VAR_4, "failed to synchronize setup for monitor vdev %i start: %d\n",
       VAR_5, VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_6(VAR_4, VAR_5, 0, VAR_4->mac_addr);
 if (VAR_9) {
  FUNC_3(VAR_4, "failed to put up monitor vdev %i: %d\n",
       VAR_5, VAR_9);
  goto vdev_stop;
 }

 VAR_4->monitor_vdev_id = VAR_5;

 FUNC_1(VAR_4, VAR_0, "mac monitor vdev %i started\n",
     VAR_4->monitor_vdev_id);
 return 0;

vdev_stop:
 VAR_9 = FUNC_5(VAR_4, VAR_4->monitor_vdev_id);
 if (VAR_9)
  FUNC_3(VAR_4, "failed to stop monitor vdev %i after start failure: %d\n",
       VAR_4->monitor_vdev_id, VAR_9);

 return VAR_9;
}
