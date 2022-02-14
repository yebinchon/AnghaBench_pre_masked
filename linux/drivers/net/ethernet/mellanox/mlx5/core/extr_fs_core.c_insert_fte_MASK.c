
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int children; } ;
struct mlx5_flow_group {int start_index; int fte_allocator; TYPE_2__ node; int ftes_hash; int max_ftes; } ;
struct TYPE_3__ {int list; } ;
struct fs_fte {int index; TYPE_1__ node; int hash; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *) ;
 int VAR_1 ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(struct mlx5_flow_group *VAR_2, struct fs_fte *VAR_3)
{
 int VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(&VAR_2->fte_allocator, 0, VAR_2->max_ftes, VAR_0);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_3->index = VAR_4 + VAR_2->start_index;
 VAR_5 = FUNC_3(&VAR_2->ftes_hash,
         &VAR_3->hash,
         VAR_1);
 if (VAR_5)
  goto err_ida_remove;

 FUNC_4(&VAR_3->node, &VAR_2->node);
 FUNC_2(&VAR_3->node.list, &VAR_2->node.children);
 return 0;

err_ida_remove:
 FUNC_1(&VAR_2->fte_allocator, VAR_4);
 return VAR_5;
}
