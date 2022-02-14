
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_dot11d_info {int state; } ;
struct ieee80211_device {int dummy; } ;





 int FUNC_0 (struct ieee80211_device*) ;
 struct rt_dot11d_info* FUNC_1 (struct ieee80211_device*) ;
 int FUNC_2 (struct ieee80211_device*) ;

void FUNC_3(struct ieee80211_device *VAR_0)
{
 struct rt_dot11d_info *VAR_1 = FUNC_1(VAR_0);

 switch (VAR_1->state) {
 case 129:
  VAR_1->state = 130;
  break;

 case 130:
  if (FUNC_0(VAR_0) == 0) {

   FUNC_2(VAR_0);
  }
  break;
 case 128:
  break;
 }
}
