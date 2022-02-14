
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {int netdev; } ;
struct wiphy {int dummy; } ;
struct mwifiex_bssdescriptor {int channel; } ;
struct TYPE_2__ {int band; struct mwifiex_bssdescriptor bss_descriptor; } ;
struct cfg80211_chan_def {int dummy; } ;
struct mwifiex_private {scalar_t__ ht_param_present; TYPE_1__ curr_bss_params; scalar_t__ media_connected; struct cfg80211_chan_def bss_chandef; } ;
struct ieee80211_channel {int dummy; } ;
typedef enum nl80211_channel_type { ____Placeholder_nl80211_channel_type } nl80211_channel_type ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mwifiex_private*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct cfg80211_chan_def*,struct ieee80211_channel*,int) ;
 scalar_t__ FUNC_2 (struct cfg80211_chan_def*) ;
 int FUNC_3 (int ,int) ;
 struct ieee80211_channel* FUNC_4 (struct wiphy*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct mwifiex_private*) ;
 struct mwifiex_private* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct wiphy *VAR_3,
     struct wireless_dev *VAR_4,
     struct cfg80211_chan_def *VAR_5)
{
 struct mwifiex_private *VAR_6 = FUNC_7(VAR_4->netdev);
 struct mwifiex_bssdescriptor *VAR_7;
 struct ieee80211_channel *VAR_8;
 enum nl80211_channel_type VAR_9;
 enum nl80211_band VAR_10;
 int VAR_11;
 int VAR_12 = -VAR_0;

 if (FUNC_0(VAR_6) == VAR_1 &&
     FUNC_2(&VAR_6->bss_chandef)) {
  *VAR_5 = VAR_6->bss_chandef;
  VAR_12 = 0;
 } else if (VAR_6->media_connected) {
  VAR_7 = &VAR_6->curr_bss_params.bss_descriptor;
  VAR_10 = FUNC_5(VAR_6->curr_bss_params.band);
  VAR_11 = FUNC_3(VAR_7->channel, VAR_10);
  VAR_8 = FUNC_4(VAR_3, VAR_11);

  if (VAR_6->ht_param_present) {
   VAR_9 = FUNC_6(VAR_6);
   FUNC_1(VAR_5, VAR_8, VAR_9);
  } else {
   FUNC_1(VAR_5, VAR_8,
      VAR_2);
  }
  VAR_12 = 0;
 }

 return VAR_12;
}
