
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5dr_icm_dm {int obj_id; int addr; int length; int type; } ;
struct mlx5dr_icm_mr {int mkey; int mr_list; struct mlx5dr_icm_dm dm; TYPE_2__* pool; } ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dmn; } ;
struct TYPE_3__ {struct mlx5_core_dev* mdev; } ;


 int FUNC_0 (struct mlx5dr_icm_mr*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlx5_core_dev*,int *) ;
 int FUNC_3 (struct mlx5_core_dev*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct mlx5dr_icm_mr *VAR_0)
{
 struct mlx5_core_dev *VAR_1 = VAR_0->pool->dmn->mdev;
 struct mlx5dr_icm_dm *VAR_2 = &VAR_0->dm;

 FUNC_1(&VAR_0->mr_list);
 FUNC_2(VAR_1, &VAR_0->mkey);
 FUNC_3(VAR_1, VAR_2->type, VAR_2->length, 0,
          VAR_2->addr, VAR_2->obj_id);
 FUNC_0(VAR_0);
}
