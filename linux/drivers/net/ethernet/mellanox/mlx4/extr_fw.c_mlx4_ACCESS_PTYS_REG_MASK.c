
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_ptys_reg {int dummy; } ;
struct mlx4_dev {int dummy; } ;
typedef enum mlx4_access_reg_method { ____Placeholder_mlx4_access_reg_method } mlx4_access_reg_method ;


 int VAR_0 ;
 int FUNC_0 (struct mlx4_dev*,int ,int,int,struct mlx4_ptys_reg*) ;

int FUNC_1(struct mlx4_dev *VAR_1,
    enum mlx4_access_reg_method VAR_2,
    struct mlx4_ptys_reg *VAR_3)
{
 return FUNC_0(VAR_1, VAR_0,
          VAR_2, sizeof(*VAR_3), VAR_3);
}
