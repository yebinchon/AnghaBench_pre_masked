
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mlx5e_cq_decomp {int mini_arr_idx; int title; } ;
struct mlx5e_rq {int (* handle_rx_cqe ) (struct mlx5e_rq*,int *) ;struct mlx5e_cq_decomp cqd; } ;
struct mlx5_cqwq {scalar_t__ cc; } ;


 int FUNC_0 (struct mlx5e_rq*,struct mlx5_cqwq*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct mlx5e_rq*,struct mlx5_cqwq*,int,int) ;
 int FUNC_2 (struct mlx5_cqwq*,struct mlx5e_cq_decomp*,scalar_t__) ;
 int FUNC_3 (struct mlx5e_rq*,struct mlx5_cqwq*,scalar_t__) ;
 int FUNC_4 (struct mlx5e_rq*,int *) ;

__attribute__((used)) static inline u32 FUNC_5(struct mlx5e_rq *VAR_0,
           struct mlx5_cqwq *VAR_1,
           int VAR_2)
{
 struct mlx5e_cq_decomp *VAR_3 = &VAR_0->cqd;
 u32 VAR_4 = VAR_1->cc;

 FUNC_3(VAR_0, VAR_1, VAR_4);
 FUNC_2(VAR_1, VAR_3, VAR_4 + 1);
 FUNC_0(VAR_0, VAR_1, VAR_4);
 VAR_0->handle_rx_cqe(VAR_0, &VAR_3->title);
 VAR_3->mini_arr_idx++;

 return FUNC_1(VAR_0, VAR_1, 1, VAR_2) - 1;
}
