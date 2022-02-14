
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int count; } ;
struct TYPE_3__ {int count; } ;
struct skge_port {TYPE_2__ tx_ring; TYPE_1__ rx_ring; } ;
struct net_device {int dummy; } ;
struct ethtool_ringparam {int tx_pending; int rx_pending; int tx_max_pending; int rx_max_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct skge_port* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_2,
    struct ethtool_ringparam *VAR_3)
{
 struct skge_port *VAR_4 = FUNC_0(VAR_2);

 VAR_3->rx_max_pending = VAR_0;
 VAR_3->tx_max_pending = VAR_1;

 VAR_3->rx_pending = VAR_4->rx_ring.count;
 VAR_3->tx_pending = VAR_4->tx_ring.count;
}
