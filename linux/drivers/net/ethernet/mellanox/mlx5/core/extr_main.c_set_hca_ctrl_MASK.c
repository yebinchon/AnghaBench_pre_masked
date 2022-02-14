
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_reg_host_endianness {int he; } ;
struct mlx5_core_dev {int dummy; } ;
typedef int he_out ;
typedef int he_in ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5_reg_host_endianness*,int ,int) ;
 int FUNC_1 (struct mlx5_core_dev*,struct mlx5_reg_host_endianness*,int,struct mlx5_reg_host_endianness*,int,int ,int ,int) ;
 int FUNC_2 (struct mlx5_core_dev*) ;

__attribute__((used)) static int FUNC_3(struct mlx5_core_dev *VAR_2)
{
 struct mlx5_reg_host_endianness VAR_3;
 struct mlx5_reg_host_endianness VAR_4;
 int VAR_5;

 if (!FUNC_2(VAR_2))
  return 0;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.he = VAR_1;
 VAR_5 = FUNC_1(VAR_2, &VAR_3, sizeof(VAR_3),
     &VAR_4, sizeof(VAR_4),
     VAR_0, 0, 1);
 return VAR_5;
}
