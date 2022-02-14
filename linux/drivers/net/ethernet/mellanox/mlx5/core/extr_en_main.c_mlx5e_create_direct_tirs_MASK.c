
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int rqtn; } ;
struct mlx5e_tir {TYPE_1__ rqt; } ;
struct mlx5e_priv {int max_nch; int mdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (struct mlx5e_priv*,int ,void*) ;
 int FUNC_7 (int ,struct mlx5e_tir*,int *,int) ;
 int FUNC_8 (int ,struct mlx5e_tir*) ;
 scalar_t__ FUNC_9 (int) ;

int FUNC_10(struct mlx5e_priv *VAR_4, struct mlx5e_tir *VAR_5)
{
 struct mlx5e_tir *VAR_6;
 void *VAR_7;
 int VAR_8;
 int VAR_9 = 0;
 u32 *VAR_10;
 int VAR_11;

 VAR_8 = FUNC_1(VAR_2);
 VAR_10 = FUNC_3(VAR_8, VAR_1);
 if (!VAR_10)
  return -VAR_0;

 for (VAR_11 = 0; VAR_11 < VAR_4->max_nch; VAR_11++) {
  FUNC_4(VAR_10, 0, VAR_8);
  VAR_6 = &VAR_5[VAR_11];
  VAR_7 = FUNC_0(VAR_2, VAR_10, VAR_3);
  FUNC_6(VAR_4, VAR_6->rqt.rqtn, VAR_7);
  VAR_9 = FUNC_7(VAR_4->mdev, VAR_6, VAR_10, VAR_8);
  if (FUNC_9(VAR_9))
   goto err_destroy_ch_tirs;
 }

 goto out;

err_destroy_ch_tirs:
 FUNC_5(VAR_4->mdev, "create tirs failed, %d\n", VAR_9);
 for (VAR_11--; VAR_11 >= 0; VAR_11--)
  FUNC_8(VAR_4->mdev, &VAR_5[VAR_11]);

out:
 FUNC_2(VAR_10);

 return VAR_9;
}
