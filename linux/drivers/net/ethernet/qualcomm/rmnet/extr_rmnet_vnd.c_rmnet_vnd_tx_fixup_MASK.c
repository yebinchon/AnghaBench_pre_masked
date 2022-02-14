
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct rmnet_priv {int pcpu_stats; } ;
struct TYPE_2__ {int tx_bytes; int tx_pkts; } ;
struct rmnet_pcpu_stats {int syncp; TYPE_1__ stats; } ;
struct net_device {int dummy; } ;


 struct rmnet_priv* FUNC_0 (struct net_device*) ;
 struct rmnet_pcpu_stats* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct sk_buff *VAR_0, struct net_device *VAR_1)
{
 struct rmnet_priv *VAR_2 = FUNC_0(VAR_1);
 struct rmnet_pcpu_stats *VAR_3;

 VAR_3 = FUNC_1(VAR_2->pcpu_stats);

 FUNC_2(&VAR_3->syncp);
 VAR_3->stats.tx_pkts++;
 VAR_3->stats.tx_bytes += VAR_0->len;
 FUNC_3(&VAR_3->syncp);
}
