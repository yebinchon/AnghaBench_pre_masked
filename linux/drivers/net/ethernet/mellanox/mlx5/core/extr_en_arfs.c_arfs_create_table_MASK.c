
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5e_arfs_tables {TYPE_1__* arfs_tables; } ;
struct TYPE_4__ {int ns; struct mlx5e_arfs_tables arfs; } ;
struct mlx5e_priv {TYPE_2__ fs; } ;
struct mlx5e_flow_table {int * t; scalar_t__ num_groups; } ;
struct mlx5_flow_table_attr {int prio; int level; int max_fte; } ;
typedef enum arfs_type { ____Placeholder_arfs_type } arfs_type ;
struct TYPE_3__ {struct mlx5e_flow_table ft; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlx5e_priv*,int) ;
 int FUNC_3 (struct mlx5e_flow_table*,int) ;
 int * FUNC_4 (int ,struct mlx5_flow_table_attr*) ;
 int FUNC_5 (struct mlx5e_flow_table*) ;

__attribute__((used)) static int FUNC_6(struct mlx5e_priv *VAR_3,
        enum arfs_type VAR_4)
{
 struct mlx5e_arfs_tables *VAR_5 = &VAR_3->fs.arfs;
 struct mlx5e_flow_table *VAR_6 = &VAR_5->arfs_tables[VAR_4].ft;
 struct mlx5_flow_table_attr VAR_7 = {};
 int VAR_8;

 VAR_6->num_groups = 0;

 VAR_7.max_fte = VAR_1;
 VAR_7.level = VAR_0;
 VAR_7.prio = VAR_2;

 VAR_6->t = FUNC_4(VAR_3->fs.ns, &VAR_7);
 if (FUNC_0(VAR_6->t)) {
  VAR_8 = FUNC_1(VAR_6->t);
  VAR_6->t = ((void*)0);
  return VAR_8;
 }

 VAR_8 = FUNC_3(VAR_6, VAR_4);
 if (VAR_8)
  goto err;

 VAR_8 = FUNC_2(VAR_3, VAR_4);
 if (VAR_8)
  goto err;

 return 0;
err:
 FUNC_5(VAR_6);
 return VAR_8;
}
