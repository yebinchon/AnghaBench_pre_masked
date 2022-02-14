
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_xdp_info_fifo {size_t mask; int * cc; struct mlx5e_xdp_info* xi; } ;
struct mlx5e_xdp_info {int dummy; } ;



__attribute__((used)) static inline struct mlx5e_xdp_info
FUNC_0(struct mlx5e_xdp_info_fifo *VAR_0)
{
 return VAR_0->xi[(*VAR_0->cc)++ & VAR_0->mask];
}
