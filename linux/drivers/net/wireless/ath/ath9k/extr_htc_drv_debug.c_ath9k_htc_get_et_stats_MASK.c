
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct ath9k_htc_priv* priv; } ;
struct ethtool_stats {int dummy; } ;
struct ath9k_htc_priv {int dummy; } ;
struct TYPE_6__ {int skb_completed_bytes; int skb_completed; } ;
struct TYPE_5__ {int skb_success_bytes; int skb_success; } ;
struct TYPE_4__ {int * phy_err_stats; int decrypt_busy_err; int post_delim_crc_err; int pre_delim_crc_err; int mic_err; int phy_err; int decrypt_crc_err; int crc_err; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 TYPE_3__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;

void FUNC_2(struct ieee80211_hw *VAR_8,
       struct ieee80211_vif *VAR_9,
       struct ethtool_stats *VAR_10, u64 *VAR_11)
{
 struct ath9k_htc_priv *VAR_12 = VAR_8->priv;
 int VAR_13 = 0;

 VAR_11[VAR_13++] = VAR_5.skb_success;
 VAR_11[VAR_13++] = VAR_5.skb_success_bytes;
 VAR_11[VAR_13++] = VAR_4.skb_completed;
 VAR_11[VAR_13++] = VAR_4.skb_completed_bytes;

 FUNC_0(VAR_7);

 VAR_11[VAR_13++] = VAR_6.crc_err;
 VAR_11[VAR_13++] = VAR_6.decrypt_crc_err;
 VAR_11[VAR_13++] = VAR_6.phy_err;
 VAR_11[VAR_13++] = VAR_6.mic_err;
 VAR_11[VAR_13++] = VAR_6.pre_delim_crc_err;
 VAR_11[VAR_13++] = VAR_6.post_delim_crc_err;
 VAR_11[VAR_13++] = VAR_6.decrypt_busy_err;

 VAR_11[VAR_13++] = VAR_6.phy_err_stats[VAR_3];
 VAR_11[VAR_13++] = VAR_6.phy_err_stats[VAR_2];
 VAR_11[VAR_13++] = VAR_6.phy_err_stats[VAR_1];

 FUNC_1(VAR_13 != VAR_0);
}
