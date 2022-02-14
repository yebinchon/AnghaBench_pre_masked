
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_2__ {struct mlx5e_mpw_info* info; } ;
struct mlx5e_rq {TYPE_1__ mpwqe; } ;
struct mlx5e_mpw_info {int dummy; } ;


 int FUNC_0 (struct mlx5e_rq*,struct mlx5e_mpw_info*,int) ;

void FUNC_1(struct mlx5e_rq *VAR_0, u16 VAR_1)
{
 struct mlx5e_mpw_info *VAR_2 = &VAR_0->mpwqe.info[VAR_1];

 FUNC_0(VAR_0, VAR_2, 0);
}
