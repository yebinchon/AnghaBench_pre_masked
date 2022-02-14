
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


typedef int u32 ;
struct wsm_switch_channel {int channel_number; } ;
struct wsm_operational_mode {int disable_more_flag_usage; int power_mode; } ;
struct TYPE_7__ {struct ieee80211_channel* chan; } ;
struct ieee80211_conf {int power_level; int flags; int dynamic_ps_timeout; int short_frame_max_tx_count; int long_frame_max_tx_count; TYPE_1__ chandef; } ;
struct ieee80211_hw {struct ieee80211_conf conf; struct cw1200_common* priv; } ;
struct ieee80211_channel {int hw_value; int center_freq; } ;
struct TYPE_11__ {int lock; } ;
struct TYPE_10__ {int lock; } ;
struct TYPE_12__ {int fast_psm_idle_period; int mode; } ;
struct TYPE_8__ {scalar_t__ aid; } ;
struct cw1200_common {int output_power; scalar_t__ join_status; int short_frame_max_tx_count; TYPE_5__ scan; int conf_mutex; TYPE_4__ tx_policy_cache; TYPE_3__* hw; int long_frame_max_tx_count; int listening; TYPE_6__ powersave_mode; TYPE_2__ bss_params; struct ieee80211_channel* channel; int channel_switch_in_progress; int channel_switch_done; } ;
struct TYPE_9__ {int max_rate_tries; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct cw1200_common*,int) ;
 int FUNC_1 (struct cw1200_common*) ;
 int VAR_16 ;
 int FUNC_2 (struct cw1200_common*,TYPE_6__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int,...) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int,int) ;
 int FUNC_11 (struct cw1200_common*) ;
 int FUNC_12 (struct cw1200_common*,struct wsm_operational_mode*) ;
 int FUNC_13 (struct cw1200_common*,int) ;
 int FUNC_14 (struct cw1200_common*,struct wsm_switch_channel*) ;
 int FUNC_15 (struct cw1200_common*) ;

int FUNC_16(struct ieee80211_hw *VAR_17, u32 VAR_18)
{
 int VAR_19 = 0;
 struct cw1200_common *VAR_20 = VAR_17->priv;
 struct ieee80211_conf *VAR_21 = &VAR_17->conf;

 FUNC_6("CONFIG CHANGED:  %08x\n", VAR_18);

 FUNC_3(&VAR_20->scan.lock);
 FUNC_4(&VAR_20->conf_mutex);



 if (VAR_18 & VAR_8) {
  VAR_20->output_power = VAR_21->power_level;
  FUNC_6("[STA] TX power: %d\n", VAR_20->output_power);
  FUNC_13(VAR_20, VAR_20->output_power * 10);
 }

 if ((VAR_18 & VAR_5) &&
     (VAR_20->channel != VAR_21->chandef.chan)) {
  struct ieee80211_channel *VAR_22 = VAR_21->chandef.chan;
  struct wsm_switch_channel VAR_23 = {
   .channel_number = VAR_22->hw_value,
  };
  FUNC_6("[STA] Freq %d (wsm ch: %d).\n",
    VAR_22->center_freq, VAR_22->hw_value);


  if (!FUNC_0(VAR_20, 0)) {
   if (!FUNC_14(VAR_20, &VAR_23)) {
    VAR_19 = FUNC_10(VAR_20->channel_switch_done,
        !VAR_20->channel_switch_in_progress,
        3 * VAR_4);
    if (VAR_19) {

     VAR_20->channel = VAR_22;
     VAR_19 = 0;
    } else {
     VAR_19 = -VAR_3;
    }
   } else {

    FUNC_15(VAR_20);
   }
  }
 }

 if (VAR_18 & VAR_9) {
  if (!(VAR_21->flags & VAR_12))
   VAR_20->powersave_mode.mode = VAR_13;
  else if (VAR_21->dynamic_ps_timeout <= 0)
   VAR_20->powersave_mode.mode = VAR_15;
  else
   VAR_20->powersave_mode.mode = VAR_14;





  if (VAR_21->dynamic_ps_timeout >= 0x80)
   VAR_20->powersave_mode.fast_psm_idle_period = 0xFF;
  else
   VAR_20->powersave_mode.fast_psm_idle_period =
     VAR_21->dynamic_ps_timeout << 1;

  if (VAR_20->join_status == VAR_2 &&
      VAR_20->bss_params.aid)
   FUNC_2(VAR_20, &VAR_20->powersave_mode);
 }

 if (VAR_18 & VAR_7) {






 }

 if (VAR_18 & VAR_6) {
  struct wsm_operational_mode VAR_24 = {
   .power_mode = VAR_16,
   .disable_more_flag_usage = 1,
  };

  FUNC_11(VAR_20);

  if ((VAR_20->join_status == VAR_0) &&
      (VAR_21->flags & VAR_11) &&
      !VAR_20->listening) {
   FUNC_1(VAR_20);
   VAR_20->join_status = VAR_1;
  }
  FUNC_12(VAR_20, &VAR_24);
  FUNC_15(VAR_20);
 }

 if (VAR_18 & VAR_10) {
  FUNC_6("[STA] Retry limits: %d (long), %d (short).\n",
    VAR_21->long_frame_max_tx_count,
    VAR_21->short_frame_max_tx_count);
  FUNC_7(&VAR_20->tx_policy_cache.lock);
  VAR_20->long_frame_max_tx_count = VAR_21->long_frame_max_tx_count;
  VAR_20->short_frame_max_tx_count =
   (VAR_21->short_frame_max_tx_count < 0x0F) ?
   VAR_21->short_frame_max_tx_count : 0x0F;
  VAR_20->hw->max_rate_tries = VAR_20->short_frame_max_tx_count;
  FUNC_8(&VAR_20->tx_policy_cache.lock);
 }
 FUNC_5(&VAR_20->conf_mutex);
 FUNC_9(&VAR_20->scan.lock);
 return VAR_19;
}
