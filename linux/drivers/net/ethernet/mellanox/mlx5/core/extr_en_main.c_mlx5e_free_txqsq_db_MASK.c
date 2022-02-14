
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dma_fifo; int wqe_info; } ;
struct mlx5e_txqsq {TYPE_1__ db; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct mlx5e_txqsq *VAR_0)
{
 FUNC_0(VAR_0->db.wqe_info);
 FUNC_0(VAR_0->db.dma_fifo);
}
