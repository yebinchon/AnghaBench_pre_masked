
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_rq {scalar_t__ umem; } ;
struct mlx5e_dma_info {int dummy; } ;


 int FUNC_0 (struct mlx5e_rq*,struct mlx5e_dma_info*,int) ;
 int FUNC_1 (struct mlx5e_rq*,struct mlx5e_dma_info*) ;

__attribute__((used)) static inline void FUNC_2(struct mlx5e_rq *VAR_0,
          struct mlx5e_dma_info *VAR_1,
          bool VAR_2)
{
 if (VAR_0->umem)




  FUNC_1(VAR_0, VAR_1);
 else
  FUNC_0(VAR_0, VAR_1, VAR_2);
}
