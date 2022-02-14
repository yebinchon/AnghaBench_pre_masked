
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct ieee80211_sta {int dummy; } ;
struct htt_resp_hdr {int dummy; } ;
struct TYPE_2__ {int num_ppdu; int ppdu_len; scalar_t__ payload; } ;
struct htt_resp {TYPE_1__ peer_tx_stats; } ;
struct htt_per_peer_tx_stats_ind {int tx_duration; int failed_pkts; int retry_pkts; int succ_pkts; int flags; int ratecode; int failed_bytes; int retry_bytes; int succ_bytes; int peer_id; } ;
struct ath10k_per_peer_tx_stats {void* duration; void* failed_pkts; void* retry_pkts; void* succ_pkts; int flags; int ratecode; void* failed_bytes; void* retry_bytes; void* succ_bytes; } ;
struct ath10k_peer {struct ieee80211_sta* sta; } ;
struct ath10k {int data_lock; struct ath10k_per_peer_tx_stats peer_tx_stats; } ;
typedef int __le32 ;


 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 struct ath10k_peer* FUNC_2 (struct ath10k*,int) ;
 int FUNC_3 (struct ath10k*,struct ieee80211_sta*,struct ath10k_per_peer_tx_stats*) ;
 int FUNC_4 (struct ath10k*,char*,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct ath10k *VAR_0,
     struct sk_buff *VAR_1)
{
 struct htt_resp *VAR_2 = (struct htt_resp *)VAR_1->data;
 struct ath10k_per_peer_tx_stats *VAR_3 = &VAR_0->peer_tx_stats;
 struct htt_per_peer_tx_stats_ind *VAR_4;
 struct ieee80211_sta *VAR_5;
 struct ath10k_peer *VAR_6;
 int VAR_7, VAR_8;
 u8 VAR_9, VAR_10;

 VAR_10 = VAR_2->peer_tx_stats.num_ppdu;
 VAR_9 = VAR_2->peer_tx_stats.ppdu_len * sizeof(__le32);

 if (VAR_1->len < sizeof(struct htt_resp_hdr) + VAR_10 * VAR_9) {
  FUNC_4(VAR_0, "Invalid peer stats buf length %d\n", VAR_1->len);
  return;
 }

 VAR_4 = (struct htt_per_peer_tx_stats_ind *)
   (VAR_2->peer_tx_stats.payload);
 VAR_7 = FUNC_0(VAR_4->peer_id);

 FUNC_5();
 FUNC_7(&VAR_0->data_lock);
 VAR_6 = FUNC_2(VAR_0, VAR_7);
 if (!VAR_6 || !VAR_6->sta) {
  FUNC_4(VAR_0, "Invalid peer id %d peer stats buffer\n",
       VAR_7);
  goto out;
 }

 VAR_5 = VAR_6->sta;
 for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
  VAR_4 = (struct htt_per_peer_tx_stats_ind *)
      (VAR_2->peer_tx_stats.payload + VAR_8 * VAR_9);

  VAR_3->succ_bytes = FUNC_1(VAR_4->succ_bytes);
  VAR_3->retry_bytes = FUNC_1(VAR_4->retry_bytes);
  VAR_3->failed_bytes =
    FUNC_1(VAR_4->failed_bytes);
  VAR_3->ratecode = VAR_4->ratecode;
  VAR_3->flags = VAR_4->flags;
  VAR_3->succ_pkts = FUNC_0(VAR_4->succ_pkts);
  VAR_3->retry_pkts = FUNC_0(VAR_4->retry_pkts);
  VAR_3->failed_pkts = FUNC_0(VAR_4->failed_pkts);
  VAR_3->duration = FUNC_0(VAR_4->tx_duration);

  FUNC_3(VAR_0, VAR_5, VAR_3);
 }

out:
 FUNC_8(&VAR_0->data_lock);
 FUNC_6();
}
