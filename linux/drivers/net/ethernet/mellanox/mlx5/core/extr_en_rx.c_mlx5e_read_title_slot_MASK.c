
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlx5_cqe64 {int wqe_counter; int byte_cnt; } ;
struct mlx5e_cq_decomp {int wqe_counter; int left; struct mlx5_cqe64 title; } ;
struct mlx5e_rq {TYPE_1__* stats; struct mlx5e_cq_decomp cqd; } ;
struct mlx5_cqwq {int dummy; } ;
struct TYPE_2__ {int cqe_compress_blks; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mlx5_cqwq*,int ,struct mlx5_cqe64*) ;

__attribute__((used)) static inline void FUNC_3(struct mlx5e_rq *VAR_0,
      struct mlx5_cqwq *VAR_1,
      u32 VAR_2)
{
 struct mlx5e_cq_decomp *VAR_3 = &VAR_0->cqd;
 struct mlx5_cqe64 *VAR_4 = &VAR_3->title;

 FUNC_2(VAR_1, VAR_2, VAR_4);
 VAR_3->left = FUNC_1(VAR_4->byte_cnt);
 VAR_3->wqe_counter = FUNC_0(VAR_4->wqe_counter);
 VAR_0->stats->cqe_compress_blks++;
}
