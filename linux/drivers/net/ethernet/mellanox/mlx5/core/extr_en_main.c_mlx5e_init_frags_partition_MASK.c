
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5e_wqe_frag_info {scalar_t__ offset; int last_in_page; int * di; } ;
struct mlx5e_rq_frag_info {scalar_t__ frag_stride; } ;
struct TYPE_3__ {int log_num_frags; int num_frags; struct mlx5e_rq_frag_info* arr; } ;
struct TYPE_4__ {TYPE_1__ info; struct mlx5e_wqe_frag_info* frags; int wq; int * di; } ;
struct mlx5e_rq {TYPE_2__ wqe; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct mlx5e_rq *VAR_1)
{
 struct mlx5e_wqe_frag_info VAR_2 = {};
 struct mlx5e_wqe_frag_info *VAR_3 = ((void*)0);
 int VAR_4;

 VAR_2.di = &VAR_1->wqe.di[0];

 for (VAR_4 = 0; VAR_4 < FUNC_0(&VAR_1->wqe.wq); VAR_4++) {
  struct mlx5e_rq_frag_info *VAR_5 = &VAR_1->wqe.info.arr[0];
  struct mlx5e_wqe_frag_info *VAR_6 =
   &VAR_1->wqe.frags[VAR_4 << VAR_1->wqe.info.log_num_frags];
  int VAR_7;

  for (VAR_7 = 0; VAR_7 < VAR_1->wqe.info.num_frags; VAR_7++, VAR_6++) {
   if (VAR_2.offset + VAR_5[VAR_7].frag_stride > VAR_0) {
    VAR_2.di++;
    VAR_2.offset = 0;
    if (VAR_3)
     VAR_3->last_in_page = 1;
   }
   *VAR_6 = VAR_2;


   VAR_2.offset += VAR_5[VAR_7].frag_stride;
   VAR_3 = VAR_6;
  }
 }

 if (VAR_3)
  VAR_3->last_in_page = 1;
}
