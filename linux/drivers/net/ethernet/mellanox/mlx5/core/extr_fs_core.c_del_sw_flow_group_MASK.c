
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_groups; scalar_t__ active; } ;
struct TYPE_4__ {struct fs_node* parent; } ;
struct mlx5_flow_table {int hash; int fgs_hash; TYPE_1__ autogroup; int fte_allocator; int ftes_hash; TYPE_2__ node; } ;
struct mlx5_flow_steering {int fgs_cache; } ;
struct mlx5_flow_group {int hash; int fgs_hash; TYPE_1__ autogroup; int fte_allocator; int ftes_hash; TYPE_2__ node; } ;
struct fs_node {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mlx5_flow_table*,struct fs_node*) ;
 struct mlx5_flow_steering* FUNC_2 (struct fs_node*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,struct mlx5_flow_table*) ;
 int VAR_0 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_7(struct fs_node *VAR_1)
{
 struct mlx5_flow_steering *VAR_2 = FUNC_2(VAR_1);
 struct mlx5_flow_group *VAR_3;
 struct mlx5_flow_table *VAR_4;
 int VAR_5;

 FUNC_1(VAR_3, VAR_1);
 FUNC_1(VAR_4, VAR_3->node.parent);

 FUNC_5(&VAR_3->ftes_hash);
 FUNC_3(&VAR_3->fte_allocator);
 if (VAR_4->autogroup.active)
  VAR_4->autogroup.num_groups--;
 VAR_5 = FUNC_6(&VAR_4->fgs_hash,
         &VAR_3->hash,
         VAR_0);
 FUNC_0(VAR_5);
 FUNC_4(VAR_2->fgs_cache, VAR_3);
}
