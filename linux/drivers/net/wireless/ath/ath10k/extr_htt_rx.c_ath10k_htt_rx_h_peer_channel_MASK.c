
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct ieee80211_channel {int dummy; } ;
struct TYPE_8__ {int info0; } ;
struct TYPE_6__ {int info0; } ;
struct TYPE_7__ {TYPE_2__ common; } ;
struct TYPE_5__ {int flags; } ;
struct htt_rx_desc {TYPE_4__ mpdu_start; TYPE_3__ msdu_end; TYPE_1__ attention; } ;
struct cfg80211_chan_def {struct ieee80211_channel* chan; } ;
struct ath10k_vif {int vif; } ;
struct ath10k_peer {int vdev_id; } ;
struct ath10k {int data_lock; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct ath10k_vif* FUNC_4 (struct ath10k*,int ) ;
 scalar_t__ FUNC_5 (int ,struct cfg80211_chan_def*) ;
 struct ath10k_peer* FUNC_6 (struct ath10k*,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static struct ieee80211_channel *
FUNC_8(struct ath10k *VAR_3, struct htt_rx_desc *VAR_4)
{
 struct ath10k_peer *VAR_5;
 struct ath10k_vif *VAR_6;
 struct cfg80211_chan_def VAR_7;
 u16 VAR_8;

 FUNC_7(&VAR_3->data_lock);

 if (!VAR_4)
  return ((void*)0);

 if (VAR_4->attention.flags &
     FUNC_2(VAR_0))
  return ((void*)0);

 if (!(VAR_4->msdu_end.common.info0 &
       FUNC_2(VAR_2)))
  return ((void*)0);

 VAR_8 = FUNC_0(FUNC_3(VAR_4->mpdu_start.info0),
       VAR_1);

 VAR_5 = FUNC_6(VAR_3, VAR_8);
 if (!VAR_5)
  return ((void*)0);

 VAR_6 = FUNC_4(VAR_3, VAR_5->vdev_id);
 if (FUNC_1(!VAR_6))
  return ((void*)0);

 if (FUNC_5(VAR_6->vif, &VAR_7))
  return ((void*)0);

 return VAR_7.chan;
}
