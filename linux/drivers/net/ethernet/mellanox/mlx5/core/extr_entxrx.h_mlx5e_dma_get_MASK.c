
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {struct mlx5e_sq_dma* dma_fifo; } ;
struct mlx5e_txqsq {size_t dma_fifo_mask; TYPE_1__ db; } ;
struct mlx5e_sq_dma {int dummy; } ;



__attribute__((used)) static inline struct mlx5e_sq_dma *
FUNC_0(struct mlx5e_txqsq *VAR_0, u32 VAR_1)
{
 return &VAR_0->db.dma_fifo[VAR_1 & VAR_0->dma_fifo_mask];
}
