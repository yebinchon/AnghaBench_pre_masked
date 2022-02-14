
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {int * inner_indir_tir; int mdev; int * indir_tir; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct mlx5e_priv *VAR_1, bool VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0(VAR_1->mdev, &VAR_1->indir_tir[VAR_3]);

 if (!VAR_2 || !FUNC_1(VAR_1->mdev))
  return;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0(VAR_1->mdev, &VAR_1->inner_indir_tir[VAR_3]);
}
