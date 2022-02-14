
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_fc_bulk {int dummy; } ;
struct mlx5_fc {int id; struct mlx5_fc_bulk* bulk; } ;



__attribute__((used)) static void FUNC_0(struct mlx5_fc *VAR_0, struct mlx5_fc_bulk *VAR_1,
    u32 VAR_2)
{
 VAR_0->bulk = VAR_1;
 VAR_0->id = VAR_2;
}
