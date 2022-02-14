
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rtw_ieee80211_channel {int flags; scalar_t__ hw_value; } ;
struct mlme_ext_priv {int max_chan_nums; TYPE_1__* channel_set; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;
struct TYPE_2__ {scalar_t__ ScanType; scalar_t__ ChannelNum; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct rtw_ieee80211_channel*,int ,int) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct adapter *VAR_3,
    struct rtw_ieee80211_channel *VAR_4,
    u32 VAR_5,
    struct rtw_ieee80211_channel *VAR_6, u32 VAR_7)
{
 int VAR_8, VAR_9;
 int VAR_10;
 struct mlme_ext_priv *VAR_11 = &VAR_3->mlmeextpriv;


 FUNC_0(VAR_4, 0, sizeof(struct rtw_ieee80211_channel)*VAR_5);


 VAR_9 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  VAR_10 = FUNC_1(VAR_11->channel_set, VAR_6[VAR_8].hw_value);
  if (VAR_6[VAR_8].hw_value && !(VAR_6[VAR_8].flags & VAR_0) &&
      VAR_10 >= 0) {
   VAR_4[VAR_9] = VAR_6[VAR_8];

   if (VAR_11->channel_set[VAR_10].ScanType == VAR_2)
    VAR_4[VAR_9].flags &= VAR_1;

   VAR_9++;
  }
  if (VAR_9 >= VAR_5)
   break;
 }


 if (VAR_9 == 0) {
  for (VAR_8 = 0; VAR_8 < VAR_11->max_chan_nums; VAR_8++) {
   VAR_4[VAR_8].hw_value = VAR_11->channel_set[VAR_8].ChannelNum;

   if (VAR_11->channel_set[VAR_8].ScanType == VAR_2)
    VAR_4[VAR_8].flags &= VAR_1;

   VAR_9++;
  }
 }

 return VAR_9;
}
