
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_flow_steering {int fgs_cache; } ;
struct mlx5_flow_group {int ftes_hash; } ;


 int FUNC_0 (int ,struct mlx5_flow_group*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct mlx5_flow_steering *VAR_0,
          struct mlx5_flow_group *VAR_1)
{
 FUNC_1(&VAR_1->ftes_hash);
 FUNC_0(VAR_0->fgs_cache, VAR_1);
}
