
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_en_tx_ring {int dummy; } ;
struct mlx4_en_rx_desc {int dummy; } ;
struct mlx4_en_priv {void** tx_cq; void** tx_ring; int * tx_ring_num; int stride; struct mlx4_en_port_profile* prof; int dev; int port; int mdev; int flags; int rx_ring_num; int num_tx_rings_p_up; int hwtstamp_config; } ;
struct mlx4_en_port_profile {int * tx_ring_num; int flags; int rx_ring_num; int num_tx_rings_p_up; int hwtstamp_config; } ;
struct mlx4_en_cq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct mlx4_en_priv *VAR_6,
        struct mlx4_en_priv *VAR_7,
        struct mlx4_en_port_profile *VAR_8)
{
 int VAR_9;

 FUNC_2(&VAR_6->hwtstamp_config, &VAR_8->hwtstamp_config,
        sizeof(VAR_6->hwtstamp_config));
 VAR_6->num_tx_rings_p_up = VAR_8->num_tx_rings_p_up;
 VAR_6->rx_ring_num = VAR_8->rx_ring_num;
 VAR_6->flags = VAR_8->flags;
 VAR_6->mdev = VAR_7->mdev;
 VAR_6->port = VAR_7->port;
 VAR_6->dev = VAR_7->dev;
 VAR_6->prof = VAR_8;
 VAR_6->stride = FUNC_3(sizeof(struct mlx4_en_rx_desc) +
      VAR_0 * VAR_4);

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  VAR_6->tx_ring_num[VAR_9] = VAR_8->tx_ring_num[VAR_9];
  if (!VAR_6->tx_ring_num[VAR_9])
   continue;

  VAR_6->tx_ring[VAR_9] = FUNC_0(VAR_3,
       sizeof(struct mlx4_en_tx_ring *),
       VAR_2);
  if (!VAR_6->tx_ring[VAR_9])
   goto err_free_tx;

  VAR_6->tx_cq[VAR_9] = FUNC_0(VAR_3,
     sizeof(struct mlx4_en_cq *),
     VAR_2);
  if (!VAR_6->tx_cq[VAR_9]) {
   FUNC_1(VAR_6->tx_ring[VAR_9]);
   goto err_free_tx;
  }
 }

 return 0;

err_free_tx:
 while (VAR_9--) {
  FUNC_1(VAR_6->tx_ring[VAR_9]);
  FUNC_1(VAR_6->tx_cq[VAR_9]);
 }
 return -VAR_1;
}
