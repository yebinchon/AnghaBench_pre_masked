
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_en_priv {int* tx_ring_num; int rx_ring_num; scalar_t__* rx_cq; int stride; TYPE_2__* prof; scalar_t__* rx_ring; scalar_t__** tx_cq; scalar_t__** tx_ring; TYPE_1__* dev; } ;
struct TYPE_4__ {int rx_ring_size; } ;
struct TYPE_3__ {int * rx_cpu_rmap; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (struct mlx4_en_priv*,scalar_t__*) ;
 int FUNC_2 (struct mlx4_en_priv*,scalar_t__*,int ,int ) ;
 int FUNC_3 (struct mlx4_en_priv*,scalar_t__*) ;

__attribute__((used)) static void FUNC_4(struct mlx4_en_priv *VAR_1)
{
 int VAR_2, VAR_3;





 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  for (VAR_2 = 0; VAR_2 < VAR_1->tx_ring_num[VAR_3]; VAR_2++) {
   if (VAR_1->tx_ring[VAR_3] && VAR_1->tx_ring[VAR_3][VAR_2])
    FUNC_3(VAR_1,
       &VAR_1->tx_ring[VAR_3][VAR_2]);
   if (VAR_1->tx_cq[VAR_3] && VAR_1->tx_cq[VAR_3][VAR_2])
    FUNC_1(VAR_1, &VAR_1->tx_cq[VAR_3][VAR_2]);
  }
  FUNC_0(VAR_1->tx_ring[VAR_3]);
  FUNC_0(VAR_1->tx_cq[VAR_3]);
 }

 for (VAR_2 = 0; VAR_2 < VAR_1->rx_ring_num; VAR_2++) {
  if (VAR_1->rx_ring[VAR_2])
   FUNC_2(VAR_1, &VAR_1->rx_ring[VAR_2],
    VAR_1->prof->rx_ring_size, VAR_1->stride);
  if (VAR_1->rx_cq[VAR_2])
   FUNC_1(VAR_1, &VAR_1->rx_cq[VAR_2]);
 }

}
