
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5dr_domain {int mdev; int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlx5dr_domain*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct mlx5dr_domain *VAR_2, u32 VAR_3)
{
 int VAR_4 = 0;

 if (VAR_3 & VAR_1) {
  FUNC_2(&VAR_2->mutex);
  VAR_4 = FUNC_1(VAR_2);
  FUNC_3(&VAR_2->mutex);
  if (VAR_4)
   return VAR_4;
 }

 if (VAR_3 & VAR_0)
  VAR_4 = FUNC_0(VAR_2->mdev);

 return VAR_4;
}
