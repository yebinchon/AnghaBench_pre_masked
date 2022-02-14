
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5e_txqsq {int dma_fifo_pc; } ;
struct mlx5e_sq_dma {int type; int size; int addr; } ;
typedef enum mlx5e_dma_map_type { ____Placeholder_mlx5e_dma_map_type } mlx5e_dma_map_type ;
typedef int dma_addr_t ;


 struct mlx5e_sq_dma* FUNC_0 (struct mlx5e_txqsq*,int ) ;

__attribute__((used)) static inline void
FUNC_1(struct mlx5e_txqsq *VAR_0, dma_addr_t VAR_1, u32 VAR_2,
        enum mlx5e_dma_map_type VAR_3)
{
 struct mlx5e_sq_dma *VAR_4 = FUNC_0(VAR_0, VAR_0->dma_fifo_pc++);

 VAR_4->addr = VAR_1;
 VAR_4->size = VAR_2;
 VAR_4->type = VAR_3;
}
