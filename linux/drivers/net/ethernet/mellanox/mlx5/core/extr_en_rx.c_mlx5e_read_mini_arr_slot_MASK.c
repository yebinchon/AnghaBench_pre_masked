
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5e_cq_decomp {scalar_t__ mini_arr_idx; int mini_arr; } ;
struct mlx5_cqwq {int dummy; } ;


 int FUNC_0 (struct mlx5_cqwq*,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct mlx5_cqwq *VAR_0,
         struct mlx5e_cq_decomp *VAR_1,
         u32 VAR_2)
{
 FUNC_0(VAR_0, VAR_2, VAR_1->mini_arr);
 VAR_1->mini_arr_idx = 0;
}
