
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_supported_band {int n_channels; struct ieee80211_channel* channels; } ;
struct ieee80211_channel {size_t hw_value; } ;
struct cfg80211_chan_def {int dummy; } ;
struct ath_softc {int hw; struct ath_hw* sc_ah; } ;
struct ath_hw {int * channels; int * curchan; } ;
struct ath_common {struct ieee80211_supported_band* sbands; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct ath_hw*,struct cfg80211_chan_def*) ;
 struct ath_common* FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*,int ,int) ;
 int FUNC_3 (struct cfg80211_chan_def*,struct ieee80211_channel*,int ) ;

__attribute__((used)) static void FUNC_4(struct ath_softc *VAR_2, int VAR_3)
{
 struct ieee80211_supported_band *VAR_4;
 struct ieee80211_channel *VAR_5;
 struct ath_hw *VAR_6 = VAR_2->sc_ah;
 struct ath_common *VAR_7 = FUNC_1(VAR_6);
 struct cfg80211_chan_def VAR_8;
 int VAR_9;

 VAR_4 = &VAR_7->sbands[VAR_3];
 for (VAR_9 = 0; VAR_9 < VAR_4->n_channels; VAR_9++) {
  VAR_5 = &VAR_4->channels[VAR_9];
  VAR_6->curchan = &VAR_6->channels[VAR_5->hw_value];
  FUNC_3(&VAR_8, VAR_5, VAR_1);
  FUNC_0(VAR_2->hw, VAR_6, &VAR_8);
  FUNC_2(VAR_6, VAR_0, 1);
 }
}
