
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_flow_table {int id; int node; } ;
struct mlx5_flow_root_namespace {int chain_lock; } ;


 int FUNC_0 (struct mlx5_flow_table*) ;
 struct mlx5_flow_root_namespace* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int) ;

int FUNC_7(struct mlx5_flow_table *VAR_0)
{
 struct mlx5_flow_root_namespace *VAR_1 = FUNC_1(&VAR_0->node);
 int VAR_2 = 0;

 FUNC_4(&VAR_1->chain_lock);
 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2) {
  FUNC_5(&VAR_1->chain_lock);
  return VAR_2;
 }
 if (FUNC_6(&VAR_0->node, 0))
  FUNC_3(FUNC_2(&VAR_0->node), "Flow table %d wasn't destroyed, refcount > 1\n",
          VAR_0->id);
 FUNC_5(&VAR_1->chain_lock);

 return VAR_2;
}
