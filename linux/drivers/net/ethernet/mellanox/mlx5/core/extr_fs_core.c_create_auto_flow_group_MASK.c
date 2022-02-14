
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mlx5_flow_table {int node; } ;
struct mlx5_flow_root_namespace {TYPE_2__* cmds; } ;
struct TYPE_6__ {int active; } ;
struct TYPE_4__ {int match_criteria_enable; int * match_criteria; } ;
struct mlx5_flow_group {int start_index; int max_ftes; TYPE_3__ node; TYPE_1__ mask; } ;
struct TYPE_5__ {int (* create_flow_group ) (struct mlx5_flow_root_namespace*,struct mlx5_flow_table*,int *,struct mlx5_flow_group*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,void*,int ) ;
 int FUNC_2 (int ,int *,int ,int) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct mlx5_flow_root_namespace* FUNC_4 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (void*,int *,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (struct mlx5_flow_root_namespace*,struct mlx5_flow_table*,int *,struct mlx5_flow_group*) ;
 int FUNC_9 (struct mlx5_flow_group*) ;

__attribute__((used)) static int FUNC_10(struct mlx5_flow_table *VAR_12,
      struct mlx5_flow_group *VAR_13)
{
 struct mlx5_flow_root_namespace *VAR_14 = FUNC_4(&VAR_12->node);
 int VAR_15 = FUNC_3(VAR_2);
 void *VAR_16;
 u8 VAR_17;
 void *VAR_18;
 int VAR_19;
 u32 *VAR_20;

 VAR_20 = FUNC_6(VAR_15, VAR_1);
 if (!VAR_20)
  return -VAR_0;

 FUNC_2(VAR_2, VAR_20, VAR_7,
   VAR_13->mask.match_criteria_enable);
 FUNC_2(VAR_2, VAR_20, VAR_11, VAR_13->start_index);
 FUNC_2(VAR_2, VAR_20, VAR_3, VAR_13->start_index +
   VAR_13->max_ftes - 1);

 VAR_18 = FUNC_0(VAR_4, VAR_13->mask.match_criteria,
       VAR_8);
 VAR_17 = !!FUNC_1(VAR_5, VAR_18,
      VAR_9);
 FUNC_2(VAR_2, VAR_20,
   VAR_10, VAR_17);

 VAR_16 = FUNC_0(VAR_2,
        VAR_20, VAR_6);
 FUNC_7(VAR_16, VAR_13->mask.match_criteria,
        sizeof(VAR_13->mask.match_criteria));

 VAR_19 = VAR_14->cmds->create_flow_group(VAR_14, VAR_12, VAR_20, VAR_13);
 if (!VAR_19) {
  VAR_13->node.active = 1;
  FUNC_9(VAR_13);
 }

 FUNC_5(VAR_20);
 return VAR_19;
}
