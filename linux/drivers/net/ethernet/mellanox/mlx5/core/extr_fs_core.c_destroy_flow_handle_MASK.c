
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int list; int refcount; } ;
struct mlx5_flow_handle {struct mlx5_flow_handle** rule; TYPE_1__ node; } ;
struct mlx5_flow_destination {int dummy; } ;
struct fs_fte {int dests_size; } ;


 int FUNC_0 (struct mlx5_flow_handle*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct fs_fte *VAR_0,
    struct mlx5_flow_handle *VAR_1,
    struct mlx5_flow_destination *VAR_2,
    int VAR_3)
{
 for (; --VAR_3 >= 0;) {
  if (FUNC_2(&VAR_1->rule[VAR_3]->node.refcount)) {
   VAR_0->dests_size--;
   FUNC_1(&VAR_1->rule[VAR_3]->node.list);
   FUNC_0(VAR_1->rule[VAR_3]);
  }
 }
 FUNC_0(VAR_1);
}
