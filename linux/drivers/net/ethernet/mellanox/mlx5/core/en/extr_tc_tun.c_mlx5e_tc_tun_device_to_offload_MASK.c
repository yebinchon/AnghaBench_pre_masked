
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlx5e_tc_tunnel {scalar_t__ (* can_offload ) (struct mlx5e_priv*) ;} ;
struct mlx5e_priv {int dummy; } ;


 struct mlx5e_tc_tunnel* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct mlx5e_priv*) ;

bool FUNC_2(struct mlx5e_priv *VAR_0,
        struct net_device *VAR_1)
{
 struct mlx5e_tc_tunnel *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2 && VAR_2->can_offload(VAR_0))
  return 1;
 else
  return 0;
}
