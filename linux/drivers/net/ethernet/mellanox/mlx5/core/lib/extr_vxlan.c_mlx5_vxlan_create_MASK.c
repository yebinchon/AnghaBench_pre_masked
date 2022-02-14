
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_vxlan {int htable; int lock; int sync_lock; struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlx5_vxlan* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 int FUNC_2 (int ) ;
 struct mlx5_vxlan* FUNC_3 (int,int ) ;
 int FUNC_4 (struct mlx5_core_dev*) ;
 int FUNC_5 (struct mlx5_vxlan*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_4 ;

struct mlx5_vxlan *FUNC_8(struct mlx5_core_dev *VAR_5)
{
 struct mlx5_vxlan *VAR_6;

 if (!FUNC_1(VAR_5, VAR_4) || !FUNC_4(VAR_5))
  return FUNC_0(-VAR_1);

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_6->mdev = VAR_5;
 FUNC_6(&VAR_6->sync_lock);
 FUNC_7(&VAR_6->lock);
 FUNC_2(VAR_6->htable);


 FUNC_5(VAR_6, VAR_3);

 return VAR_6;
}
