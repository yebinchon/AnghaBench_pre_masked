
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttc_params {int ft_attr; } ;
struct mlx5e_flow_table {int * t; } ;
struct mlx5e_ttc_table {struct mlx5e_flow_table ft; } ;
struct TYPE_2__ {int ns; } ;
struct mlx5e_priv {TYPE_1__ fs; int mdev; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int *) ;
 int FUNC_3 (struct mlx5e_ttc_table*) ;
 int FUNC_4 (struct mlx5e_flow_table*) ;
 int FUNC_5 (struct mlx5e_priv*,struct ttc_params*,struct mlx5e_ttc_table*) ;
 int FUNC_6 (int ) ;

int FUNC_7(struct mlx5e_priv *VAR_0, struct ttc_params *VAR_1,
     struct mlx5e_ttc_table *VAR_2)
{
 struct mlx5e_flow_table *VAR_3 = &VAR_2->ft;
 int VAR_4;

 if (!FUNC_6(VAR_0->mdev))
  return 0;

 VAR_3->t = FUNC_2(VAR_0->fs.ns, &VAR_1->ft_attr);
 if (FUNC_0(VAR_3->t)) {
  VAR_4 = FUNC_1(VAR_3->t);
  VAR_3->t = ((void*)0);
  return VAR_4;
 }

 VAR_4 = FUNC_3(VAR_2);
 if (VAR_4)
  goto err;

 VAR_4 = FUNC_5(VAR_0, VAR_1, VAR_2);
 if (VAR_4)
  goto err;

 return 0;

err:
 FUNC_4(VAR_3);
 return VAR_4;
}
