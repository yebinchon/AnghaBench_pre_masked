
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct mlx5e_priv {struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;


 scalar_t__ FUNC_0 (struct mlx5_core_dev*) ;

__attribute__((used)) static bool FUNC_1(struct mlx5e_priv *VAR_0, struct mlx5e_priv *VAR_1)
{
 struct mlx5_core_dev *VAR_2, *VAR_3;
 u64 VAR_4, VAR_5;

 VAR_2 = VAR_0->mdev;
 VAR_3 = VAR_1->mdev;

 VAR_4 = FUNC_0(VAR_2);
 VAR_5 = FUNC_0(VAR_3);

 return (VAR_4 == VAR_5);
}
