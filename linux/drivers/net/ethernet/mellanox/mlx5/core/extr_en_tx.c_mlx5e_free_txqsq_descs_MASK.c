
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {struct mlx5e_tx_wqe_info* wqe_info; } ;
struct mlx5e_txqsq {scalar_t__ cc; scalar_t__ pc; scalar_t__ dma_fifo_cc; int pdev; TYPE_1__ db; int wq; } ;
struct mlx5e_tx_wqe_info {scalar_t__ num_wqebbs; int num_dma; struct sk_buff* skb; } ;
struct mlx5e_sq_dma {int dummy; } ;


 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int *,scalar_t__) ;
 struct mlx5e_sq_dma* FUNC_2 (struct mlx5e_txqsq*,int ) ;
 int FUNC_3 (struct mlx5e_txqsq*,struct mlx5e_tx_wqe_info*,scalar_t__*) ;
 int FUNC_4 (int ,struct mlx5e_sq_dma*) ;

void FUNC_5(struct mlx5e_txqsq *VAR_0)
{
 struct mlx5e_tx_wqe_info *VAR_1;
 struct sk_buff *VAR_2;
 u32 VAR_3;
 u16 VAR_4;
 u16 VAR_5;
 int VAR_6;

 VAR_4 = VAR_0->cc;
 VAR_3 = VAR_0->dma_fifo_cc;

 while (VAR_4 != VAR_0->pc) {
  VAR_5 = FUNC_1(&VAR_0->wq, VAR_4);
  VAR_1 = &VAR_0->db.wqe_info[VAR_5];
  VAR_2 = VAR_1->skb;

  if (!VAR_2) {
   FUNC_3(VAR_0, VAR_1, &VAR_3);
   VAR_4 += VAR_1->num_wqebbs;
   continue;
  }

  for (VAR_6 = 0; VAR_6 < VAR_1->num_dma; VAR_6++) {
   struct mlx5e_sq_dma *VAR_7 =
    FUNC_2(VAR_0, VAR_3++);

   FUNC_4(VAR_0->pdev, VAR_7);
  }

  FUNC_0(VAR_2);
  VAR_4 += VAR_1->num_wqebbs;
 }

 VAR_0->dma_fifo_cc = VAR_3;
 VAR_0->cc = VAR_4;
}
