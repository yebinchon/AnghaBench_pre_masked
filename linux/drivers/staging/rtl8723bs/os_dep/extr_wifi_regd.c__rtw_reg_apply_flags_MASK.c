
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
typedef int u32 ;
typedef int u16 ;
struct wiphy {struct ieee80211_supported_band** bands; } ;
struct mlme_ext_priv {unsigned int max_chan_nums; TYPE_1__* channel_set; } ;
struct ieee80211_supported_band {unsigned int n_channels; struct ieee80211_channel* channels; } ;
struct ieee80211_channel {scalar_t__ flags; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;
struct TYPE_2__ {scalar_t__ ScanType; int ChannelNum; } ;
typedef TYPE_1__ RT_CHANNEL_INFO ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct ieee80211_channel* FUNC_0 (struct wiphy*,int ) ;
 int FUNC_1 (int ,int ) ;
 struct adapter* FUNC_2 (struct wiphy*) ;

__attribute__((used)) static void FUNC_3(struct wiphy *VAR_5)
{
 struct adapter *VAR_6 = FUNC_2(VAR_5);
 struct mlme_ext_priv *VAR_7 = &VAR_6->mlmeextpriv;
 RT_CHANNEL_INFO *VAR_8 = VAR_7->channel_set;
 u8 VAR_9 = VAR_7->max_chan_nums;

 struct ieee80211_supported_band *VAR_10;
 struct ieee80211_channel *VAR_11;
 unsigned int VAR_12, VAR_13;
 u16 VAR_14;
 u32 VAR_15;


 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
  VAR_10 = VAR_5->bands[VAR_12];

  if (VAR_10) {
   for (VAR_13 = 0; VAR_13 < VAR_10->n_channels; VAR_13++) {
    VAR_11 = &VAR_10->channels[VAR_13];

    if (VAR_11)
     VAR_11->flags = VAR_0;
   }
  }
 }


 for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {
  VAR_14 = VAR_8[VAR_12].ChannelNum;
  VAR_15 =
      FUNC_1(VAR_14,
             VAR_2);

  VAR_11 = FUNC_0(VAR_5, VAR_15);
  if (VAR_11) {
   if (VAR_8[VAR_12].ScanType == VAR_4)
    VAR_11->flags = VAR_1;
   else
    VAR_11->flags = 0;
  }
 }
}
