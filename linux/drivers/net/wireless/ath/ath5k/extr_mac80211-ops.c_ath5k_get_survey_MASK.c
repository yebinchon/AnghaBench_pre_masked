
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct survey_info {int filled; int noise; int channel; } ;
struct TYPE_3__ {int chan; } ;
struct ieee80211_conf {TYPE_1__ chandef; } ;
struct ieee80211_hw {struct ieee80211_conf conf; struct ath5k_hw* priv; } ;
struct ath_cycle_counters {unsigned int cycles; unsigned int rx_busy; unsigned int rx_frame; unsigned int tx_frame; } ;
struct ath_common {int clockrate; int cc_lock; struct ath_cycle_counters cc_survey; } ;
struct TYPE_4__ {unsigned int time; unsigned int time_busy; unsigned int time_rx; unsigned int time_tx; } ;
struct ath5k_hw {int ah_noise_floor; TYPE_2__ survey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ath_common* FUNC_0 (struct ath5k_hw*) ;
 int FUNC_1 (struct ath_common*) ;
 int FUNC_2 (struct survey_info*,TYPE_2__*,int) ;
 int FUNC_3 (struct ath_cycle_counters*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct ieee80211_hw *VAR_7, int VAR_8, struct survey_info *VAR_9)
{
 struct ath5k_hw *VAR_10 = VAR_7->priv;
 struct ieee80211_conf *VAR_11 = &VAR_7->conf;
 struct ath_common *VAR_12 = FUNC_0(VAR_10);
 struct ath_cycle_counters *VAR_13 = &VAR_12->cc_survey;
 unsigned int VAR_14 = VAR_12->clockrate * 1000;

 if (VAR_8 != 0)
  return -VAR_0;

 FUNC_4(&VAR_12->cc_lock);
 FUNC_1(VAR_12);
 if (VAR_13->cycles > 0) {
  VAR_10->survey.time += VAR_13->cycles / VAR_14;
  VAR_10->survey.time_busy += VAR_13->rx_busy / VAR_14;
  VAR_10->survey.time_rx += VAR_13->rx_frame / VAR_14;
  VAR_10->survey.time_tx += VAR_13->tx_frame / VAR_14;
 }
 FUNC_3(VAR_13, 0, sizeof(*VAR_13));
 FUNC_5(&VAR_12->cc_lock);

 FUNC_2(VAR_9, &VAR_10->survey, sizeof(*VAR_9));

 VAR_9->channel = VAR_11->chandef.chan;
 VAR_9->noise = VAR_10->ah_noise_floor;
 VAR_9->filled = VAR_2 |
   VAR_1 |
   VAR_3 |
   VAR_4 |
   VAR_5 |
   VAR_6;

 return 0;
}
