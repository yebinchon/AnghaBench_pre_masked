
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5e_sq_param {int dummy; } ;
struct mlx5e_modify_sq_param {int next_state; int curr_state; int member_0; } ;
struct mlx5e_create_sq_param {int dummy; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5_core_dev*,struct mlx5e_sq_param*,struct mlx5e_create_sq_param*,int *) ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 int FUNC_2 (struct mlx5_core_dev*,int ,struct mlx5e_modify_sq_param*) ;

__attribute__((used)) static int FUNC_3(struct mlx5_core_dev *VAR_2,
          struct mlx5e_sq_param *VAR_3,
          struct mlx5e_create_sq_param *VAR_4,
          u32 *VAR_5)
{
 struct mlx5e_modify_sq_param VAR_6 = {0};
 int VAR_7;

 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_6.curr_state = VAR_1;
 VAR_6.next_state = VAR_0;
 VAR_7 = FUNC_2(VAR_2, *VAR_5, &VAR_6);
 if (VAR_7)
  FUNC_1(VAR_2, *VAR_5);

 return VAR_7;
}
