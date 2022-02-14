
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u16 ;
struct rt_dot11d_info {int* channel_map; int* max_tx_pwr_dbm_list; int state; int country_ie_buf; int country_ie_len; } ;
struct ieee80211_device {int dev; } ;
struct chnl_txpower_triple {size_t first_channel; int num_channels; int max_tx_pwr_dbm; } ;


 int VAR_0 ;
 struct rt_dot11d_info* FUNC_0 (struct ieee80211_device*) ;
 int VAR_1 ;
 int FUNC_1 (struct ieee80211_device*,size_t*) ;
 int FUNC_2 (int ,size_t*,int ) ;
 int FUNC_3 (int*,int,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*,...) ;

void FUNC_6(struct ieee80211_device *VAR_2, u8 *VAR_3,
       u16 VAR_4, u8 *VAR_5)
{
 struct rt_dot11d_info *VAR_6 = FUNC_0(VAR_2);
 u8 VAR_7, VAR_8, VAR_9, VAR_10;
 struct chnl_txpower_triple *VAR_11;

 FUNC_3(VAR_6->channel_map, 0, VAR_1 + 1);
 FUNC_3(VAR_6->max_tx_pwr_dbm_list, 0xFF, VAR_1 + 1);
 VAR_10 = 0;
 VAR_9 = (VAR_4 - 3) / 3;
 VAR_11 = (struct chnl_txpower_triple *)(VAR_5 + 3);
 for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
  if (VAR_10 >= VAR_11->first_channel) {



   FUNC_4(VAR_2->dev, "dot11d_update_country_ie(): Invalid country IE, skip it........1\n");
   return;
  }
  if (VAR_1 < (VAR_11->first_channel + VAR_11->num_channels)) {



   FUNC_4(VAR_2->dev, "dot11d_update_country_ie(): Invalid country IE, skip it........2\n");
   return;
  }

  for (VAR_8 = 0; VAR_8 < VAR_11->num_channels; VAR_8++) {
   VAR_6->channel_map[VAR_11->first_channel + VAR_8] = 1;
   VAR_6->max_tx_pwr_dbm_list[VAR_11->first_channel + VAR_8] = VAR_11->max_tx_pwr_dbm;
   VAR_10 = VAR_11->first_channel + VAR_8;
  }

  VAR_11 = (struct chnl_txpower_triple *)((u8 *)VAR_11 + 3);
 }
 FUNC_5(VAR_2->dev, "Channel List:");
 for (VAR_7 = 1; VAR_7 <= VAR_1; VAR_7++)
  if (VAR_6->channel_map[VAR_7] > 0)
   FUNC_5(VAR_2->dev, " %d", VAR_7);
 FUNC_5(VAR_2->dev, "\n");

 FUNC_1(VAR_2, VAR_3);

 VAR_6->country_ie_len = VAR_4;
 FUNC_2(VAR_6->country_ie_buf, VAR_5, VAR_4);
 VAR_6->state = VAR_0;
}
