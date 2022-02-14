
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int rx_bytes; int rx_packets; } ;
struct net_device {TYPE_1__ stats; } ;
struct hostap_80211_rx_status {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,struct sk_buff*,struct hostap_80211_rx_status*,int ) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_1, struct sk_buff *VAR_2,
         struct hostap_80211_rx_status *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_0);
 VAR_1->stats.rx_packets++;
 VAR_1->stats.rx_bytes += VAR_4;
}
