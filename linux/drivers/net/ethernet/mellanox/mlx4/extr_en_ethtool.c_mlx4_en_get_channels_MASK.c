
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlx4_en_priv {int* tx_ring_num; TYPE_1__* prof; int rx_ring_num; TYPE_3__* mdev; } ;
struct ethtool_channels {int tx_count; int rx_count; int max_tx; int max_rx; } ;
struct TYPE_5__ {int max_num_tx_rings_p_up; } ;
struct TYPE_6__ {TYPE_2__ profile; } ;
struct TYPE_4__ {int num_up; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 struct mlx4_en_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1,
     struct ethtool_channels *VAR_2)
{
 struct mlx4_en_priv *VAR_3 = FUNC_1(VAR_1);

 VAR_2->max_rx = FUNC_0(VAR_1);
 VAR_2->max_tx = VAR_3->mdev->profile.max_num_tx_rings_p_up;

 VAR_2->rx_count = VAR_3->rx_ring_num;
 VAR_2->tx_count = VAR_3->tx_ring_num[VAR_0] /
       VAR_3->prof->num_up;
}
