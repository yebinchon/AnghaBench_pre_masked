
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_geneve {int obj_id; int mdev; scalar_t__ refcount; } ;


 scalar_t__ FUNC_0 (struct mlx5_geneve*) ;
 int FUNC_1 (struct mlx5_geneve*) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(struct mlx5_geneve *VAR_0)
{
 if (FUNC_0(VAR_0))
  return;


 if (VAR_0->refcount)
  FUNC_2(VAR_0->mdev, VAR_0->obj_id);

 FUNC_1(VAR_0);
}
