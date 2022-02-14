
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int wq; } ;
struct mlx5e_rq {int umr_mkey; TYPE_1__ mpwqe; } ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlx5_core_dev*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct mlx5_core_dev *VAR_1, struct mlx5e_rq *VAR_2)
{
 u64 VAR_3 = FUNC_0(FUNC_1(&VAR_2->mpwqe.wq));

 return FUNC_2(VAR_1, VAR_3, VAR_0, &VAR_2->umr_mkey);
}
