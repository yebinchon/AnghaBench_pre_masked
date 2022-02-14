
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_station_priv {int asleep; int client; int pending_frames; } ;
struct iwl_priv {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum sta_notify_cmd { ____Placeholder_sta_notify_cmd } sta_notify_cmd ;


 int FUNC_0 (struct iwl_priv*,char*) ;
 int VAR_0 ;
 struct iwl_priv* FUNC_1 (struct ieee80211_hw*) ;


 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ieee80211_hw*,struct ieee80211_sta*,int) ;
 int FUNC_5 (struct ieee80211_sta*) ;
 int FUNC_6 (struct iwl_priv*,int) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_1,
      struct ieee80211_vif *VAR_2,
      enum sta_notify_cmd VAR_3,
      struct ieee80211_sta *VAR_4)
{
 struct iwl_priv *VAR_5 = FUNC_1(VAR_1);
 struct iwl_station_priv *VAR_6 = (void *)VAR_4->drv_priv;
 int VAR_7;

 FUNC_0(VAR_5, "enter\n");

 switch (VAR_3) {
 case 128:
  FUNC_2(!VAR_6->client);
  VAR_6->asleep = 1;
  if (FUNC_3(&VAR_6->pending_frames) > 0)
   FUNC_4(VAR_1, VAR_4, 1);
  break;
 case 129:
  FUNC_2(!VAR_6->client);
  if (!VAR_6->asleep)
   break;
  VAR_6->asleep = 0;
  VAR_7 = FUNC_5(VAR_4);
  if (VAR_7 != VAR_0)
   FUNC_6(VAR_5, VAR_7);
  break;
 default:
  break;
 }
 FUNC_0(VAR_5, "leave\n");
}
