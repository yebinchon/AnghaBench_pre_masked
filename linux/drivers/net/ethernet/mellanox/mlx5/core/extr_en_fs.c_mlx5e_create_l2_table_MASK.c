
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5e_flow_table {int * t; scalar_t__ num_groups; } ;
struct mlx5e_l2_table {struct mlx5e_flow_table ft; } ;
struct TYPE_2__ {int ns; struct mlx5e_l2_table l2; } ;
struct mlx5e_priv {TYPE_1__ fs; } ;
struct mlx5_flow_table_attr {int prio; int level; int max_fte; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,struct mlx5_flow_table_attr*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mlx5e_l2_table*) ;

__attribute__((used)) static int FUNC_5(struct mlx5e_priv *VAR_3)
{
 struct mlx5e_l2_table *VAR_4 = &VAR_3->fs.l2;
 struct mlx5e_flow_table *VAR_5 = &VAR_4->ft;
 struct mlx5_flow_table_attr VAR_6 = {};
 int VAR_7;

 VAR_5->num_groups = 0;

 VAR_6.max_fte = VAR_1;
 VAR_6.level = VAR_0;
 VAR_6.prio = VAR_2;

 VAR_5->t = FUNC_2(VAR_3->fs.ns, &VAR_6);
 if (FUNC_0(VAR_5->t)) {
  VAR_7 = FUNC_1(VAR_5->t);
  VAR_5->t = ((void*)0);
  return VAR_7;
 }

 VAR_7 = FUNC_4(VAR_4);
 if (VAR_7)
  goto err_destroy_flow_table;

 return 0;

err_destroy_flow_table:
 FUNC_3(VAR_5->t);
 VAR_5->t = ((void*)0);

 return VAR_7;
}
