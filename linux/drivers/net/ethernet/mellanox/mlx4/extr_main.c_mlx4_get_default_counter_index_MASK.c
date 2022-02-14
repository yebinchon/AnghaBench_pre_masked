
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_priv {int* def_counter; } ;
struct mlx4_dev {int dummy; } ;


 struct mlx4_priv* FUNC_0 (struct mlx4_dev*) ;

int FUNC_1(struct mlx4_dev *VAR_0, int VAR_1)
{
 struct mlx4_priv *VAR_2 = FUNC_0(VAR_0);

 return VAR_2->def_counter[VAR_1 - 1];
}
