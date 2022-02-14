
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct il_priv {TYPE_2__* stations; } ;
struct ieee80211_sta_ht_cap {scalar_t__ ampdu_density; scalar_t__ ampdu_factor; int ht_supported; } ;
struct ieee80211_sta {int smps_mode; struct ieee80211_sta_ht_cap ht_cap; } ;
typedef int __le32 ;
struct TYPE_3__ {int station_flags; } ;
struct TYPE_4__ {TYPE_1__ sta; } ;


 int FUNC_0 (char*,char*) ;



 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct il_priv*,struct ieee80211_sta_ht_cap*) ;

__attribute__((used)) static void
FUNC_4(struct il_priv *VAR_5, u8 VAR_6, struct ieee80211_sta *VAR_7)
{
 struct ieee80211_sta_ht_cap *VAR_8 = &VAR_7->ht_cap;
 __le32 VAR_9;

 if (!VAR_7 || !VAR_8->ht_supported)
  goto done;

 FUNC_0("spatial multiplexing power save mode: %s\n",
  (VAR_7->smps_mode == 128) ? "static" :
  (VAR_7->smps_mode == 130) ? "dynamic" :
  "disabled");

 VAR_9 = VAR_5->stations[VAR_6].sta.station_flags;

 VAR_9 &= ~(VAR_4 | VAR_3);

 switch (VAR_7->smps_mode) {
 case 128:
  VAR_9 |= VAR_3;
  break;
 case 130:
  VAR_9 |= VAR_4;
  break;
 case 129:
  break;
 default:
  FUNC_1("Invalid MIMO PS mode %d\n", VAR_7->smps_mode);
  break;
 }

 VAR_9 |=
     FUNC_2((u32) VAR_8->
   ampdu_factor << VAR_2);

 VAR_9 |=
     FUNC_2((u32) VAR_8->
   ampdu_density << VAR_0);

 if (FUNC_3(VAR_5, &VAR_7->ht_cap))
  VAR_9 |= VAR_1;
 else
  VAR_9 &= ~VAR_1;

 VAR_5->stations[VAR_6].sta.station_flags = VAR_9;
done:
 return;
}
