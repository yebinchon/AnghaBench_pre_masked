
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlx5_vxlan_port {int dummy; } ;
struct mlx5_vxlan {int lock; } ;


 int FUNC_0 (struct mlx5_vxlan*) ;
 struct mlx5_vxlan_port* FUNC_1 (struct mlx5_vxlan*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct mlx5_vxlan_port *FUNC_4(struct mlx5_vxlan *VAR_0, u16 VAR_1)
{
 struct mlx5_vxlan_port *VAR_2;

 if (!FUNC_0(VAR_0))
  return ((void*)0);

 FUNC_2(&VAR_0->lock);
 VAR_2 = FUNC_1(VAR_0, VAR_1);
 FUNC_3(&VAR_0->lock);

 return VAR_2;
}
