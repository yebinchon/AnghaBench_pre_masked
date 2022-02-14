
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx5_flow_spec {int flow_context; } ;
struct mlx5_flow_handle {int num_rules; TYPE_3__** rule; } ;
struct mlx5_flow_group {int dummy; } ;
struct mlx5_flow_destination {int dummy; } ;
struct mlx5_flow_act {int action; } ;
struct TYPE_4__ {int action; } ;
struct fs_fte {int node; TYPE_1__ action; } ;
struct TYPE_5__ {int refcount; } ;
struct TYPE_6__ {TYPE_2__ node; } ;


 struct mlx5_flow_handle* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct mlx5_flow_handle*) ;
 struct mlx5_flow_handle* FUNC_2 (struct fs_fte*,struct mlx5_flow_group*,struct mlx5_flow_destination*,int,int) ;
 int FUNC_3 (struct fs_fte*,int *,struct mlx5_flow_act*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (struct fs_fte*,int) ;
 int FUNC_7 (TYPE_2__*,int *) ;

__attribute__((used)) static struct mlx5_flow_handle *FUNC_8(struct mlx5_flow_group *VAR_0,
         const struct mlx5_flow_spec *VAR_1,
         struct mlx5_flow_act *VAR_2,
         struct mlx5_flow_destination *VAR_3,
         int VAR_4,
         struct fs_fte *VAR_5)
{
 struct mlx5_flow_handle *VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_5, &VAR_1->flow_context, VAR_2);
 if (VAR_9)
  return FUNC_0(VAR_9);

 VAR_7 = VAR_5->action.action;
 VAR_5->action.action |= VAR_2->action;
 VAR_6 = FUNC_2(VAR_5, VAR_0, VAR_3, VAR_4,
         VAR_7 != VAR_2->action);
 if (FUNC_1(VAR_6)) {
  VAR_5->action.action = VAR_7;
  return VAR_6;
 }
 FUNC_6(VAR_5, 0);

 for (VAR_8 = 0; VAR_8 < VAR_6->num_rules; VAR_8++) {
  if (FUNC_4(&VAR_6->rule[VAR_8]->node.refcount) == 1) {
   FUNC_7(&VAR_6->rule[VAR_8]->node, &VAR_5->node);
   FUNC_5(VAR_6->rule[VAR_8]);
  }
 }
 return VAR_6;
}
