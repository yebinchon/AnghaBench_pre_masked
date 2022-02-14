
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {int parent; } ;
struct mlx5_flow_table {int lock; int fwd_rules; TYPE_2__ node; } ;
struct mlx5_flow_spec {int dummy; } ;
struct mlx5_flow_root_namespace {int chain_lock; } ;
struct mlx5_flow_handle {TYPE_1__** rule; } ;
struct mlx5_flow_destination {struct mlx5_flow_table* ft; int type; } ;
struct mlx5_flow_act {scalar_t__ action; } ;
struct fs_prio {int dummy; } ;
struct TYPE_3__ {scalar_t__ sw_action; int next_ft; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlx5_flow_handle* FUNC_0 (int ) ;
 int FUNC_1 (struct mlx5_flow_handle*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct mlx5_flow_handle* FUNC_2 (struct mlx5_flow_table*,struct mlx5_flow_spec const*,struct mlx5_flow_act*,struct mlx5_flow_destination*,int) ;
 struct mlx5_flow_table* FUNC_3 (struct fs_prio*) ;
 struct mlx5_flow_root_namespace* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct fs_prio*,int ) ;
 int FUNC_6 (struct mlx5_flow_table*) ;
 int FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

struct mlx5_flow_handle *
FUNC_11(struct mlx5_flow_table *VAR_5,
      const struct mlx5_flow_spec *VAR_6,
      struct mlx5_flow_act *VAR_7,
      struct mlx5_flow_destination *VAR_8,
      int VAR_9)
{
 struct mlx5_flow_root_namespace *VAR_10 = FUNC_4(&VAR_5->node);
 struct mlx5_flow_destination VAR_11 = {};
 struct mlx5_flow_table *VAR_12 = ((void*)0);
 struct mlx5_flow_handle *VAR_13 = ((void*)0);
 u32 VAR_14 = VAR_7->action;
 struct fs_prio *VAR_15;

 FUNC_5(VAR_15, VAR_5->node.parent);
 if (VAR_7->action == VAR_3) {
  if (!FUNC_6(VAR_5))
   return FUNC_0(-VAR_1);
  if (VAR_9)
   return FUNC_0(-VAR_0);
  FUNC_9(&VAR_10->chain_lock);
  VAR_12 = FUNC_3(VAR_15);
  if (VAR_12) {
   VAR_11.type = VAR_4;
   VAR_11.ft = VAR_12;
   VAR_8 = &VAR_11;
   VAR_9 = 1;
   VAR_7->action = VAR_2;
  } else {
   FUNC_10(&VAR_10->chain_lock);
   return FUNC_0(-VAR_1);
  }
 }

 VAR_13 = FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);

 if (VAR_14 == VAR_3) {
  if (!FUNC_1(VAR_13) &&
      (FUNC_8(&VAR_13->rule[0]->next_ft))) {
   FUNC_9(&VAR_12->lock);
   FUNC_7(&VAR_13->rule[0]->next_ft,
     &VAR_12->fwd_rules);
   FUNC_10(&VAR_12->lock);
   VAR_13->rule[0]->sw_action = VAR_3;
  }
  FUNC_10(&VAR_10->chain_lock);
 }
 return VAR_13;
}
