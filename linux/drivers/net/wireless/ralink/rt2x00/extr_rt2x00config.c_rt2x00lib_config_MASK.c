
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


typedef size_t u16 ;
struct TYPE_12__ {int channel; } ;
struct rt2x00lib_conf {TYPE_6__ rf; TYPE_6__ channel; struct ieee80211_conf* conf; } ;
struct TYPE_7__ {int * channels_info; int * channels; } ;
struct rt2x00_dev {int autowakeup_work; int workqueue; int beacon_int; scalar_t__ last_beacon; int flags; int long_retry; int short_retry; int tx_power; int curr_freq; int curr_band; TYPE_3__* ops; int rf_channel; TYPE_1__ spec; } ;
struct TYPE_11__ {TYPE_4__* chan; } ;
struct ieee80211_conf {int flags; size_t ps_dtim_period; int long_frame_max_tx_count; int short_frame_max_tx_count; int power_level; TYPE_5__ chandef; } ;
typedef int libconf ;
struct TYPE_10__ {size_t hw_value; int center_freq; int band; } ;
struct TYPE_9__ {TYPE_2__* lib; } ;
struct TYPE_8__ {int (* config ) (struct rt2x00_dev*,struct rt2x00lib_conf*,unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct ieee80211_conf*) ;
 scalar_t__ FUNC_3 (struct ieee80211_conf*) ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (TYPE_6__*,int *,int) ;
 int FUNC_5 (struct rt2x00lib_conf*,int ,int) ;
 size_t FUNC_6 (int ) ;
 int FUNC_7 (int ,int *,size_t) ;
 scalar_t__ FUNC_8 (struct rt2x00_dev*,int ) ;
 size_t FUNC_9 (struct rt2x00_dev*,struct ieee80211_conf*) ;
 int FUNC_10 (struct rt2x00_dev*,int) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (struct rt2x00_dev*,struct rt2x00lib_conf*,unsigned int) ;
 scalar_t__ FUNC_13 (int ,int *) ;

void FUNC_14(struct rt2x00_dev *VAR_11,
        struct ieee80211_conf *VAR_12,
        unsigned int VAR_13)
{
 struct rt2x00lib_conf VAR_14;
 u16 VAR_15;
 u16 VAR_16;
 u16 VAR_17;
 u16 VAR_18;

 FUNC_5(&VAR_14, 0, sizeof(VAR_14));

 VAR_14.conf = VAR_12;

 if (VAR_13 & VAR_5) {
  if (!FUNC_2(VAR_12))
   FUNC_11(VAR_1, &VAR_11->flags);
  else
   FUNC_1(VAR_1, &VAR_11->flags);

  if (FUNC_3(VAR_12)) {
   FUNC_11(VAR_0, &VAR_11->flags);
   VAR_15 = FUNC_9(VAR_11, VAR_12);
  } else {
   FUNC_1(VAR_0, &VAR_11->flags);
   VAR_15 = VAR_12->chandef.chan->hw_value;
  }

  FUNC_4(&VAR_14.rf,
         &VAR_11->spec.channels[VAR_15],
         sizeof(VAR_14.rf));

  FUNC_4(&VAR_14.channel,
         &VAR_11->spec.channels_info[VAR_15],
         sizeof(VAR_14.channel));


  VAR_11->rf_channel = VAR_14.rf.channel;
 }

 if (FUNC_8(VAR_11, VAR_9) &&
     (VAR_13 & VAR_6))
  FUNC_0(&VAR_11->autowakeup_work);




 VAR_11->ops->lib->config(VAR_11, &VAR_14, VAR_13);

 if (VAR_12->flags & VAR_8)
  FUNC_11(VAR_3, &VAR_11->flags);
 else
  FUNC_1(VAR_3, &VAR_11->flags);

 if (VAR_12->flags & VAR_7)
  FUNC_11(VAR_2, &VAR_11->flags);
 else
  FUNC_1(VAR_2, &VAR_11->flags);

 VAR_11->curr_band = VAR_12->chandef.chan->band;
 VAR_11->curr_freq = VAR_12->chandef.chan->center_freq;
 VAR_11->tx_power = VAR_12->power_level;
 VAR_11->short_retry = VAR_12->short_frame_max_tx_count;
 VAR_11->long_retry = VAR_12->long_frame_max_tx_count;





 if (VAR_13 & VAR_5)
  FUNC_10(VAR_11, 0);

 if (FUNC_13(VAR_4, &VAR_11->flags) &&
     FUNC_8(VAR_11, VAR_9) &&
     (VAR_13 & VAR_6) &&
     (VAR_12->flags & VAR_8)) {
  VAR_18 = (long)VAR_10 - (long)VAR_11->last_beacon;
  VAR_17 = FUNC_6(VAR_11->beacon_int);

  if (VAR_18 > VAR_17)
   VAR_18 = 0;

  VAR_16 = (VAR_12->ps_dtim_period * VAR_17) - VAR_18;
  FUNC_7(VAR_11->workqueue,
       &VAR_11->autowakeup_work,
       VAR_16 - 15);
 }
}
