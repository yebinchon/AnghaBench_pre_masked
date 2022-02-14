
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5i_priv {int qp; } ;
struct mlx5e_priv {struct mlx5_core_dev* mdev; struct mlx5i_priv* ppriv; } ;
struct mlx5_qp_context {int dummy; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_core_dev*,char*,int) ;
 int FUNC_1 (struct mlx5_core_dev*,int ,int ,struct mlx5_qp_context*,int *) ;

void FUNC_2(struct mlx5e_priv *VAR_1)
{
 struct mlx5i_priv *VAR_2 = VAR_1->ppriv;
 struct mlx5_core_dev *VAR_3 = VAR_1->mdev;
 struct mlx5_qp_context VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_0, 0, &VAR_4,
      &VAR_2->qp);
 if (VAR_5)
  FUNC_0(VAR_3, "Failed to modify qp 2RST, err: %d\n", VAR_5);
}
