
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5e_txqsq {int pdev; int dma_fifo_pc; } ;
struct mlx5e_sq_dma {int dummy; } ;


 struct mlx5e_sq_dma* FUNC_0 (struct mlx5e_txqsq*,int ) ;
 int FUNC_1 (int ,struct mlx5e_sq_dma*) ;

__attribute__((used)) static void FUNC_2(struct mlx5e_txqsq *VAR_0, u8 VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  struct mlx5e_sq_dma *VAR_3 =
   FUNC_0(VAR_0, --VAR_0->dma_fifo_pc);

  FUNC_1(VAR_0->pdev, VAR_3);
 }
}
