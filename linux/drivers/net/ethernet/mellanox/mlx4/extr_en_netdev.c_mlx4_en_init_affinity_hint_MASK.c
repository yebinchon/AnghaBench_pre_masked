
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_en_rx_ring {int affinity_mask; } ;
struct mlx4_en_priv {TYPE_2__* mdev; struct mlx4_en_rx_ring** rx_ring; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {int numa_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(struct mlx4_en_priv *VAR_2, int VAR_3)
{
 struct mlx4_en_rx_ring *VAR_4 = VAR_2->rx_ring[VAR_3];
 int VAR_5 = VAR_2->mdev->dev->numa_node;

 if (!FUNC_2(&VAR_4->affinity_mask, VAR_1))
  return -VAR_0;

 FUNC_1(FUNC_0(VAR_3, VAR_5),
   VAR_4->affinity_mask);
 return 0;
}
