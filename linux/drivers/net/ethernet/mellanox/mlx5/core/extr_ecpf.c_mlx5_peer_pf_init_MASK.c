
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (struct mlx5_core_dev*,char*,int) ;
 int FUNC_1 (struct mlx5_core_dev*) ;

__attribute__((used)) static int FUNC_2(struct mlx5_core_dev *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  FUNC_0(VAR_0, "Failed to enable peer PF HCA err(%d)\n",
         VAR_1);

 return VAR_1;
}
