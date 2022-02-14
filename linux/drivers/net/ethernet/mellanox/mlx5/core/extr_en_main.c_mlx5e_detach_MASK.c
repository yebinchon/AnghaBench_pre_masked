
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlx5e_priv {struct net_device* netdev; } ;
typedef void mlx5_core_dev ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct mlx5e_priv*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct mlx5_core_dev *VAR_0, void *VAR_1)
{
 struct mlx5e_priv *VAR_2 = VAR_1;
 struct net_device *VAR_3 = VAR_2->netdev;






 if (!FUNC_3(VAR_3))
  return;

 FUNC_2(VAR_2);
 FUNC_1(VAR_0);
}
