
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {int next_wqe_index; } ;
struct mlx5e_rx_wqe_ll {TYPE_2__ next; } ;
struct mlx5_wq_cyc {int dummy; } ;
struct TYPE_6__ {struct mlx5_wq_cyc wq; } ;
struct mlx5_wq_ll {int * tail_next; int head; } ;
struct TYPE_4__ {int umr_in_progress; struct mlx5_wq_ll wq; } ;
struct mlx5e_rq {scalar_t__ wq_type; int (* dealloc_wqe ) (struct mlx5e_rq*,int ) ;TYPE_3__ wqe; TYPE_1__ mpwqe; } ;
typedef int __be16 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlx5_wq_cyc*) ;
 int FUNC_2 (struct mlx5_wq_cyc*) ;
 int FUNC_3 (struct mlx5_wq_cyc*) ;
 struct mlx5e_rx_wqe_ll* FUNC_4 (struct mlx5_wq_ll*,int ) ;
 int FUNC_5 (struct mlx5_wq_ll*,int ) ;
 int FUNC_6 (struct mlx5_wq_ll*) ;
 int FUNC_7 (struct mlx5_wq_ll*,int ,int *) ;
 int FUNC_8 (struct mlx5e_rq*,int ) ;
 int FUNC_9 (struct mlx5e_rq*,int ) ;
 int FUNC_10 (struct mlx5e_rq*,int ) ;

void FUNC_11(struct mlx5e_rq *VAR_1)
{
 __be16 VAR_2;
 u16 VAR_3;

 if (VAR_1->wq_type == VAR_0) {
  struct mlx5_wq_ll *VAR_4 = &VAR_1->mpwqe.wq;
  u16 VAR_5 = VAR_4->head;
  int VAR_6;


  for (VAR_6 = 0; VAR_6 < VAR_1->mpwqe.umr_in_progress; VAR_6++) {
   VAR_1->dealloc_wqe(VAR_1, VAR_5);
   VAR_5 = FUNC_5(VAR_4, VAR_5);
  }

  while (!FUNC_6(VAR_4)) {
   struct mlx5e_rx_wqe_ll *VAR_7;

   VAR_2 = *VAR_4->tail_next;
   VAR_3 = FUNC_0(VAR_2);
   VAR_7 = FUNC_4(VAR_4, VAR_3);
   VAR_1->dealloc_wqe(VAR_1, VAR_3);
   FUNC_7(VAR_4, VAR_2,
           &VAR_7->next.next_wqe_index);
  }
 } else {
  struct mlx5_wq_cyc *VAR_8 = &VAR_1->wqe.wq;

  while (!FUNC_2(VAR_8)) {
   VAR_3 = FUNC_1(VAR_8);
   VAR_1->dealloc_wqe(VAR_1, VAR_3);
   FUNC_3(VAR_8);
  }
 }

}
