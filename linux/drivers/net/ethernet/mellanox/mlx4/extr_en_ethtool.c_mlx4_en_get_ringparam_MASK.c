
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlx4_en_priv {TYPE_2__*** tx_ring; TYPE_1__** rx_ring; scalar_t__ port_up; } ;
struct ethtool_ringparam {int tx_pending; int rx_pending; int tx_max_pending; int rx_max_pending; } ;
struct TYPE_4__ {int size; } ;
struct TYPE_3__ {int size; int actual_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct ethtool_ringparam*,int ,int) ;
 struct mlx4_en_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_3,
      struct ethtool_ringparam *VAR_4)
{
 struct mlx4_en_priv *VAR_5 = FUNC_1(VAR_3);

 FUNC_0(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->rx_max_pending = VAR_0;
 VAR_4->tx_max_pending = VAR_1;
 VAR_4->rx_pending = VAR_5->port_up ?
  VAR_5->rx_ring[0]->actual_size : VAR_5->rx_ring[0]->size;
 VAR_4->tx_pending = VAR_5->tx_ring[VAR_2][0]->size;
}
