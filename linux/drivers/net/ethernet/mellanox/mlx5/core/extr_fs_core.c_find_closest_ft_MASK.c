
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_flow_table {int dummy; } ;
struct fs_node {struct fs_node* parent; int list; } ;
struct fs_prio {struct fs_node node; } ;


 struct mlx5_flow_table* FUNC_0 (struct fs_node*,int *,int) ;

__attribute__((used)) static struct mlx5_flow_table *FUNC_1(struct fs_prio *VAR_0, bool VAR_1)
{
 struct mlx5_flow_table *VAR_2 = ((void*)0);
 struct fs_node *VAR_3;
 struct fs_node *VAR_4;

 VAR_4 = VAR_0->node.parent;
 VAR_3 = &VAR_0->node;
 while (!VAR_2 && VAR_4) {
  VAR_2 = FUNC_0(VAR_4, &VAR_3->list, VAR_1);
  VAR_3 = VAR_4;
  VAR_4 = VAR_3->parent;
 }
 return VAR_2;
}
