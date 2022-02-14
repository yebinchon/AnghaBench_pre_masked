
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int last_cqm_event_rssi; int rssi_thold; int rssi_hyst; } ;
struct rsi_common {TYPE_1__ cqm_info; } ;
struct ieee80211_vif {int dummy; } ;
typedef int s8 ;
typedef enum nl80211_cqm_rssi_threshold_event { ____Placeholder_nl80211_cqm_rssi_threshold_event } nl80211_cqm_rssi_threshold_event ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ieee80211_vif*,int,int,int ) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static void FUNC_2(struct rsi_common *VAR_4,
       u8 *VAR_5,
       s8 VAR_6,
       struct ieee80211_vif *VAR_7)
{
 s8 VAR_8 = VAR_4->cqm_info.last_cqm_event_rssi;
 int VAR_9 = VAR_4->cqm_info.rssi_thold;
 u32 VAR_10 = VAR_4->cqm_info.rssi_hyst;
 enum nl80211_cqm_rssi_threshold_event VAR_11;

 if (VAR_6 < VAR_9 && (VAR_8 == 0 || VAR_6 < (VAR_8 - VAR_10)))
  VAR_11 = VAR_3;
 else if (VAR_6 > VAR_9 &&
   (VAR_8 == 0 || VAR_6 > (VAR_8 + VAR_10)))
  VAR_11 = VAR_2;
 else
  return;

 VAR_4->cqm_info.last_cqm_event_rssi = VAR_6;
 FUNC_1(VAR_1, "CQM: Notifying event: %d\n", VAR_11);
 FUNC_0(VAR_7, VAR_11, VAR_6, VAR_0);

 return;
}
