
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct mlx5e_xdp_info_fifo {size_t mask; struct mlx5e_xdp_info* xi; int * pc; } ;
struct mlx5e_xdp_info {int dummy; } ;



__attribute__((used)) static inline void
FUNC_0(struct mlx5e_xdp_info_fifo *VAR_0,
       struct mlx5e_xdp_info *VAR_1)
{
 u32 VAR_2 = (*VAR_0->pc)++ & VAR_0->mask;

 VAR_0->xi[VAR_2] = *VAR_1;
}
