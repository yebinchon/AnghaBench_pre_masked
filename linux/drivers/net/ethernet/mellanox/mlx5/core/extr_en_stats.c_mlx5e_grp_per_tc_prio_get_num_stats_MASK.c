
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (struct mlx5_core_dev*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct mlx5e_priv *VAR_3)
{
 struct mlx5_core_dev *VAR_4 = VAR_3->mdev;

 if (!FUNC_0(VAR_4, VAR_2))
  return 0;

 return VAR_0 * VAR_1;
}
