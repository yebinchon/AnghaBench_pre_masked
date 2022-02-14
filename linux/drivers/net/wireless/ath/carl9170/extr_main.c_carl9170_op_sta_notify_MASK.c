
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct ieee80211_hw {int dummy; } ;
struct carl9170_sta_info {int sleeping; int pending_frames; } ;
typedef enum sta_notify_cmd { ____Placeholder_sta_notify_cmd } sta_notify_cmd ;




 int FUNC_0 (int *) ;
 int FUNC_1 (struct ieee80211_hw*,struct ieee80211_sta*,int) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_0,
       struct ieee80211_vif *VAR_1,
       enum sta_notify_cmd VAR_2,
       struct ieee80211_sta *VAR_3)
{
 struct carl9170_sta_info *VAR_4 = (void *) VAR_3->drv_priv;

 switch (VAR_2) {
 case 128:
  VAR_4->sleeping = 1;
  if (FUNC_0(&VAR_4->pending_frames))
   FUNC_1(VAR_0, VAR_3, 1);
  break;

 case 129:
  VAR_4->sleeping = 0;
  break;
 }
}
