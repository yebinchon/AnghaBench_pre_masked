
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucc_geth_private {struct ucc_geth_info* ug_info; } ;
struct ucc_geth_info {int * bdRingLenTx; int * bdRingLenRx; } ;
struct net_device {int dummy; } ;
struct ethtool_ringparam {int tx_pending; int rx_jumbo_pending; int rx_mini_pending; int rx_pending; void* tx_max_pending; void* rx_jumbo_max_pending; void* rx_mini_max_pending; void* rx_max_pending; } ;


 void* VAR_0 ;
 struct ucc_geth_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void
FUNC_1(struct net_device *VAR_1,
                    struct ethtool_ringparam *VAR_2)
{
 struct ucc_geth_private *VAR_3 = FUNC_0(VAR_1);
 struct ucc_geth_info *VAR_4 = VAR_3->ug_info;
 int VAR_5 = 0;

 VAR_2->rx_max_pending = VAR_0;
 VAR_2->rx_mini_max_pending = VAR_0;
 VAR_2->rx_jumbo_max_pending = VAR_0;
 VAR_2->tx_max_pending = VAR_0;

 VAR_2->rx_pending = VAR_4->bdRingLenRx[VAR_5];
 VAR_2->rx_mini_pending = VAR_4->bdRingLenRx[VAR_5];
 VAR_2->rx_jumbo_pending = VAR_4->bdRingLenRx[VAR_5];
 VAR_2->tx_pending = VAR_4->bdRingLenTx[VAR_5];
}
