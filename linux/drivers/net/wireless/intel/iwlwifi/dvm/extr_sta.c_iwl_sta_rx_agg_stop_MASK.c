
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct iwl_priv {int sta_lock; TYPE_2__* stations; int mutex; } ;
struct iwl_addsta_cmd {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct TYPE_4__ {int modify_mask; } ;
struct TYPE_6__ {int mode; scalar_t__ remove_immediate_ba_tid; TYPE_1__ sta; scalar_t__ station_flags_msk; } ;
struct TYPE_5__ {TYPE_3__ sta; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_priv*,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct iwl_priv*,struct iwl_addsta_cmd*,int ) ;
 int FUNC_2 (struct ieee80211_sta*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct iwl_addsta_cmd*,TYPE_3__*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct iwl_priv *VAR_4, struct ieee80211_sta *VAR_5,
   int VAR_6)
{
 int VAR_7;
 struct iwl_addsta_cmd VAR_8;

 FUNC_3(&VAR_4->mutex);

 VAR_7 = FUNC_2(VAR_5);
 if (VAR_7 == VAR_1) {
  FUNC_0(VAR_4, "Invalid station for AGG tid %d\n", VAR_6);
  return -VAR_0;
 }

 FUNC_5(&VAR_4->sta_lock);
 VAR_4->stations[VAR_7].sta.station_flags_msk = 0;
 VAR_4->stations[VAR_7].sta.sta.modify_mask = VAR_3;
 VAR_4->stations[VAR_7].sta.remove_immediate_ba_tid = (u8)VAR_6;
 VAR_4->stations[VAR_7].sta.mode = VAR_2;
 FUNC_4(&VAR_8, &VAR_4->stations[VAR_7].sta, sizeof(struct iwl_addsta_cmd));
 FUNC_6(&VAR_4->sta_lock);

 return FUNC_1(VAR_4, &VAR_8, 0);
}
