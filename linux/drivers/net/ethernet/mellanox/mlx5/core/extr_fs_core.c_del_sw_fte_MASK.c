
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_flow_steering {int ftes_cache; } ;
struct TYPE_2__ {struct fs_node* parent; } ;
struct mlx5_flow_group {scalar_t__ start_index; scalar_t__ index; int fte_allocator; int hash; int ftes_hash; TYPE_1__ node; } ;
struct fs_node {int dummy; } ;
struct fs_fte {scalar_t__ start_index; scalar_t__ index; int fte_allocator; int hash; int ftes_hash; TYPE_1__ node; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mlx5_flow_group*,struct fs_node*) ;
 struct mlx5_flow_steering* FUNC_2 (struct fs_node*) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int ,struct mlx5_flow_group*) ;
 int VAR_0 ;
 int FUNC_5 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_6(struct fs_node *VAR_1)
{
 struct mlx5_flow_steering *VAR_2 = FUNC_2(VAR_1);
 struct mlx5_flow_group *VAR_3;
 struct fs_fte *VAR_4;
 int VAR_5;

 FUNC_1(VAR_4, VAR_1);
 FUNC_1(VAR_3, VAR_4->node.parent);

 VAR_5 = FUNC_5(&VAR_3->ftes_hash,
         &VAR_4->hash,
         VAR_0);
 FUNC_0(VAR_5);
 FUNC_3(&VAR_3->fte_allocator, VAR_4->index - VAR_3->start_index);
 FUNC_4(VAR_2->ftes_cache, VAR_4);
}
