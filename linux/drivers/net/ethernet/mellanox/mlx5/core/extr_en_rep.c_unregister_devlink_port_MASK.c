
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_rep_priv {int dl_port; } ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct mlx5_core_dev*,struct mlx5e_rep_priv*) ;

__attribute__((used)) static void FUNC_2(struct mlx5_core_dev *VAR_0,
        struct mlx5e_rep_priv *VAR_1)
{
 if (FUNC_1(VAR_0, VAR_1))
  FUNC_0(&VAR_1->dl_port);
}
