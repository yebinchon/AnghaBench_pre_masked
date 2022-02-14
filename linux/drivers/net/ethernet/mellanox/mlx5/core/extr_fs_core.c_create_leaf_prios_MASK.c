
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_flow_namespace {int dummy; } ;
struct init_tree_node {int num_leaf_prios; int num_levels; } ;
struct fs_prio {int dummy; } ;


 scalar_t__ FUNC_0 (struct fs_prio*) ;
 int FUNC_1 (struct fs_prio*) ;
 struct fs_prio* FUNC_2 (struct mlx5_flow_namespace*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct mlx5_flow_namespace *VAR_0, int VAR_1,
        struct init_tree_node *VAR_2)
{
 struct fs_prio *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->num_leaf_prios; VAR_4++) {
  VAR_3 = FUNC_2(VAR_0, VAR_1++, VAR_2->num_levels);
  if (FUNC_0(VAR_3))
   return FUNC_1(VAR_3);
 }
 return 0;
}
