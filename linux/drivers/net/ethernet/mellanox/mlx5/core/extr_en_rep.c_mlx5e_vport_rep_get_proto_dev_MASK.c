
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_rep_priv {void* netdev; } ;
struct mlx5_eswitch_rep {int dummy; } ;


 struct mlx5e_rep_priv* FUNC_0 (struct mlx5_eswitch_rep*) ;

__attribute__((used)) static void *FUNC_1(struct mlx5_eswitch_rep *VAR_0)
{
 struct mlx5e_rep_priv *VAR_1;

 VAR_1 = FUNC_0(VAR_0);

 return VAR_1->netdev;
}
