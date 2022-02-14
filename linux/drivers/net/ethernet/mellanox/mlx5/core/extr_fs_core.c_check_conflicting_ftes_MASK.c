
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_flow_context {int flags; scalar_t__ flow_tag; } ;
struct mlx5_flow_act {int action; } ;
struct TYPE_3__ {scalar_t__ flow_tag; } ;
struct TYPE_4__ {int action; } ;
struct fs_fte {TYPE_1__ flow_context; int node; TYPE_2__ action; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static int FUNC_3(struct fs_fte *VAR_2,
      const struct mlx5_flow_context *VAR_3,
      const struct mlx5_flow_act *VAR_4)
{
 if (FUNC_0(VAR_4->action, VAR_2->action.action)) {
  FUNC_2(FUNC_1(&VAR_2->node),
          "Found two FTEs with conflicting actions\n");
  return -VAR_0;
 }

 if ((VAR_3->flags & VAR_1) &&
     VAR_2->flow_context.flow_tag != VAR_3->flow_tag) {
  FUNC_2(FUNC_1(&VAR_2->node),
          "FTE flow tag %u already exists with different flow tag %u\n",
          VAR_2->flow_context.flow_tag,
          VAR_3->flow_tag);
  return -VAR_0;
 }

 return 0;
}
