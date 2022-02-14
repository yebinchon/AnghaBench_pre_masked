
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_en_priv {int* tx_ring_num; int rx_ring_num; scalar_t__** tx_cq; scalar_t__** tx_ring; scalar_t__* rx_cq; int stride; scalar_t__* rx_ring; int port; TYPE_2__* mdev; TYPE_1__* dev; struct mlx4_en_port_profile* prof; } ;
struct mlx4_en_port_profile {int rx_ring_size; int tx_ring_size; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int rx_cpu_rmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mlx4_en_priv*,char*) ;
 scalar_t__ FUNC_2 (struct mlx4_en_priv*,scalar_t__*,int ,int,int,int) ;
 scalar_t__ FUNC_3 (struct mlx4_en_priv*,scalar_t__*,int ,int ,int,int) ;
 scalar_t__ FUNC_4 (struct mlx4_en_priv*,scalar_t__*,int ,int ,int,int) ;
 int FUNC_5 (struct mlx4_en_priv*,scalar_t__*) ;
 int FUNC_6 (struct mlx4_en_priv*,scalar_t__*,int ,int ) ;
 int FUNC_7 (struct mlx4_en_priv*,scalar_t__*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(struct mlx4_en_priv *VAR_4)
{
 struct mlx4_en_port_profile *VAR_5 = VAR_4->prof;
 int VAR_6, VAR_7;
 int VAR_8;


 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  for (VAR_6 = 0; VAR_6 < VAR_4->tx_ring_num[VAR_7]; VAR_6++) {
   VAR_8 = FUNC_0(VAR_6 % FUNC_9());
   if (FUNC_2(VAR_4, &VAR_4->tx_cq[VAR_7][VAR_6],
           VAR_5->tx_ring_size, VAR_6, VAR_7, VAR_8))
    goto err;

   if (FUNC_4(VAR_4, &VAR_4->tx_ring[VAR_7][VAR_6],
         VAR_5->tx_ring_size,
         VAR_3, VAR_8, VAR_6))
    goto err;
  }
 }


 for (VAR_6 = 0; VAR_6 < VAR_4->rx_ring_num; VAR_6++) {
  VAR_8 = FUNC_0(VAR_6 % FUNC_9());
  if (FUNC_2(VAR_4, &VAR_4->rx_cq[VAR_6],
          VAR_5->rx_ring_size, VAR_6, VAR_2, VAR_8))
   goto err;

  if (FUNC_3(VAR_4, &VAR_4->rx_ring[VAR_6],
        VAR_5->rx_ring_size, VAR_4->stride,
        VAR_8, VAR_6))
   goto err;

 }





 return 0;

err:
 FUNC_1(VAR_4, "Failed to allocate NIC resources\n");
 for (VAR_6 = 0; VAR_6 < VAR_4->rx_ring_num; VAR_6++) {
  if (VAR_4->rx_ring[VAR_6])
   FUNC_6(VAR_4, &VAR_4->rx_ring[VAR_6],
      VAR_5->rx_ring_size,
      VAR_4->stride);
  if (VAR_4->rx_cq[VAR_6])
   FUNC_5(VAR_4, &VAR_4->rx_cq[VAR_6]);
 }
 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  for (VAR_6 = 0; VAR_6 < VAR_4->tx_ring_num[VAR_7]; VAR_6++) {
   if (VAR_4->tx_ring[VAR_7][VAR_6])
    FUNC_7(VAR_4,
       &VAR_4->tx_ring[VAR_7][VAR_6]);
   if (VAR_4->tx_cq[VAR_7][VAR_6])
    FUNC_5(VAR_4, &VAR_4->tx_cq[VAR_7][VAR_6]);
  }
 }
 return -VAR_0;
}
