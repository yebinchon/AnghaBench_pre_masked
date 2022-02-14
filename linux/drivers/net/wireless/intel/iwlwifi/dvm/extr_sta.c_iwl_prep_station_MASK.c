
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct iwl_station_priv {struct iwl_rxon_context* ctx; } ;
struct TYPE_3__ {size_t sta_id; int addr; } ;
struct TYPE_4__ {int station_flags; TYPE_1__ sta; scalar_t__ mode; } ;
struct iwl_station_entry {int used; int ctxid; TYPE_2__ sta; } ;
struct iwl_rxon_context {size_t ap_sta_id; size_t bcast_sta_id; int ctxid; int station_flags; } ;
struct iwl_priv {int num_stations; struct iwl_station_entry* stations; } ;
struct iwl_addsta_cmd {int dummy; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_priv*,char*,size_t,size_t const*) ;
 int FUNC_1 (struct iwl_priv*,char*,size_t) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ,size_t const*) ;
 scalar_t__ FUNC_3 (size_t const*) ;
 int FUNC_4 (struct iwl_priv*,size_t,struct ieee80211_sta*,struct iwl_rxon_context*) ;
 int FUNC_5 (int ,size_t const*,int ) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_7 (int) ;

u8 FUNC_8(struct iwl_priv *VAR_7, struct iwl_rxon_context *VAR_8,
      const u8 *VAR_9, bool VAR_10, struct ieee80211_sta *VAR_11)
{
 struct iwl_station_entry *VAR_12;
 int VAR_13;
 u8 VAR_14 = VAR_2;

 if (VAR_10)
  VAR_14 = VAR_8->ap_sta_id;
 else if (FUNC_3(VAR_9))
  VAR_14 = VAR_8->bcast_sta_id;
 else
  for (VAR_13 = VAR_4; VAR_13 < VAR_1; VAR_13++) {
   if (FUNC_2(VAR_7->stations[VAR_13].sta.sta.addr,
          VAR_9)) {
    VAR_14 = VAR_13;
    break;
   }

   if (!VAR_7->stations[VAR_13].used &&
       VAR_14 == VAR_2)
    VAR_14 = VAR_13;
  }





 if (FUNC_7(VAR_14 == VAR_2))
  return VAR_14;






 if (VAR_7->stations[VAR_14].used & VAR_6) {
  FUNC_1(VAR_7, "STA %d already in process of being "
          "added.\n", VAR_14);
  return VAR_14;
 }

 if ((VAR_7->stations[VAR_14].used & VAR_3) &&
     (VAR_7->stations[VAR_14].used & VAR_5) &&
     FUNC_2(VAR_7->stations[VAR_14].sta.sta.addr, VAR_9)) {
  FUNC_0(VAR_7, "STA %d (%pM) already added, not "
    "adding again.\n", VAR_14, VAR_9);
  return VAR_14;
 }

 VAR_12 = &VAR_7->stations[VAR_14];
 VAR_12->used = VAR_3;
 FUNC_0(VAR_7, "Add STA to driver ID %d: %pM\n",
   VAR_14, VAR_9);
 VAR_7->num_stations++;


 FUNC_6(&VAR_12->sta, 0, sizeof(struct iwl_addsta_cmd));
 FUNC_5(VAR_12->sta.sta.addr, VAR_9, VAR_0);
 VAR_12->sta.mode = 0;
 VAR_12->sta.sta.sta_id = VAR_14;
 VAR_12->sta.station_flags = VAR_8->station_flags;
 VAR_12->ctxid = VAR_8->ctxid;

 if (VAR_11) {
  struct iwl_station_priv *VAR_15;

  VAR_15 = (void *)VAR_11->drv_priv;
  VAR_15->ctx = VAR_8;
 }






 FUNC_4(VAR_7, VAR_14, VAR_11, VAR_8);

 return VAR_14;

}
