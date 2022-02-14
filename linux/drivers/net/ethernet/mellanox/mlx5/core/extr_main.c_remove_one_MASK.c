
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct mlx5_core_dev {int dummy; } ;
struct devlink {int dummy; } ;


 int FUNC_0 (struct mlx5_core_dev*,char*) ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (struct devlink*) ;
 int FUNC_3 (struct devlink*) ;
 int FUNC_4 (struct mlx5_core_dev*) ;
 int FUNC_5 (struct mlx5_core_dev*) ;
 int FUNC_6 (struct mlx5_core_dev*) ;
 scalar_t__ FUNC_7 (struct mlx5_core_dev*,int) ;
 struct mlx5_core_dev* FUNC_8 (struct pci_dev*) ;
 struct devlink* FUNC_9 (struct mlx5_core_dev*) ;

__attribute__((used)) static void FUNC_10(struct pci_dev *VAR_0)
{
 struct mlx5_core_dev *VAR_1 = FUNC_8(VAR_0);
 struct devlink *VAR_2 = FUNC_9(VAR_1);

 FUNC_1(VAR_1);
 FUNC_3(VAR_2);

 if (FUNC_7(VAR_1, 1)) {
  FUNC_0(VAR_1, "mlx5_unload_one failed\n");
  FUNC_4(VAR_1);
  return;
 }

 FUNC_6(VAR_1);
 FUNC_5(VAR_1);
 FUNC_2(VAR_2);
}
