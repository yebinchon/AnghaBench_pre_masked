
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct xdp_umem {int dummy; } ;
struct mlx5e_xsk {struct xdp_umem** umems; } ;
struct mlx5e_params {size_t num_channels; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline struct xdp_umem *FUNC_1(struct mlx5e_params *VAR_0,
        struct mlx5e_xsk *VAR_1, u16 VAR_2)
{
 if (!VAR_1 || !VAR_1->umems)
  return ((void*)0);

 if (FUNC_0(VAR_2 >= VAR_0->num_channels))
  return ((void*)0);

 return VAR_1->umems[VAR_2];
}
