
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tdn; } ;
struct mlx5e_resources {int pdn; TYPE_1__ td; int mkey; int bfreg; } ;
struct mlx5_core_dev {struct mlx5e_resources mlx5e_res; } ;


 int FUNC_0 (struct mlx5e_resources*,int ,int) ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 int FUNC_2 (struct mlx5_core_dev*,int ) ;
 int FUNC_3 (struct mlx5_core_dev*,int *) ;
 int FUNC_4 (struct mlx5_core_dev*,int *) ;

void FUNC_5(struct mlx5_core_dev *VAR_0)
{
 struct mlx5e_resources *VAR_1 = &VAR_0->mlx5e_res;

 FUNC_4(VAR_0, &VAR_1->bfreg);
 FUNC_3(VAR_0, &VAR_1->mkey);
 FUNC_2(VAR_0, VAR_1->td.tdn);
 FUNC_1(VAR_0, VAR_1->pdn);
 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
}
