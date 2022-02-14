
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_txqsq {scalar_t__ cc; scalar_t__ pc; scalar_t__ dma_fifo_cc; int sqn; } ;


 int FUNC_0 (int,char*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct mlx5e_txqsq *VAR_0)
{
 FUNC_0(VAR_0->cc != VAR_0->pc,
    "SQ 0x%x: cc (0x%x) != pc (0x%x)\n",
    VAR_0->sqn, VAR_0->cc, VAR_0->pc);
 VAR_0->cc = 0;
 VAR_0->dma_fifo_cc = 0;
 VAR_0->pc = 0;
}
