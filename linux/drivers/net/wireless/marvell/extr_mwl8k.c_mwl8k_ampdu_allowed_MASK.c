
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct tx_traffic_info {scalar_t__ pkts; } ;
struct mwl8k_sta {scalar_t__ is_ampdu_allowed; struct tx_traffic_info* tx_stats; } ;
struct ieee80211_sta {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 struct mwl8k_sta* FUNC_1 (struct ieee80211_sta*) ;

__attribute__((used)) static inline bool FUNC_2(struct ieee80211_sta *VAR_2, u8 VAR_3)
{
 struct mwl8k_sta *VAR_4 = FUNC_1(VAR_2);
 struct tx_traffic_info *VAR_5;

 FUNC_0(VAR_3 >= VAR_1);
 VAR_5 = &VAR_4->tx_stats[VAR_3];

 return VAR_4->is_ampdu_allowed &&
  VAR_5->pkts > VAR_0;
}
