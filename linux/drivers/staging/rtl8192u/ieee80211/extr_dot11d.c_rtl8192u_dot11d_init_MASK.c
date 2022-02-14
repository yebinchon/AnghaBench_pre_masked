
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_dot11d_info {int dot11d_enabled; int max_tx_pwr_dbm_list; int channel_map; scalar_t__ country_ie_len; int state; } ;
struct ieee80211_device {int dev; } ;


 int VAR_0 ;
 struct rt_dot11d_info* FUNC_0 (struct ieee80211_device*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct ieee80211_device*) ;
 int FUNC_2 (int ,int,scalar_t__) ;
 int FUNC_3 (int ,char*) ;

void FUNC_4(struct ieee80211_device *VAR_2)
{
 struct rt_dot11d_info *VAR_3 = FUNC_0(VAR_2);

 VAR_3->dot11d_enabled = 0;

 VAR_3->state = VAR_0;
 VAR_3->country_ie_len = 0;
 FUNC_2(VAR_3->channel_map, 0, VAR_1 + 1);
 FUNC_2(VAR_3->max_tx_pwr_dbm_list, 0xFF, VAR_1 + 1);
 FUNC_1(VAR_2);

 FUNC_3(VAR_2->dev, "rtl8192u_dot11d_init()\n");
}
