
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct fs_node* parent; } ;
struct mlx5_flow_table {int num_ft; TYPE_1__ node; int fgs_hash; } ;
struct fs_prio {int num_ft; TYPE_1__ node; int fgs_hash; } ;
struct fs_node {int dummy; } ;


 int FUNC_0 (struct mlx5_flow_table*,struct fs_node*) ;
 int FUNC_1 (struct mlx5_flow_table*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct fs_node *VAR_0)
{
 struct mlx5_flow_table *VAR_1;
 struct fs_prio *VAR_2;

 FUNC_0(VAR_1, VAR_0);

 FUNC_2(&VAR_1->fgs_hash);
 FUNC_0(VAR_2, VAR_1->node.parent);
 VAR_2->num_ft--;
 FUNC_1(VAR_1);
}
