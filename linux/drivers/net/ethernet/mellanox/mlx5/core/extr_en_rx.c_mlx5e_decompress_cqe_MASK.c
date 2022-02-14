
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int wq; } ;
struct mlx5_cqe64 {int op_own; int wqe_counter; int check_sum; int byte_cnt; } ;
struct mlx5e_cq_decomp {size_t mini_arr_idx; scalar_t__ wqe_counter; struct mlx5_cqe64 title; struct mlx5_mini_cqe8* mini_arr; } ;
struct mlx5e_rq {scalar_t__ wq_type; TYPE_2__ wqe; struct mlx5e_cq_decomp cqd; } ;
struct mlx5_mini_cqe8 {int checksum; int byte_cnt; } ;
struct TYPE_3__ {int log_sz; } ;
struct mlx5_cqwq {TYPE_1__ fbc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (struct mlx5_cqe64*) ;

__attribute__((used)) static inline void FUNC_3(struct mlx5e_rq *VAR_1,
     struct mlx5_cqwq *VAR_2,
     u32 VAR_3)
{
 struct mlx5e_cq_decomp *VAR_4 = &VAR_1->cqd;
 struct mlx5_mini_cqe8 *VAR_5 = &VAR_4->mini_arr[VAR_4->mini_arr_idx];
 struct mlx5_cqe64 *VAR_6 = &VAR_4->title;

 VAR_6->byte_cnt = VAR_5->byte_cnt;
 VAR_6->check_sum = VAR_5->checksum;
 VAR_6->op_own &= 0xf0;
 VAR_6->op_own |= 0x01 & (VAR_3 >> VAR_2->fbc.log_sz);
 VAR_6->wqe_counter = FUNC_0(VAR_4->wqe_counter);

 if (VAR_1->wq_type == VAR_0)
  VAR_4->wqe_counter += FUNC_2(VAR_6);
 else
  VAR_4->wqe_counter =
   FUNC_1(&VAR_1->wqe.wq, VAR_4->wqe_counter + 1);
}
