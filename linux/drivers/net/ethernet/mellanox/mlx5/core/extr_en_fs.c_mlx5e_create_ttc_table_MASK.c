
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ttc_params {int ft_attr; } ;
struct mlx5e_flow_table {int * t; } ;
struct mlx5e_ttc_table {struct mlx5e_flow_table ft; } ;
struct TYPE_3__ {int ns; } ;
struct mlx5e_priv {TYPE_1__ fs; int mdev; } ;
struct TYPE_4__ {int outer_ip_version; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 TYPE_2__ VAR_0 ;
 int * FUNC_3 (int ,int *) ;
 int FUNC_4 (struct mlx5e_ttc_table*,int) ;
 int FUNC_5 (struct mlx5e_flow_table*) ;
 int FUNC_6 (struct mlx5e_priv*,struct ttc_params*,struct mlx5e_ttc_table*) ;

int FUNC_7(struct mlx5e_priv *VAR_1, struct ttc_params *VAR_2,
      struct mlx5e_ttc_table *VAR_3)
{
 bool VAR_4 = FUNC_1(VAR_1->mdev, VAR_0.outer_ip_version);
 struct mlx5e_flow_table *VAR_5 = &VAR_3->ft;
 int VAR_6;

 VAR_5->t = FUNC_3(VAR_1->fs.ns, &VAR_2->ft_attr);
 if (FUNC_0(VAR_5->t)) {
  VAR_6 = FUNC_2(VAR_5->t);
  VAR_5->t = ((void*)0);
  return VAR_6;
 }

 VAR_6 = FUNC_4(VAR_3, VAR_4);
 if (VAR_6)
  goto err;

 VAR_6 = FUNC_6(VAR_1, VAR_2, VAR_3);
 if (VAR_6)
  goto err;

 return 0;
err:
 FUNC_5(VAR_5);
 return VAR_6;
}
