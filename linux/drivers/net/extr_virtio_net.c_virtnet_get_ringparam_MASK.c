
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virtnet_info {TYPE_2__* sq; TYPE_1__* rq; } ;
struct net_device {int dummy; } ;
struct ethtool_ringparam {void* tx_max_pending; void* tx_pending; void* rx_max_pending; void* rx_pending; } ;
struct TYPE_4__ {int vq; } ;
struct TYPE_3__ {int vq; } ;


 struct virtnet_info* FUNC_0 (struct net_device*) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
    struct ethtool_ringparam *VAR_1)
{
 struct virtnet_info *VAR_2 = FUNC_0(VAR_0);

 VAR_1->rx_max_pending = FUNC_1(VAR_2->rq[0].vq);
 VAR_1->tx_max_pending = FUNC_1(VAR_2->sq[0].vq);
 VAR_1->rx_pending = VAR_1->rx_max_pending;
 VAR_1->tx_pending = VAR_1->tx_max_pending;
}
