
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mvneta_port {TYPE_1__* txqs; TYPE_2__* rxqs; } ;
struct ethtool_coalesce {int tx_max_coalesced_frames; int rx_max_coalesced_frames; int rx_coalesce_usecs; } ;
struct TYPE_4__ {int pkts_coal; int time_coal; } ;
struct TYPE_3__ {int done_pkts_coal; } ;


 struct mvneta_port* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0,
           struct ethtool_coalesce *VAR_1)
{
 struct mvneta_port *VAR_2 = FUNC_0(VAR_0);

 VAR_1->rx_coalesce_usecs = VAR_2->rxqs[0].time_coal;
 VAR_1->rx_max_coalesced_frames = VAR_2->rxqs[0].pkts_coal;

 VAR_1->tx_max_coalesced_frames = VAR_2->txqs[0].done_pkts_coal;
 return 0;
}
