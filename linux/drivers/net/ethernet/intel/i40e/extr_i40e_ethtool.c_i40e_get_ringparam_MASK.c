
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct i40e_vsi {TYPE_3__** tx_rings; TYPE_2__** rx_rings; } ;
struct i40e_pf {size_t lan_vsi; struct i40e_vsi** vsi; } ;
struct i40e_netdev_priv {TYPE_1__* vsi; } ;
struct ethtool_ringparam {scalar_t__ rx_jumbo_pending; scalar_t__ rx_mini_pending; int tx_pending; int rx_pending; scalar_t__ rx_jumbo_max_pending; scalar_t__ rx_mini_max_pending; void* tx_max_pending; void* rx_max_pending; } ;
struct TYPE_6__ {int count; } ;
struct TYPE_5__ {int count; } ;
struct TYPE_4__ {struct i40e_pf* back; } ;


 void* VAR_0 ;
 struct i40e_netdev_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_1,
          struct ethtool_ringparam *VAR_2)
{
 struct i40e_netdev_priv *VAR_3 = FUNC_0(VAR_1);
 struct i40e_pf *VAR_4 = VAR_3->vsi->back;
 struct i40e_vsi *VAR_5 = VAR_4->vsi[VAR_4->lan_vsi];

 VAR_2->rx_max_pending = VAR_0;
 VAR_2->tx_max_pending = VAR_0;
 VAR_2->rx_mini_max_pending = 0;
 VAR_2->rx_jumbo_max_pending = 0;
 VAR_2->rx_pending = VAR_5->rx_rings[0]->count;
 VAR_2->tx_pending = VAR_5->tx_rings[0]->count;
 VAR_2->rx_mini_pending = 0;
 VAR_2->rx_jumbo_pending = 0;
}
