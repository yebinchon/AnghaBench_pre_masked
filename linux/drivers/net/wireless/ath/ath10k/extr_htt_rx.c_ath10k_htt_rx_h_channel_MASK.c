
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_rx_status {int freq; int band; } ;
struct ieee80211_channel {int center_freq; int band; } ;
struct htt_rx_desc {int dummy; } ;
struct ath10k {int data_lock; struct ieee80211_channel* tgt_oper_chan; struct ieee80211_channel* rx_channel; struct ieee80211_channel* scan_channel; } ;


 struct ieee80211_channel* FUNC_0 (struct ath10k*) ;
 struct ieee80211_channel* FUNC_1 (struct ath10k*,struct htt_rx_desc*) ;
 struct ieee80211_channel* FUNC_2 (struct ath10k*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static bool FUNC_5(struct ath10k *VAR_0,
        struct ieee80211_rx_status *VAR_1,
        struct htt_rx_desc *VAR_2,
        u32 VAR_3)
{
 struct ieee80211_channel *VAR_4;

 FUNC_3(&VAR_0->data_lock);
 VAR_4 = VAR_0->scan_channel;
 if (!VAR_4)
  VAR_4 = VAR_0->rx_channel;
 if (!VAR_4)
  VAR_4 = FUNC_1(VAR_0, VAR_2);
 if (!VAR_4)
  VAR_4 = FUNC_2(VAR_0, VAR_3);
 if (!VAR_4)
  VAR_4 = FUNC_0(VAR_0);
 if (!VAR_4)
  VAR_4 = VAR_0->tgt_oper_chan;
 FUNC_4(&VAR_0->data_lock);

 if (!VAR_4)
  return 0;

 VAR_1->band = VAR_4->band;
 VAR_1->freq = VAR_4->center_freq;

 return 1;
}
