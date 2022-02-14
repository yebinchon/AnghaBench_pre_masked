
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_tir {int rqt; } ;
struct mlx5e_priv {int max_nch; int mdev; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct mlx5e_priv*,int,int *) ;
 int FUNC_2 (struct mlx5e_priv*,int *) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct mlx5e_priv *VAR_0, struct mlx5e_tir *VAR_1)
{
 int VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->max_nch; VAR_3++) {
  VAR_2 = FUNC_1(VAR_0, 1 , &VAR_1[VAR_3].rqt);
  if (FUNC_3(VAR_2))
   goto err_destroy_rqts;
 }

 return 0;

err_destroy_rqts:
 FUNC_0(VAR_0->mdev, "create rqts failed, %d\n", VAR_2);
 for (VAR_3--; VAR_3 >= 0; VAR_3--)
  FUNC_2(VAR_0, &VAR_1[VAR_3].rqt);

 return VAR_2;
}
