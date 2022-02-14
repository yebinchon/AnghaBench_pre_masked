
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_geneve {int sync_lock; struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 struct mlx5_geneve* FUNC_0 (int ) ;
 int VAR_1 ;
 struct mlx5_geneve* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

struct mlx5_geneve *FUNC_3(struct mlx5_core_dev *VAR_2)
{
 struct mlx5_geneve *VAR_3 =
  FUNC_1(sizeof(*VAR_3), VAR_1);

 if (!VAR_3)
  return FUNC_0(-VAR_0);
 VAR_3->mdev = VAR_2;
 FUNC_2(&VAR_3->sync_lock);

 return VAR_3;
}
