
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_wqe_frag_info {int di; scalar_t__ last_in_page; } ;
struct mlx5e_rq {int dummy; } ;


 int FUNC_0 (struct mlx5e_rq*,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct mlx5e_rq *VAR_0,
         struct mlx5e_wqe_frag_info *VAR_1,
         bool VAR_2)
{
 if (VAR_1->last_in_page)
  FUNC_0(VAR_0, VAR_1->di, VAR_2);
}
