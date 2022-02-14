
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_geneve {scalar_t__ refcount; int sync_lock; scalar_t__ obj_id; scalar_t__ opt_type; scalar_t__ opt_class; int mdev; } ;


 scalar_t__ FUNC_0 (struct mlx5_geneve*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct mlx5_geneve *VAR_0)
{
 if (FUNC_0(VAR_0))
  return;

 FUNC_2(&VAR_0->sync_lock);
 if (--VAR_0->refcount == 0) {



  FUNC_1(VAR_0->mdev, VAR_0->obj_id);

  VAR_0->opt_class = 0;
  VAR_0->opt_type = 0;
  VAR_0->obj_id = 0;
 }
 FUNC_3(&VAR_0->sync_lock);
}
