
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count; } ;
struct qcaspi {TYPE_1__ txr; } ;
struct net_device {int dummy; } ;
struct ethtool_ringparam {int rx_max_pending; int rx_pending; int tx_pending; int tx_max_pending; } ;


 int VAR_0 ;
 struct qcaspi* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void
FUNC_1(struct net_device *VAR_1, struct ethtool_ringparam *VAR_2)
{
 struct qcaspi *VAR_3 = FUNC_0(VAR_1);

 VAR_2->rx_max_pending = 4;
 VAR_2->tx_max_pending = VAR_0;
 VAR_2->rx_pending = 4;
 VAR_2->tx_pending = VAR_3->txr.count;
}
