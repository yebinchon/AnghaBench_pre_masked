
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* wqe_info; void* dma_fifo; } ;
struct mlx5e_txqsq {int dma_fifo_mask; TYPE_1__ db; int wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 void* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mlx5e_txqsq*) ;

__attribute__((used)) static int FUNC_4(struct mlx5e_txqsq *VAR_3, int VAR_4)
{
 int VAR_5 = FUNC_2(&VAR_3->wq);
 int VAR_6 = VAR_5 * VAR_2;

 VAR_3->db.dma_fifo = FUNC_1(FUNC_0(VAR_6,
         sizeof(*VAR_3->db.dma_fifo)),
     VAR_1, VAR_4);
 VAR_3->db.wqe_info = FUNC_1(FUNC_0(VAR_5,
         sizeof(*VAR_3->db.wqe_info)),
     VAR_1, VAR_4);
 if (!VAR_3->db.dma_fifo || !VAR_3->db.wqe_info) {
  FUNC_3(VAR_3);
  return -VAR_0;
 }

 VAR_3->dma_fifo_mask = VAR_6 - 1;

 return 0;
}
