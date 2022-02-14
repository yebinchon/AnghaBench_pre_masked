
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlx5e_params {int dummy; } ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (struct mlx5e_params*,int ) ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 int FUNC_2 (struct mlx5_core_dev*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct mlx5_core_dev *VAR_0,
    struct mlx5e_params *VAR_1, u16 VAR_2)
{
 u16 VAR_3 = FUNC_0(VAR_1, VAR_2);
 int VAR_4;

 VAR_4 = FUNC_2(VAR_0, VAR_3, 1);
 if (VAR_4)
  return VAR_4;


 FUNC_1(VAR_0, VAR_3);
 return 0;
}
