
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
struct TYPE_9__ {int prev; } ;
struct TYPE_11__ {TYPE_2__ children; } ;
struct TYPE_8__ {scalar_t__ active; } ;
struct mlx5_flow_table {TYPE_4__ node; TYPE_1__ autogroup; } ;
struct mlx5_flow_root_namespace {TYPE_3__* cmds; } ;
struct TYPE_12__ {int active; } ;
struct mlx5_flow_group {TYPE_5__ node; } ;
struct TYPE_10__ {int (* create_flow_group ) (struct mlx5_flow_root_namespace*,struct mlx5_flow_table*,int *,struct mlx5_flow_group*) ;} ;


 int VAR_0 ;
 struct mlx5_flow_group* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct mlx5_flow_group*) ;
 void* FUNC_2 (int ,int *,int ) ;
 void* FUNC_3 (int ,int *,int ) ;
 struct mlx5_flow_group* FUNC_4 (struct mlx5_flow_table*,void*,void*,int,int,int ) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_4__*,int) ;
 int VAR_2 ;
 struct mlx5_flow_root_namespace* FUNC_6 (TYPE_4__*) ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (struct mlx5_flow_root_namespace*,struct mlx5_flow_table*,int *,struct mlx5_flow_group*) ;
 int FUNC_8 (struct mlx5_flow_group*) ;
 int FUNC_9 (TYPE_5__*,int) ;
 int FUNC_10 (TYPE_4__*,int) ;

struct mlx5_flow_group *FUNC_11(struct mlx5_flow_table *VAR_6,
            u32 *VAR_7)
{
 struct mlx5_flow_root_namespace *VAR_8 = FUNC_6(&VAR_6->node);
 void *VAR_9 = FUNC_2(VAR_1,
         VAR_7, VAR_9);
 u8 VAR_10 = FUNC_3(VAR_1,
         VAR_7,
         VAR_10);
 int VAR_11 = FUNC_3(VAR_1, VAR_7,
       VAR_5);
 int VAR_12 = FUNC_3(VAR_1, VAR_7,
     VAR_2);
 struct mlx5_flow_group *VAR_13;
 int VAR_14;

 if (VAR_6->autogroup.active)
  return FUNC_0(-VAR_0);

 FUNC_5(&VAR_6->node, 0);
 VAR_13 = FUNC_4(VAR_6, VAR_10, VAR_9,
         VAR_11, VAR_12,
         VAR_6->node.children.prev);
 FUNC_10(&VAR_6->node, 0);
 if (FUNC_1(VAR_13))
  return VAR_13;

 VAR_14 = VAR_8->cmds->create_flow_group(VAR_8, VAR_6, VAR_7, VAR_13);
 if (VAR_14) {
  FUNC_9(&VAR_13->node, 0);
  return FUNC_0(VAR_14);
 }
 FUNC_8(VAR_13);
 VAR_13->node.active = 1;

 return VAR_13;
}
