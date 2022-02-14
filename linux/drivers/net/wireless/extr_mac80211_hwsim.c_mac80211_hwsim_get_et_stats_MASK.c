
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mac80211_hwsim_data {int group; int ps; int tx_failed; int tx_dropped; int rx_bytes; int rx_pkts; int tx_bytes; int tx_pkts; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct mac80211_hwsim_data* priv; } ;
struct ethtool_stats {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_hw *VAR_1,
     struct ieee80211_vif *VAR_2,
     struct ethtool_stats *VAR_3, u64 *VAR_4)
{
 struct mac80211_hwsim_data *VAR_5 = VAR_1->priv;
 int VAR_6 = 0;

 VAR_4[VAR_6++] = VAR_5->tx_pkts;
 VAR_4[VAR_6++] = VAR_5->tx_bytes;
 VAR_4[VAR_6++] = VAR_5->rx_pkts;
 VAR_4[VAR_6++] = VAR_5->rx_bytes;
 VAR_4[VAR_6++] = VAR_5->tx_dropped;
 VAR_4[VAR_6++] = VAR_5->tx_failed;
 VAR_4[VAR_6++] = VAR_5->ps;
 VAR_4[VAR_6++] = VAR_5->group;

 FUNC_0(VAR_6 != VAR_0);
}
