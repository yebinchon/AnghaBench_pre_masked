
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num_desc; } ;
struct TYPE_3__ {int num_desc; } ;
struct spider_net_card {TYPE_2__ rx_chain; TYPE_1__ tx_chain; } ;
struct net_device {int dummy; } ;
struct ethtool_ringparam {int rx_pending; int rx_max_pending; int tx_pending; int tx_max_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct spider_net_card* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void
FUNC_1(struct net_device *VAR_2,
     struct ethtool_ringparam *VAR_3)
{
 struct spider_net_card *VAR_4 = FUNC_0(VAR_2);

 VAR_3->tx_max_pending = VAR_1;
 VAR_3->tx_pending = VAR_4->tx_chain.num_desc;
 VAR_3->rx_max_pending = VAR_0;
 VAR_3->rx_pending = VAR_4->rx_chain.num_desc;
}
