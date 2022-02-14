
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef size_t u32 ;
struct rt_dot11d_info {scalar_t__* channel_map; } ;
struct ieee80211_device {int dev; } ;


 struct rt_dot11d_info* FUNC_0 (struct ieee80211_device*) ;
 size_t VAR_0 ;
 int FUNC_1 (int ,char*) ;

int FUNC_2(struct ieee80211_device *VAR_1, u8 VAR_2)
{
 struct rt_dot11d_info *VAR_3 = FUNC_0(VAR_1);
 u8 VAR_4 = 0;
 u32 VAR_5 = 0;

 for (VAR_5 = 1; VAR_5 <= VAR_0; VAR_5++) {
  if (VAR_3->channel_map[VAR_5] > 0) {
   VAR_4 = VAR_5;
   break;
  }
 }

 if (VAR_2 > VAR_0) {
  FUNC_1(VAR_1->dev, "is_legal_channel(): Invalid Channel\n");
  return VAR_4;
 }

 if (VAR_3->channel_map[VAR_2] > 0)
  return VAR_2;

 return VAR_4;
}
