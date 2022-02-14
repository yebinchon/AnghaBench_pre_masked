
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (struct mlx5_core_dev*,char*,int) ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (struct mlx5_core_dev*) ;
 int FUNC_3 (struct mlx5_core_dev*) ;
 int FUNC_4 (struct mlx5_core_dev*) ;
 int FUNC_5 (struct mlx5_core_dev*) ;

void FUNC_6(struct mlx5_core_dev *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1) {
  FUNC_0(VAR_0, "Failed to enable RoCE: %d\n", VAR_1);
  return;
 }

 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1) {
  FUNC_0(VAR_0, "Failed to add RoCE address: %d\n", VAR_1);
  goto disable_roce;
 }

 VAR_1 = FUNC_5(VAR_0);
 if (VAR_1) {
  FUNC_0(VAR_0, "Failed to enable RoCE steering: %d\n", VAR_1);
  goto del_roce_addr;
 }

 return;

del_roce_addr:
 FUNC_4(VAR_0);
disable_roce:
 FUNC_1(VAR_0);
 return;
}
