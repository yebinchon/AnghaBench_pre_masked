
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_flow_steering {int dummy; } ;
struct mlx5_flow_namespace {int node; } ;
struct init_tree_node {int ar_size; int * children; } ;
struct fs_node {int dummy; } ;


 int FUNC_0 (struct mlx5_flow_namespace*,struct fs_node*) ;
 int FUNC_1 (struct mlx5_flow_steering*,int *,int *,struct init_tree_node*,int) ;

__attribute__((used)) static int FUNC_2(struct mlx5_flow_steering *VAR_0,
     struct init_tree_node *VAR_1,
     struct fs_node *VAR_2)
{
 int VAR_3;
 struct mlx5_flow_namespace *VAR_4;
 int VAR_5;

 FUNC_0(VAR_4, VAR_2);
 for (VAR_3 = 0; VAR_3 < VAR_1->ar_size; VAR_3++) {
  VAR_5 = FUNC_1(VAR_0, &VAR_1->children[VAR_3],
            &VAR_4->node,
            VAR_1, VAR_3);
  if (VAR_5)
   return VAR_5;
 }
 return 0;
}
