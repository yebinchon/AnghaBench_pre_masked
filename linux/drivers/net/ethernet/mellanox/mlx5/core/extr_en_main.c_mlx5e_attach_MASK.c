
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlx5e_priv {struct net_device* netdev; } ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (struct mlx5e_priv*) ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (struct mlx5_core_dev*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct mlx5_core_dev *VAR_0, void *VAR_1)
{
 struct mlx5e_priv *VAR_2 = VAR_1;
 struct net_device *VAR_3 = VAR_2->netdev;
 int VAR_4;

 if (FUNC_3(VAR_3))
  return 0;

 VAR_4 = FUNC_1(VAR_0);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4) {
  FUNC_2(VAR_0);
  return VAR_4;
 }

 return 0;
}
