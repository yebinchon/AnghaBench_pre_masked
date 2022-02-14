
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct mlx5e_priv {struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;


 struct net_device* FUNC_0 (struct net*,int) ;
 struct mlx5e_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static
struct mlx5_core_dev *FUNC_2(struct net *VAR_0, int VAR_1)
{
 struct net_device *VAR_2;
 struct mlx5e_priv *VAR_3;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 VAR_3 = FUNC_1(VAR_2);
 return VAR_3->mdev;
}
