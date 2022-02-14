
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (struct mlx5_core_dev*) ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (struct mlx5_core_dev*,int ) ;
 int FUNC_3 (struct mlx5_core_dev*,char*) ;
 int FUNC_4 (struct mlx5_core_dev*) ;
 int FUNC_5 (struct mlx5_core_dev*,int) ;

__attribute__((used)) static int FUNC_6(struct mlx5_core_dev *VAR_0, bool VAR_1)
{
 int VAR_2;

 FUNC_5(VAR_0, VAR_1);
 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2) {
  FUNC_3(VAR_0, "tear_down_hca failed, skip cleanup\n");
  return VAR_2;
 }
 FUNC_4(VAR_0);
 FUNC_2(VAR_0, 0);
 FUNC_0(VAR_0);

 return 0;
}
