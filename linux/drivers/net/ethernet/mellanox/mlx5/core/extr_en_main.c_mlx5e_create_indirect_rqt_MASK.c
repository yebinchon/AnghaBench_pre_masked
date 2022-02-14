
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_rqt {int dummy; } ;
struct mlx5e_priv {int mdev; struct mlx5e_rqt indir_rqt; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct mlx5e_priv*,int ,struct mlx5e_rqt*) ;

int FUNC_2(struct mlx5e_priv *VAR_1)
{
 struct mlx5e_rqt *VAR_2 = &VAR_1->indir_rqt;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_0, VAR_2);
 if (VAR_3)
  FUNC_0(VAR_1->mdev, "create indirect rqts failed, %d\n", VAR_3);
 return VAR_3;
}
