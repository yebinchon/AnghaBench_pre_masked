
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


struct TYPE_12__ {int max_power; int max_reg_power; int max_antenna_gain; int chan_radar; int mode; int freq; scalar_t__ min_power; int band_center_freq2; int band_center_freq1; } ;
struct wmi_vdev_start_request_arg {int vdev_id; TYPE_6__ channel; int ssid_len; int ssid; int hidden_ssid; int bcn_intval; int dtim_period; } ;
struct cfg80211_chan_def {TYPE_3__* chan; int center_freq2; int center_freq1; } ;
struct TYPE_7__ {int hidden_ssid; int ssid_len; int ssid; } ;
struct TYPE_8__ {TYPE_1__ ap; } ;
struct ath10k_vif {scalar_t__ vdev_type; TYPE_5__* vif; TYPE_2__ u; int beacon_interval; int dtim_period; int vdev_id; struct ath10k* ar; } ;
struct ath10k {int num_started_vdevs; int vdev_delete_done; int vdev_setup_done; int conf_mutex; } ;
struct TYPE_10__ {int ssid_len; int ssid; } ;
struct TYPE_11__ {TYPE_4__ bss_conf; } ;
struct TYPE_9__ {int max_power; int max_reg_power; int max_antenna_gain; int flags; int center_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ath10k*,int ,char*,int ,int ,int ) ;
 int FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*) ;
 int FUNC_3 (struct ath10k*,char*,int ,int,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ath10k*,struct wmi_vdev_start_request_arg*) ;
 int FUNC_6 (struct ath10k*,struct wmi_vdev_start_request_arg*) ;
 int FUNC_7 (struct cfg80211_chan_def const*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct ath10k_vif *VAR_4,
         const struct cfg80211_chan_def *VAR_5,
         bool VAR_6)
{
 struct ath10k *VAR_7 = VAR_4->ar;
 struct wmi_vdev_start_request_arg VAR_8 = {};
 int VAR_9 = 0;

 FUNC_8(&VAR_7->conf_mutex);

 FUNC_9(&VAR_7->vdev_setup_done);
 FUNC_9(&VAR_7->vdev_delete_done);

 VAR_8.vdev_id = VAR_4->vdev_id;
 VAR_8.dtim_period = VAR_4->dtim_period;
 VAR_8.bcn_intval = VAR_4->beacon_interval;

 VAR_8.channel.freq = VAR_5->chan->center_freq;
 VAR_8.channel.band_center_freq1 = VAR_5->center_freq1;
 VAR_8.channel.band_center_freq2 = VAR_5->center_freq2;
 VAR_8.channel.mode = FUNC_7(VAR_5);

 VAR_8.channel.min_power = 0;
 VAR_8.channel.max_power = VAR_5->chan->max_power * 2;
 VAR_8.channel.max_reg_power = VAR_5->chan->max_reg_power * 2;
 VAR_8.channel.max_antenna_gain = VAR_5->chan->max_antenna_gain * 2;

 if (VAR_4->vdev_type == VAR_2) {
  VAR_8.ssid = VAR_4->u.ap.ssid;
  VAR_8.ssid_len = VAR_4->u.ap.ssid_len;
  VAR_8.hidden_ssid = VAR_4->u.ap.hidden_ssid;


  VAR_8.channel.chan_radar =
   !!(VAR_5->chan->flags & VAR_1);
 } else if (VAR_4->vdev_type == VAR_3) {
  VAR_8.ssid = VAR_4->vif->bss_conf.ssid;
  VAR_8.ssid_len = VAR_4->vif->bss_conf.ssid_len;
 }

 FUNC_0(VAR_7, VAR_0,
     "mac vdev %d start center_freq %d phymode %s\n",
     VAR_8.vdev_id, VAR_8.channel.freq,
     FUNC_4(VAR_8.channel.mode));

 if (VAR_6)
  VAR_9 = FUNC_5(VAR_7, &VAR_8);
 else
  VAR_9 = FUNC_6(VAR_7, &VAR_8);

 if (VAR_9) {
  FUNC_3(VAR_7, "failed to start WMI vdev %i: %d\n",
       VAR_8.vdev_id, VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_2(VAR_7);
 if (VAR_9) {
  FUNC_3(VAR_7,
       "failed to synchronize setup for vdev %i restart %d: %d\n",
       VAR_8.vdev_id, VAR_6, VAR_9);
  return VAR_9;
 }

 VAR_7->num_started_vdevs++;
 FUNC_1(VAR_7);

 return VAR_9;
}
