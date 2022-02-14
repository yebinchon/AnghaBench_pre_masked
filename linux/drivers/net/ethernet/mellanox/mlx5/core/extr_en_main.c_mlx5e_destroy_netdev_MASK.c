
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlx5e_profile {int (* cleanup ) (struct mlx5e_priv*) ;} ;
struct mlx5e_priv {struct net_device* netdev; struct mlx5e_profile* profile; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct mlx5e_priv*) ;

void FUNC_2(struct mlx5e_priv *VAR_0)
{
 const struct mlx5e_profile *VAR_1 = VAR_0->profile;
 struct net_device *VAR_2 = VAR_0->netdev;

 if (VAR_1->cleanup)
  VAR_1->cleanup(VAR_0);
 FUNC_0(VAR_2);
}
