
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int sta_id; } ;
struct il_station_priv {TYPE_1__ common; int pending_frames; } ;
struct il_priv {int mutex; } ;
struct ieee80211_vif {scalar_t__ type; } ;
struct ieee80211_sta {int addr; scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct il_priv* priv; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct il_priv*,struct ieee80211_sta*,int ) ;
 int FUNC_4 (struct il_priv*,int ,int,struct ieee80211_sta*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int
FUNC_7(struct ieee80211_hw *VAR_2, struct ieee80211_vif *VAR_3,
     struct ieee80211_sta *VAR_4)
{
 struct il_priv *VAR_5 = VAR_2->priv;
 struct il_station_priv *VAR_6 = (void *)VAR_4->drv_priv;
 bool VAR_7 = VAR_3->type == VAR_1;
 int VAR_8;
 u8 VAR_9;

 FUNC_0("received request to add station %pM\n", VAR_4->addr);
 FUNC_5(&VAR_5->mutex);
 FUNC_0("proceeding to add station %pM\n", VAR_4->addr);
 VAR_6->common.sta_id = VAR_0;

 FUNC_2(&VAR_6->pending_frames, 0);

 VAR_8 =
     FUNC_4(VAR_5, VAR_4->addr, VAR_7, VAR_4, &VAR_9);
 if (VAR_8) {
  FUNC_1("Unable to add station %pM (%d)\n", VAR_4->addr, VAR_8);

  FUNC_6(&VAR_5->mutex);
  return VAR_8;
 }

 VAR_6->common.sta_id = VAR_9;


 FUNC_0("Initializing rate scaling for station %pM\n", VAR_4->addr);
 FUNC_3(VAR_5, VAR_4, VAR_9);
 FUNC_6(&VAR_5->mutex);

 return 0;
}
