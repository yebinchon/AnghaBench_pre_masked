
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int list; int parent; } ;
struct mlx5_flow_table {TYPE_1__ node; } ;
struct TYPE_5__ {int children; } ;
struct fs_prio {TYPE_2__ node; } ;
struct TYPE_6__ {int list; } ;


 struct mlx5_flow_table* FUNC_0 (struct fs_prio*) ;
 int FUNC_1 (struct fs_prio*,int ) ;
 int FUNC_2 (int *,int *) ;
 struct mlx5_flow_table* FUNC_3 (struct mlx5_flow_table*,int ) ;
 TYPE_3__ VAR_0 ;

__attribute__((used)) static struct mlx5_flow_table *FUNC_4(struct mlx5_flow_table *VAR_1)
{
 struct fs_prio *VAR_2;

 FUNC_1(VAR_2, VAR_1->node.parent);

 if (!FUNC_2(&VAR_1->node.list, &VAR_2->node.children))
  return FUNC_3(VAR_1, VAR_0.list);
 return FUNC_0(VAR_2);
}
