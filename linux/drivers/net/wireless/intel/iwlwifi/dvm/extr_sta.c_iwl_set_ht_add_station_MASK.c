
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct iwl_rxon_context {int dummy; } ;
struct iwl_priv {TYPE_2__* stations; int sta_lock; } ;
struct ieee80211_sta {int dummy; } ;
typedef int __le32 ;
struct TYPE_3__ {int station_flags; } ;
struct TYPE_4__ {TYPE_1__ sta; } ;


 int FUNC_0 (struct iwl_priv*,struct ieee80211_sta*,struct iwl_rxon_context*,int *,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct iwl_priv *VAR_0, u8 VAR_1,
       struct ieee80211_sta *VAR_2,
       struct iwl_rxon_context *VAR_3)
{
 __le32 VAR_4, VAR_5;

 FUNC_0(VAR_0, VAR_2, VAR_3, &VAR_4, &VAR_5);

 FUNC_1(&VAR_0->sta_lock);
 VAR_0->stations[VAR_1].sta.station_flags &= ~VAR_5;
 VAR_0->stations[VAR_1].sta.station_flags |= VAR_4;
}
