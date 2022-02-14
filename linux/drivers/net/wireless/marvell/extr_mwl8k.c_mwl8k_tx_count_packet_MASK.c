
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct tx_traffic_info {scalar_t__ start_time; scalar_t__ pkts; } ;
struct mwl8k_sta {struct tx_traffic_info* tx_stats; } ;
struct ieee80211_sta {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 struct mwl8k_sta* FUNC_1 (struct ieee80211_sta*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline void FUNC_2(struct ieee80211_sta *VAR_3, u8 VAR_4)
{
 struct mwl8k_sta *VAR_5 = FUNC_1(VAR_3);
 struct tx_traffic_info *VAR_6;

 FUNC_0(VAR_4 >= VAR_1);
 VAR_6 = &VAR_5->tx_stats[VAR_4];

 if (VAR_6->start_time == 0)
  VAR_6->start_time = VAR_2;





 if (VAR_2 - VAR_6->start_time > VAR_0) {
  VAR_6->pkts = 0;
  VAR_6->start_time = 0;
 } else
  VAR_6->pkts++;
}
