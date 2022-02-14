
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlx5e_priv {struct net_device* netdev; int mdev; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 struct mlx5e_priv* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct mlx5e_priv*,struct mlx5e_priv*) ;

__attribute__((used)) static bool FUNC_4(struct mlx5e_priv *VAR_1,
      struct net_device *VAR_2)
{
 struct mlx5e_priv *VAR_3;

 VAR_3 = FUNC_2(VAR_2);

 return (FUNC_0(VAR_1->mdev, VAR_0) &&
  FUNC_1(VAR_1->netdev) &&
  FUNC_1(VAR_2) &&
  FUNC_3(VAR_1, VAR_3));
}
