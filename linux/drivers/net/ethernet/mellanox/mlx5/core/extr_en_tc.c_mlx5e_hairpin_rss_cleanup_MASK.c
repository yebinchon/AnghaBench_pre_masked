
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {int dummy; } ;
struct mlx5e_hairpin {int indir_rqt; int ttc; struct mlx5e_priv* func_priv; } ;


 int FUNC_0 (struct mlx5e_priv*,int *) ;
 int FUNC_1 (struct mlx5e_priv*,int *) ;
 int FUNC_2 (struct mlx5e_hairpin*) ;

__attribute__((used)) static void FUNC_3(struct mlx5e_hairpin *VAR_0)
{
 struct mlx5e_priv *VAR_1 = VAR_0->func_priv;

 FUNC_1(VAR_1, &VAR_0->ttc);
 FUNC_2(VAR_0);
 FUNC_0(VAR_1, &VAR_0->indir_rqt);
}
