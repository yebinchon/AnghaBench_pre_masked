
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_rx_status {int flag; int mactime; } ;
struct TYPE_3__ {int tsf_timestamp; } ;
struct TYPE_4__ {TYPE_1__ common; } ;
struct htt_rx_desc {TYPE_2__ ppdu_end; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ath10k *VAR_1,
        struct ieee80211_rx_status *VAR_2,
        struct htt_rx_desc *VAR_3)
{






 VAR_2->mactime = FUNC_0(VAR_3->ppdu_end.common.tsf_timestamp);
 VAR_2->flag |= VAR_0;
}
