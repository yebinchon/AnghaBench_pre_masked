
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p54_common {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int addr; } ;
struct ieee80211_hw {struct p54_common* priv; } ;
typedef enum sta_notify_cmd { ____Placeholder_sta_notify_cmd } sta_notify_cmd ;



 int FUNC_0 (struct p54_common*,int ) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_hw *VAR_0, struct ieee80211_vif *VAR_1,
         enum sta_notify_cmd VAR_2,
         struct ieee80211_sta *VAR_3)
{
 struct p54_common *VAR_4 = VAR_0->priv;

 switch (VAR_2) {
 case 128:

  FUNC_0(VAR_4, VAR_3->addr);
  break;
 default:
  break;
 }
}
