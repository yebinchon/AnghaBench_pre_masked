
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
typedef scalar_t__ u16 ;
struct ieee80211_sta {int dummy; } ;
struct ath10k_pktlog_hdr {scalar_t__ payload; int log_type; } ;
struct ath10k_per_peer_tx_stats {int failed_pkts; int retry_pkts; int succ_pkts; int flags; int ratecode; void* failed_bytes; void* retry_bytes; void* succ_bytes; } ;
struct ath10k_peer {struct ieee80211_sta* sta; } ;
struct ath10k_10_2_peer_tx_stats {size_t tx_ppdu_cnt; size_t peer_id; int * failed_pkts; int * retry_pkts; int * success_pkts; int * flags; int * ratecode; int * failed_bytes; int * retry_bytes; int * success_bytes; } ;
struct ath10k {int data_lock; struct ath10k_per_peer_tx_stats peer_tx_stats; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int ) ;
 struct ath10k_peer* FUNC_1 (struct ath10k*,size_t) ;
 int FUNC_2 (struct ath10k*,struct ieee80211_sta*,struct ath10k_per_peer_tx_stats*) ;
 int FUNC_3 (struct ath10k*,char*,size_t) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct ath10k *VAR_2, u8 *VAR_3)
{
 struct ath10k_pktlog_hdr *VAR_4 = (struct ath10k_pktlog_hdr *)VAR_3;
 struct ath10k_per_peer_tx_stats *VAR_5 = &VAR_2->peer_tx_stats;
 struct ath10k_10_2_peer_tx_stats *VAR_6;
 struct ieee80211_sta *VAR_7;
 struct ath10k_peer *VAR_8;
 u16 VAR_9 = FUNC_0(VAR_4->log_type);
 u32 VAR_10 = 0, VAR_11;

 if (VAR_9 != VAR_1)
  return;

 VAR_6 = (struct ath10k_10_2_peer_tx_stats *)((VAR_4->payload) +
      VAR_0);

 if (!VAR_6->tx_ppdu_cnt)
  return;

 VAR_10 = VAR_6->peer_id;

 FUNC_4();
 FUNC_6(&VAR_2->data_lock);
 VAR_8 = FUNC_1(VAR_2, VAR_10);
 if (!VAR_8 || !VAR_8->sta) {
  FUNC_3(VAR_2, "Invalid peer id %d in peer stats buffer\n",
       VAR_10);
  goto out;
 }

 VAR_7 = VAR_8->sta;
 for (VAR_11 = 0; VAR_11 < VAR_6->tx_ppdu_cnt; VAR_11++) {
  VAR_5->succ_bytes =
   FUNC_0(VAR_6->success_bytes[VAR_11]);
  VAR_5->retry_bytes =
   FUNC_0(VAR_6->retry_bytes[VAR_11]);
  VAR_5->failed_bytes =
   FUNC_0(VAR_6->failed_bytes[VAR_11]);
  VAR_5->ratecode = VAR_6->ratecode[VAR_11];
  VAR_5->flags = VAR_6->flags[VAR_11];
  VAR_5->succ_pkts = VAR_6->success_pkts[VAR_11];
  VAR_5->retry_pkts = VAR_6->retry_pkts[VAR_11];
  VAR_5->failed_pkts = VAR_6->failed_pkts[VAR_11];

  FUNC_2(VAR_2, VAR_7, VAR_5);
 }
 FUNC_7(&VAR_2->data_lock);
 FUNC_5();

 return;

out:
 FUNC_7(&VAR_2->data_lock);
 FUNC_5();
}
