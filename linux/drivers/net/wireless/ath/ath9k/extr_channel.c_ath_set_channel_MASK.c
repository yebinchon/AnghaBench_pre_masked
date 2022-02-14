
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct survey_info {int dummy; } ;
struct TYPE_6__ {scalar_t__ radar_enabled; } ;
struct ieee80211_hw {TYPE_2__ conf; } ;
struct ieee80211_channel {int hw_value; int center_freq; } ;
struct cfg80211_chan_def {int width; struct ieee80211_channel* chan; } ;
struct TYPE_8__ {scalar_t__ spectral_mode; } ;
struct ath_softc {TYPE_4__ spec_priv; struct ath_hw* sc_ah; TYPE_3__* survey; TYPE_3__* cur_survey; TYPE_1__* cur_chan; struct ieee80211_hw* hw; } ;
struct ath_hw {struct ath9k_channel* channels; struct ath9k_channel* curchan; } ;
struct ath_common {int op_flags; int cc_lock; } ;
struct ath9k_channel {int dummy; } ;
struct TYPE_7__ {int filled; } ;
struct TYPE_5__ {int offchannel; struct cfg80211_chan_def chandef; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ieee80211_hw*,struct ath_hw*,struct cfg80211_chan_def*) ;
 int FUNC_1 (struct ath_common*,TYPE_4__*) ;
 struct ath_common* FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_hw*,int) ;
 int FUNC_5 (struct ath_common*,int ,char*,int ,...) ;
 int FUNC_6 (struct ath_softc*,struct ath9k_channel*) ;
 int FUNC_7 (struct ath_softc*,int) ;
 int FUNC_8 (struct ath_softc*) ;
 int FUNC_9 (TYPE_3__*,int ,int) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 scalar_t__ FUNC_12 (int ,int *) ;

__attribute__((used)) static int FUNC_13(struct ath_softc *VAR_9)
{
 struct ath_hw *VAR_10 = VAR_9->sc_ah;
 struct ath_common *VAR_11 = FUNC_2(VAR_10);
 struct ieee80211_hw *VAR_12 = VAR_9->hw;
 struct ath9k_channel *VAR_13;
 struct cfg80211_chan_def *VAR_14 = &VAR_9->cur_chan->chandef;
 struct ieee80211_channel *VAR_15 = VAR_14->chan;
 int VAR_16 = VAR_15->hw_value;
 unsigned long VAR_17;
 int VAR_18 = -1;
 int VAR_19;

 if (FUNC_12(VAR_2, &VAR_11->op_flags))
  return -VAR_6;

 if (VAR_10->curchan)
  VAR_18 = VAR_10->curchan - &VAR_10->channels[0];

 FUNC_5(VAR_11, VAR_4, "Set channel: %d MHz width: %d\n",
  VAR_15->center_freq, VAR_14->width);


 FUNC_10(&VAR_11->cc_lock, VAR_17);
 FUNC_8(VAR_9);
 FUNC_11(&VAR_11->cc_lock, VAR_17);

 FUNC_0(VAR_12, VAR_10, VAR_14);






 if (!VAR_9->cur_chan->offchannel && VAR_9->cur_survey != &VAR_9->survey[VAR_16]) {
  if (VAR_9->cur_survey)
   VAR_9->cur_survey->filled &= ~VAR_8;

  VAR_9->cur_survey = &VAR_9->survey[VAR_16];

  FUNC_9(VAR_9->cur_survey, 0, sizeof(struct survey_info));
  VAR_9->cur_survey->filled |= VAR_8;
 } else if (!(VAR_9->survey[VAR_16].filled & VAR_8)) {
  FUNC_9(&VAR_9->survey[VAR_16], 0, sizeof(struct survey_info));
 }

 VAR_13 = &VAR_9->sc_ah->channels[VAR_16];
 VAR_19 = FUNC_6(VAR_9, VAR_13);
 if (VAR_19)
  return VAR_19;





 if (VAR_18 >= 0)
  FUNC_7(VAR_9, VAR_18);




 if (VAR_12->conf.radar_enabled) {
  u32 VAR_20;

  VAR_20 = FUNC_3(VAR_10);
  VAR_20 |= VAR_1 |
    VAR_0;
  FUNC_4(VAR_10, VAR_20);
  FUNC_5(VAR_11, VAR_5, "DFS enabled at freq %d\n",
   VAR_15->center_freq);
 } else {

  if (FUNC_12(VAR_3, &VAR_11->op_flags) &&
   VAR_9->spec_priv.spectral_mode == VAR_7)
   FUNC_1(VAR_11, &VAR_9->spec_priv);
 }

 return 0;
}
