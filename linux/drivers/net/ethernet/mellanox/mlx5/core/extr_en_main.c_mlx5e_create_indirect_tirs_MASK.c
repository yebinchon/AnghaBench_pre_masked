
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5e_tir {int dummy; } ;
struct mlx5e_priv {struct mlx5e_tir* indir_tir; int mdev; struct mlx5e_tir* inner_indir_tir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (struct mlx5e_priv*,int,void*) ;
 int FUNC_7 (struct mlx5e_priv*,int,void*) ;
 int FUNC_8 (int ,struct mlx5e_tir*,int *,int) ;
 int FUNC_9 (int ,struct mlx5e_tir*) ;
 int FUNC_10 (int ) ;

int FUNC_11(struct mlx5e_priv *VAR_5, bool VAR_6)
{
 struct mlx5e_tir *VAR_7;
 void *VAR_8;
 int VAR_9;
 int VAR_10 = 0;
 int VAR_11;
 u32 *VAR_12;
 int VAR_13;

 VAR_9 = FUNC_1(VAR_3);
 VAR_12 = FUNC_3(VAR_9, VAR_1);
 if (!VAR_12)
  return -VAR_0;

 for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++) {
  FUNC_4(VAR_12, 0, VAR_9);
  VAR_7 = &VAR_5->indir_tir[VAR_13];
  VAR_8 = FUNC_0(VAR_3, VAR_12, VAR_4);
  FUNC_6(VAR_5, VAR_13, VAR_8);
  VAR_11 = FUNC_8(VAR_5->mdev, VAR_7, VAR_12, VAR_9);
  if (VAR_11) {
   FUNC_5(VAR_5->mdev, "create indirect tirs failed, %d\n", VAR_11);
   goto err_destroy_inner_tirs;
  }
 }

 if (!VAR_6 || !FUNC_10(VAR_5->mdev))
  goto out;

 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  FUNC_4(VAR_12, 0, VAR_9);
  VAR_7 = &VAR_5->inner_indir_tir[VAR_10];
  VAR_8 = FUNC_0(VAR_3, VAR_12, VAR_4);
  FUNC_7(VAR_5, VAR_10, VAR_8);
  VAR_11 = FUNC_8(VAR_5->mdev, VAR_7, VAR_12, VAR_9);
  if (VAR_11) {
   FUNC_5(VAR_5->mdev, "create inner indirect tirs failed, %d\n", VAR_11);
   goto err_destroy_inner_tirs;
  }
 }

out:
 FUNC_2(VAR_12);

 return 0;

err_destroy_inner_tirs:
 for (VAR_10--; VAR_10 >= 0; VAR_10--)
  FUNC_9(VAR_5->mdev, &VAR_5->inner_indir_tir[VAR_10]);

 for (VAR_13--; VAR_13 >= 0; VAR_13--)
  FUNC_9(VAR_5->mdev, &VAR_5->indir_tir[VAR_13]);

 FUNC_2(VAR_12);

 return VAR_11;
}
