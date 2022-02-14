
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlx5e_profile {int rq_groups; } ;
struct mlx5e_params {int num_channels; } ;



__attribute__((used)) static inline bool FUNC_0(const struct mlx5e_profile *VAR_0,
          struct mlx5e_params *VAR_1, u64 VAR_2)
{
 return VAR_2 < VAR_1->num_channels * VAR_0->rq_groups;
}
