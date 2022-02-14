
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ieee80211_tx_info {int flags; } ;
struct ieee80211_hdr {int seq_ctrl; } ;
struct ath10k_vif {int tx_seq_no; } ;


 int VAR_0 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline void FUNC_2(struct ieee80211_vif *VAR_3,
          struct sk_buff *VAR_4)
{
 struct ieee80211_tx_info *VAR_5 = FUNC_0(VAR_4);
 struct ieee80211_hdr *VAR_6 = (struct ieee80211_hdr *)VAR_4->data;
 struct ath10k_vif *VAR_7 = (void *)VAR_3->drv_priv;

 if (VAR_5->flags & VAR_1) {
  if (VAR_7->tx_seq_no == 0)
   VAR_7->tx_seq_no = 0x1000;

  if (VAR_5->flags & VAR_2)
   VAR_7->tx_seq_no += 0x10;
  VAR_6->seq_ctrl &= FUNC_1(VAR_0);
  VAR_6->seq_ctrl |= FUNC_1(VAR_7->tx_seq_no);
 }
}
