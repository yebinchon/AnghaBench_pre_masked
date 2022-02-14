
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct il_priv {int sta_lock; TYPE_2__* stations; int mutex; } ;
struct il_addsta_cmd {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct TYPE_4__ {int modify_mask; } ;
struct TYPE_6__ {int mode; scalar_t__ remove_immediate_ba_tid; TYPE_1__ sta; scalar_t__ station_flags_msk; } ;
struct TYPE_5__ {TYPE_3__ sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct il_priv*,struct il_addsta_cmd*,int ) ;
 int FUNC_2 (struct ieee80211_sta*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct il_addsta_cmd*,TYPE_3__*,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

int
FUNC_7(struct il_priv *VAR_5, struct ieee80211_sta *VAR_6, int VAR_7)
{
 unsigned long VAR_8;
 int VAR_9;
 struct il_addsta_cmd VAR_10;

 FUNC_3(&VAR_5->mutex);

 VAR_9 = FUNC_2(VAR_6);
 if (VAR_9 == VAR_2) {
  FUNC_0("Invalid station for AGG tid %d\n", VAR_7);
  return -VAR_1;
 }

 FUNC_5(&VAR_5->sta_lock, VAR_8);
 VAR_5->stations[VAR_9].sta.station_flags_msk = 0;
 VAR_5->stations[VAR_9].sta.sta.modify_mask = VAR_4;
 VAR_5->stations[VAR_9].sta.remove_immediate_ba_tid = (u8) VAR_7;
 VAR_5->stations[VAR_9].sta.mode = VAR_3;
 FUNC_4(&VAR_10, &VAR_5->stations[VAR_9].sta,
        sizeof(struct il_addsta_cmd));
 FUNC_6(&VAR_5->sta_lock, VAR_8);

 return FUNC_1(VAR_5, &VAR_10, VAR_0);
}
