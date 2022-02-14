
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_en_priv {TYPE_1__* mdev; } ;
struct mlx4_en_cq {int mcq; } ;
struct TYPE_2__ {int uar_lock; int uar_map; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int *) ;

void FUNC_1(struct mlx4_en_priv *VAR_1, struct mlx4_en_cq *VAR_2)
{
 FUNC_0(&VAR_2->mcq, VAR_0, VAR_1->mdev->uar_map,
      &VAR_1->mdev->uar_lock);
}
