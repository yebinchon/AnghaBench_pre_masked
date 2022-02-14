
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long rx_packets; unsigned long rx_bytes; unsigned long tx_packets; unsigned long tx_bytes; } ;
struct net_device {TYPE_1__ stats; } ;
struct mlx4_en_tx_ring {int bytes; int packets; } ;
struct mlx4_en_rx_ring {int bytes; int packets; } ;
struct mlx4_en_priv {int rx_ring_num; int* tx_ring_num; struct mlx4_en_tx_ring*** tx_ring; struct mlx4_en_rx_ring** rx_ring; int port_up; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 struct mlx4_en_priv* FUNC_2 (struct net_device*) ;

void FUNC_3(struct net_device *VAR_1)
{
 struct mlx4_en_priv *VAR_2 = FUNC_2(VAR_1);
 struct mlx4_en_dev *VAR_3 = VAR_2->mdev;
 unsigned long VAR_4, VAR_5;
 int VAR_6;

 if (!VAR_2->port_up || FUNC_1(VAR_3->dev))
  return;

 VAR_4 = 0;
 VAR_5 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_2->rx_ring_num; VAR_6++) {
  const struct mlx4_en_rx_ring *VAR_7 = VAR_2->rx_ring[VAR_6];

  VAR_4 += FUNC_0(VAR_7->packets);
  VAR_5 += FUNC_0(VAR_7->bytes);
 }
 VAR_1->stats.rx_packets = VAR_4;
 VAR_1->stats.rx_bytes = VAR_5;

 VAR_4 = 0;
 VAR_5 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_2->tx_ring_num[VAR_0]; VAR_6++) {
  const struct mlx4_en_tx_ring *VAR_8 = VAR_2->tx_ring[VAR_0][VAR_6];

  VAR_4 += FUNC_0(VAR_8->packets);
  VAR_5 += FUNC_0(VAR_8->bytes);
 }
 VAR_1->stats.tx_packets = VAR_4;
 VAR_1->stats.tx_bytes = VAR_5;
}
