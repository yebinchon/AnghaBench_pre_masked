
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_core_dev {int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_core_dev*,char*,int,int) ;
 int FUNC_1 (struct mlx5_core_dev*,int*) ;
 int FUNC_2 (int ,int *,int *,int *) ;

__attribute__((used)) static bool FUNC_3(struct mlx5_core_dev *VAR_1)
{
 u32 VAR_2 = 0;
 u32 VAR_3 = 0;

 FUNC_1(VAR_1, &VAR_2);
 VAR_3 = FUNC_2(VAR_1->pdev, ((void*)0), ((void*)0), ((void*)0));
 FUNC_0(VAR_1, "Max link speed = %d, PCI BW = %d\n",
      VAR_2, VAR_3);



 return VAR_2 && VAR_3 &&
  VAR_2 > (2) * VAR_3;
}
