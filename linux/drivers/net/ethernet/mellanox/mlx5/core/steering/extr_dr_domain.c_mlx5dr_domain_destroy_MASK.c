
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5dr_domain {int mutex; int mdev; int refcount; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5dr_domain*) ;
 int FUNC_1 (struct mlx5dr_domain*) ;
 int FUNC_2 (struct mlx5dr_domain*) ;
 int FUNC_3 (struct mlx5dr_domain*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct mlx5dr_domain *VAR_1)
{
 if (FUNC_6(&VAR_1->refcount) > 1)
  return -VAR_0;


 FUNC_4(VAR_1->mdev);
 FUNC_1(VAR_1);
 FUNC_2(VAR_1);
 FUNC_0(VAR_1);
 FUNC_5(&VAR_1->mutex);
 FUNC_3(VAR_1);
 return 0;
}
