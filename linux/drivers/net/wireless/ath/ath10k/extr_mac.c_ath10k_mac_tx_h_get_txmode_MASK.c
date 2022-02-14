
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct ieee80211_vif {scalar_t__ type; } ;
struct ieee80211_sta {scalar_t__ tdls; } ;
struct ieee80211_hdr {int frame_control; } ;
struct ath10k_skb_cb {int flags; } ;
struct TYPE_4__ {int target_version_major; } ;
struct ath10k {int dev_flags; TYPE_3__* running_fw; TYPE_1__ htt; } ;
typedef enum ath10k_hw_txrx_mode { ____Placeholder_ath10k_hw_txrx_mode } ath10k_hw_txrx_mode ;
typedef int __le16 ;
struct TYPE_5__ {int * fw_features; } ;
struct TYPE_6__ {TYPE_2__ fw_file; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ath10k_skb_cb* FUNC_0 (struct sk_buff*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static enum ath10k_hw_txrx_mode
FUNC_6(struct ath10k *VAR_8,
      struct ieee80211_vif *VAR_9,
      struct ieee80211_sta *VAR_10,
      struct sk_buff *VAR_11)
{
 const struct ieee80211_hdr *VAR_12 = (void *)VAR_11->data;
 const struct ath10k_skb_cb *VAR_13 = FUNC_0(VAR_11);
 __le16 VAR_14 = VAR_12->frame_control;

 if (!VAR_9 || VAR_9->type == VAR_7)
  return VAR_5;

 if (FUNC_2(VAR_14))
  return VAR_3;
 if (VAR_8->htt.target_version_major < 3 &&
     (FUNC_3(VAR_14) || FUNC_4(VAR_14)) &&
     !FUNC_5(VAR_1,
        VAR_8->running_fw->fw_file.fw_features))
  return VAR_3;
 if (FUNC_1(VAR_14) && VAR_10 && VAR_10->tdls)
  return VAR_2;

 if (FUNC_5(VAR_0, &VAR_8->dev_flags) ||
     VAR_13->flags & VAR_6)
  return VAR_5;

 return VAR_4;
}
