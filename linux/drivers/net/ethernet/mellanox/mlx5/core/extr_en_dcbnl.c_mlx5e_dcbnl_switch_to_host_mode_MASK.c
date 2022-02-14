
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_dcbx {scalar_t__ mode; } ;
struct mlx5e_priv {int mdev; struct mlx5e_dcbx dcbx; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,struct mlx5e_dcbx*) ;
 int FUNC_1 (struct mlx5e_priv*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct mlx5e_priv *VAR_1)
{
 struct mlx5e_dcbx *VAR_2 = &VAR_1->dcbx;
 int VAR_3;

 if (!FUNC_0(VAR_1->mdev, VAR_2))
  return 0;

 if (VAR_2->mode == VAR_0)
  return 0;

 VAR_3 = FUNC_1(VAR_1, VAR_0);
 if (VAR_3)
  return VAR_3;

 VAR_2->mode = VAR_0;
 return 0;
}
