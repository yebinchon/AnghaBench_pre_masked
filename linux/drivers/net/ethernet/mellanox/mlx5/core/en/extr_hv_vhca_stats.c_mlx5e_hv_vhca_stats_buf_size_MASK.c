
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {int max_nch; } ;
struct mlx5e_hv_vhca_per_ring_stats {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct mlx5e_priv *VAR_0)
{
 return (sizeof(struct mlx5e_hv_vhca_per_ring_stats) *
  VAR_0->max_nch);
}
