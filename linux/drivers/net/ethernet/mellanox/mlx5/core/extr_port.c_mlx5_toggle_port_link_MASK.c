
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_core_dev {int dummy; } ;
typedef enum mlx5_port_status { ____Placeholder_mlx5_port_status } mlx5_port_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5_core_dev*,int*) ;
 int FUNC_1 (struct mlx5_core_dev*,int) ;

void FUNC_2(struct mlx5_core_dev *VAR_2)
{
 enum mlx5_port_status VAR_3;

 FUNC_0(VAR_2, &VAR_3);
 FUNC_1(VAR_2, VAR_0);
 if (VAR_3 == VAR_1)
  FUNC_1(VAR_2, VAR_1);
}
