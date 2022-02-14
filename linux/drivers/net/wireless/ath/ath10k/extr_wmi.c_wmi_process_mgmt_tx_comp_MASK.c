
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct mgmt_tx_compl_params {int desc_id; scalar_t__ ack_rssi; scalar_t__ status; } ;
struct TYPE_2__ {int is_valid_ack_signal; scalar_t__ ack_signal; } ;
struct ieee80211_tx_info {TYPE_1__ status; int flags; } ;
struct ath10k_wmi {int mgmt_pending_tx; } ;
struct ath10k_mgmt_tx_pkt_addr {int paddr; struct sk_buff* vaddr; } ;
struct ath10k {int data_lock; int hw; int dev; struct ath10k_wmi wmi; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_3 ;
 int FUNC_1 (struct ath10k*,char*,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 struct ath10k_mgmt_tx_pkt_addr* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,struct sk_buff*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(struct ath10k *VAR_4, struct mgmt_tx_compl_params *VAR_5)
{
 struct ath10k_mgmt_tx_pkt_addr *VAR_6;
 struct ath10k_wmi *VAR_7 = &VAR_4->wmi;
 struct ieee80211_tx_info *VAR_8;
 struct sk_buff *VAR_9;
 int VAR_10;

 FUNC_6(&VAR_4->data_lock);

 VAR_6 = FUNC_3(&VAR_7->mgmt_pending_tx, VAR_5->desc_id);
 if (!VAR_6) {
  FUNC_1(VAR_4, "received mgmt tx completion for invalid msdu_id: %d\n",
       VAR_5->desc_id);
  VAR_10 = -VAR_2;
  goto out;
 }

 VAR_9 = VAR_6->vaddr;
 FUNC_2(VAR_4->dev, VAR_6->paddr,
    VAR_9->len, VAR_1);
 VAR_8 = FUNC_0(VAR_9);

 if (VAR_5->status) {
  VAR_8->flags &= ~VAR_3;
 } else {
  VAR_8->flags |= VAR_3;
  VAR_8->status.ack_signal = VAR_0 +
       VAR_5->ack_rssi;
  VAR_8->status.is_valid_ack_signal = 1;
 }

 FUNC_5(VAR_4->hw, VAR_9);

 VAR_10 = 0;

out:
 FUNC_4(&VAR_7->mgmt_pending_tx, VAR_5->desc_id);
 FUNC_7(&VAR_4->data_lock);
 return VAR_10;
}
