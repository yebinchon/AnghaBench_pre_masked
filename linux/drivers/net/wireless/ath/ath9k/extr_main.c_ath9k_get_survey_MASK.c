
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct survey_info {struct ieee80211_channel* channel; } ;
struct ieee80211_supported_band {int n_channels; struct ieee80211_channel* channels; } ;
struct ieee80211_hw {TYPE_1__* wiphy; struct ath_softc* priv; } ;
struct ieee80211_channel {int hw_value; } ;
struct ath_softc {int * survey; int sc_ah; } ;
struct ath_common {int cc_lock; } ;
struct TYPE_2__ {struct ieee80211_supported_band** bands; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 struct ath_common* FUNC_1 (int ) ;
 int FUNC_2 (struct ath_softc*) ;
 int FUNC_3 (struct survey_info*,int *,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct ieee80211_hw *VAR_5, int VAR_6,
        struct survey_info *VAR_7)
{
 struct ath_softc *VAR_8 = VAR_5->priv;
 struct ath_common *VAR_9 = FUNC_1(VAR_8->sc_ah);
 struct ieee80211_supported_band *VAR_10;
 struct ieee80211_channel *VAR_11;
 unsigned long VAR_12;
 int VAR_13;

 if (FUNC_0(VAR_0))
  return -VAR_2;

 FUNC_4(&VAR_9->cc_lock, VAR_12);
 if (VAR_6 == 0)
  FUNC_2(VAR_8);

 VAR_10 = VAR_5->wiphy->bands[VAR_3];
 if (VAR_10 && VAR_6 >= VAR_10->n_channels) {
  VAR_6 -= VAR_10->n_channels;
  VAR_10 = ((void*)0);
 }

 if (!VAR_10)
  VAR_10 = VAR_5->wiphy->bands[VAR_4];

 if (!VAR_10 || VAR_6 >= VAR_10->n_channels) {
  FUNC_5(&VAR_9->cc_lock, VAR_12);
  return -VAR_1;
 }

 VAR_11 = &VAR_10->channels[VAR_6];
 VAR_13 = VAR_11->hw_value;
 FUNC_3(VAR_7, &VAR_8->survey[VAR_13], sizeof(*VAR_7));
 VAR_7->channel = VAR_11;
 FUNC_5(&VAR_9->cc_lock, VAR_12);

 return 0;
}
