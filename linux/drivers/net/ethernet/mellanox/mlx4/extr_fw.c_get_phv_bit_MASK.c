
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx4_func_cap {int flags0; } ;
struct mlx4_dev {int dummy; } ;
typedef int func_cap ;


 int VAR_0 ;
 int FUNC_0 (struct mlx4_func_cap*,int ,int) ;
 int FUNC_1 (struct mlx4_dev*,int ,struct mlx4_func_cap*) ;

int FUNC_2(struct mlx4_dev *VAR_1, u8 VAR_2, int *VAR_3)
{
 int VAR_4;
 struct mlx4_func_cap VAR_5;

 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 VAR_4 = FUNC_1(VAR_1, VAR_2, &VAR_5);
 if (!VAR_4)
  *VAR_3 = VAR_5.flags0 & VAR_0;
 return VAR_4;
}
