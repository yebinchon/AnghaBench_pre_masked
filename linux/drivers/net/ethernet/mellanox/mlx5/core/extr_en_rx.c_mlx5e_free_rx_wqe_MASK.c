
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5e_wqe_frag_info {int dummy; } ;
struct TYPE_3__ {int num_frags; } ;
struct TYPE_4__ {TYPE_1__ info; } ;
struct mlx5e_rq {TYPE_2__ wqe; } ;


 int FUNC_0 (struct mlx5e_rq*,struct mlx5e_wqe_frag_info*,int) ;

__attribute__((used)) static inline void FUNC_1(struct mlx5e_rq *VAR_0,
         struct mlx5e_wqe_frag_info *VAR_1,
         bool VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->wqe.info.num_frags; VAR_3++, VAR_1++)
  FUNC_0(VAR_0, VAR_1, VAR_2);
}
