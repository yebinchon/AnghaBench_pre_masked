
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlx5e_tc_tunnel {int dummy; } ;


 struct mlx5e_tc_tunnel VAR_0 ;
 struct mlx5e_tc_tunnel VAR_1 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 struct mlx5e_tc_tunnel VAR_2 ;

struct mlx5e_tc_tunnel *FUNC_4(struct net_device *VAR_3)
{
 if (FUNC_3(VAR_3))
  return &VAR_2;
 else if (FUNC_0(VAR_3))
  return &VAR_0;
 else if (FUNC_1(VAR_3) ||
   FUNC_2(VAR_3))
  return &VAR_1;
 else
  return ((void*)0);
}
