
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_en_rx_ring {int dummy; } ;
struct mlx4_en_priv {int rx_ring_num; int * prof; int num_tx_rings_p_up; int * tx_cq; int * tx_ring; int * tx_ring_num; int hwtstamp_config; int * rx_cq; int * rx_ring; } ;
struct mlx4_en_port_profile {int dummy; } ;
struct mlx4_en_cq {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static void FUNC_1(struct mlx4_en_priv *VAR_1,
    struct mlx4_en_priv *VAR_2)
{
 int VAR_3;
 FUNC_0(VAR_1->rx_ring, VAR_2->rx_ring,
        sizeof(struct mlx4_en_rx_ring *) * VAR_2->rx_ring_num);
 FUNC_0(VAR_1->rx_cq, VAR_2->rx_cq,
        sizeof(struct mlx4_en_cq *) * VAR_2->rx_ring_num);
 FUNC_0(&VAR_1->hwtstamp_config, &VAR_2->hwtstamp_config,
        sizeof(VAR_1->hwtstamp_config));
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_1->tx_ring_num[VAR_3] = VAR_2->tx_ring_num[VAR_3];
  VAR_1->tx_ring[VAR_3] = VAR_2->tx_ring[VAR_3];
  VAR_1->tx_cq[VAR_3] = VAR_2->tx_cq[VAR_3];
 }
 VAR_1->num_tx_rings_p_up = VAR_2->num_tx_rings_p_up;
 VAR_1->rx_ring_num = VAR_2->rx_ring_num;
 FUNC_0(VAR_1->prof, VAR_2->prof, sizeof(struct mlx4_en_port_profile));
}
