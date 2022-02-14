
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct mlx5_flow_handle {int num_rules; TYPE_1__** rule; } ;
struct TYPE_8__ {int lock; } ;
struct fs_fte {TYPE_2__ node; scalar_t__ dests_size; scalar_t__ modify_mask; } ;
struct TYPE_9__ {int parent; } ;
struct TYPE_7__ {TYPE_3__ node; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (struct fs_fte*,int ) ;
 int FUNC_3 (struct mlx5_flow_handle*) ;
 int FUNC_4 (struct fs_fte*) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*,int) ;

void FUNC_9(struct mlx5_flow_handle *VAR_0)
{
 struct fs_fte *VAR_1;
 int VAR_2;
 FUNC_2(VAR_1, VAR_0->rule[0]->node.parent);
 FUNC_1(&VAR_1->node, 0);
 for (VAR_2 = VAR_0->num_rules - 1; VAR_2 >= 0; VAR_2--)
  FUNC_6(&VAR_0->rule[VAR_2]->node, 1);
 if (VAR_1->modify_mask && VAR_1->dests_size) {
  FUNC_4(VAR_1);
  FUNC_8(&VAR_1->node, 0);
 } else {
  FUNC_0(&VAR_1->node);
  FUNC_7(&VAR_1->node.lock);
  FUNC_5(&VAR_1->node, 0);
 }
 FUNC_3(VAR_0);
}
