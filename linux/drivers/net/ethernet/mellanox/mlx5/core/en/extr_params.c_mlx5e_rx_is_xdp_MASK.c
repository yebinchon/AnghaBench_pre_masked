
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_xsk_param {int dummy; } ;
struct mlx5e_params {scalar_t__ xdp_prog; } ;



__attribute__((used)) static inline bool FUNC_0(struct mlx5e_params *VAR_0,
       struct mlx5e_xsk_param *VAR_1)
{
 return VAR_0->xdp_prog || VAR_1;
}
