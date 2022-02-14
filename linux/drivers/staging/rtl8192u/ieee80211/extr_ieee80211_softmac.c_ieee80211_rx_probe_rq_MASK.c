
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int tx_probe_rs; int rx_probe_rq; } ;
struct ieee80211_device {TYPE_1__ softmac_stats; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_device*,int *) ;
 scalar_t__ FUNC_1 (struct ieee80211_device*,struct sk_buff*,int *) ;

__attribute__((used)) static inline void
FUNC_2(struct ieee80211_device *VAR_1, struct sk_buff *VAR_2)
{
 u8 VAR_3[VAR_0];


 VAR_1->softmac_stats.rx_probe_rq++;

 if (FUNC_1(VAR_1, VAR_2, VAR_3)) {

  VAR_1->softmac_stats.tx_probe_rs++;
  FUNC_0(VAR_1, VAR_3);
 }
}
