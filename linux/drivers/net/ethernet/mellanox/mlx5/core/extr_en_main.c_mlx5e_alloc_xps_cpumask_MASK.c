
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_params {scalar_t__ num_channels; } ;
struct mlx5e_channel {int ix; int xps_cpumask; int mdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(struct mlx5e_channel *VAR_2,
       struct mlx5e_params *VAR_3)
{
 int VAR_4 = FUNC_3(VAR_2->mdev);
 int VAR_5;

 if (!FUNC_4(&VAR_2->xps_cpumask, VAR_1))
  return -VAR_0;

 for (VAR_5 = VAR_2->ix; VAR_5 < VAR_4; VAR_5 += VAR_3->num_channels) {
  int VAR_6 = FUNC_0(FUNC_2(VAR_2->mdev, VAR_5));

  FUNC_1(VAR_6, VAR_2->xps_cpumask);
 }

 return 0;
}
