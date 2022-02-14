
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_core_dev {int vsc_addr; int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_core_dev*) ;
 int FUNC_1 (struct mlx5_core_dev*,char*) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(struct mlx5_core_dev *VAR_1)
{
 if (!FUNC_0(VAR_1))
  return;

 VAR_1->vsc_addr = FUNC_2(VAR_1->pdev,
         VAR_0);
 if (!VAR_1->vsc_addr)
  FUNC_1(VAR_1, "Failed to get valid vendor specific ID\n");
}
