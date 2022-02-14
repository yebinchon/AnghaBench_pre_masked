
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {int alloc; } ;
struct TYPE_3__ {int alloc; } ;
struct ksz_hw {TYPE_2__ rx_desc_info; TYPE_1__ tx_desc_info; } ;
struct ethtool_ringparam {int tx_max_pending; int rx_max_pending; int rx_pending; int tx_pending; } ;
struct dev_priv {struct dev_info* adapter; } ;
struct dev_info {struct ksz_hw hw; } ;


 struct dev_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0,
 struct ethtool_ringparam *VAR_1)
{
 struct dev_priv *VAR_2 = FUNC_0(VAR_0);
 struct dev_info *VAR_3 = VAR_2->adapter;
 struct ksz_hw *VAR_4 = &VAR_3->hw;

 VAR_1->tx_max_pending = (1 << 9);
 VAR_1->tx_pending = VAR_4->tx_desc_info.alloc;
 VAR_1->rx_max_pending = (1 << 9);
 VAR_1->rx_pending = VAR_4->rx_desc_info.alloc;
}
