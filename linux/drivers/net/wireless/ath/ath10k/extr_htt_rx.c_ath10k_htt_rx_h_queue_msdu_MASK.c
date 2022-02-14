
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ieee80211_rx_status {int dummy; } ;
struct TYPE_2__ {int rx_msdus_q; } ;
struct ath10k {TYPE_1__ htt; } ;


 struct ieee80211_rx_status* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct ath10k *VAR_0,
           struct ieee80211_rx_status *VAR_1,
           struct sk_buff *VAR_2)
{
 struct ieee80211_rx_status *VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 *VAR_3 = *VAR_1;

 FUNC_1(&VAR_0->htt.rx_msdus_q, VAR_2);
}
