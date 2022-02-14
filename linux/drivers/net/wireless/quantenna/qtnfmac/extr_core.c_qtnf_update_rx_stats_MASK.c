
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct qtnf_vif {int stats64; } ;
struct pcpu_sw_netstats {int syncp; int rx_bytes; int rx_packets; } ;
struct TYPE_2__ {int rx_bytes; int rx_packets; } ;
struct net_device {TYPE_1__ stats; } ;


 struct qtnf_vif* FUNC_0 (struct net_device*) ;
 struct pcpu_sw_netstats* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5(struct net_device *VAR_0, const struct sk_buff *VAR_1)
{
 struct qtnf_vif *VAR_2 = FUNC_0(VAR_0);
 struct pcpu_sw_netstats *VAR_3;

 if (FUNC_4(!VAR_2 || !VAR_2->stats64)) {
  VAR_0->stats.rx_packets++;
  VAR_0->stats.rx_bytes += VAR_1->len;
  return;
 }

 VAR_3 = FUNC_1(VAR_2->stats64);

 FUNC_2(&VAR_3->syncp);
 VAR_3->rx_packets++;
 VAR_3->rx_bytes += VAR_1->len;
 FUNC_3(&VAR_3->syncp);
}
