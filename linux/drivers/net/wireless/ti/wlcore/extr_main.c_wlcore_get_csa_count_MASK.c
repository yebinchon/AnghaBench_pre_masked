
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wl12xx_vif {int dummy; } ;
struct wl1271 {int dummy; } ;
struct ieee80211_channel_sw_ie {int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (struct wl1271*,struct wl12xx_vif*,int ) ;

__attribute__((used)) static int FUNC_1(struct wl1271 *VAR_2, struct wl12xx_vif *VAR_3,
    u8 *VAR_4)
{
 const u8 *VAR_5;
 const struct ieee80211_channel_sw_ie *VAR_6;

 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = (struct ieee80211_channel_sw_ie *)&VAR_5[2];
 *VAR_4 = VAR_6->count;

 return 0;
}
