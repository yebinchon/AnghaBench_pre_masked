
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlx5e_priv {int dummy; } ;


 scalar_t__ FUNC_0 (struct mlx5e_priv*,struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct mlx5e_priv*,int ) ;

bool FUNC_4(struct mlx5e_priv *VAR_0,
        struct net_device *VAR_1)
{
 if (FUNC_0(VAR_0, VAR_1))
  return 1;

 return FUNC_1(VAR_1) &&
        FUNC_3(VAR_0, FUNC_2(VAR_1));
}
