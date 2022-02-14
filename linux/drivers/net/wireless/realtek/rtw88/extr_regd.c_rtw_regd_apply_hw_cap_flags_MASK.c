
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {struct ieee80211_supported_band** bands; } ;
struct TYPE_2__ {int bw; } ;
struct rtw_efuse {TYPE_1__ hw_cap; } ;
struct rtw_dev {struct rtw_efuse efuse; } ;
struct ieee80211_supported_band {int n_channels; struct ieee80211_channel* channels; } ;
struct ieee80211_hw {struct rtw_dev* priv; } ;
struct ieee80211_channel {int flags; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 struct ieee80211_hw* FUNC_1 (struct wiphy*) ;

__attribute__((used)) static void FUNC_2(struct wiphy *VAR_4)
{
 struct ieee80211_hw *VAR_5 = FUNC_1(VAR_4);
 struct ieee80211_supported_band *VAR_6;
 struct ieee80211_channel *VAR_7;
 struct rtw_dev *VAR_8 = VAR_5->priv;
 struct rtw_efuse *VAR_9 = &VAR_8->efuse;
 int VAR_10;

 if (VAR_9->hw_cap.bw & FUNC_0(VAR_3))
  return;

 VAR_6 = VAR_4->bands[VAR_1];
 if (!VAR_6)
  goto out_5g;

 for (VAR_10 = 0; VAR_10 < VAR_6->n_channels; VAR_10++) {
  VAR_7 = &VAR_6->channels[VAR_10];
  VAR_7->flags |= VAR_0;
 }

out_5g:
 VAR_6 = VAR_4->bands[VAR_2];
 if (!VAR_6)
  return;

 for (VAR_10 = 0; VAR_10 < VAR_6->n_channels; VAR_10++) {
  VAR_7 = &VAR_6->channels[VAR_10];
  VAR_7->flags |= VAR_0;
 }
}
