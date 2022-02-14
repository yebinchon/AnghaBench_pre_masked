
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx5_flow_table {int dummy; } ;
struct mlx5_flow_root_namespace {TYPE_1__* cmds; } ;
struct mlx5_flow_handle {int num_rules; } ;
struct TYPE_6__ {int parent; } ;
struct mlx5_flow_group {TYPE_3__ node; } ;
struct mlx5_flow_destination {int dummy; } ;
struct TYPE_5__ {int active; int version; } ;
struct fs_fte {int status; TYPE_2__ node; } ;
struct TYPE_4__ {int (* create_fte ) (struct mlx5_flow_root_namespace*,struct mlx5_flow_table*,struct mlx5_flow_group*,struct fs_fte*) ;int (* update_fte ) (struct mlx5_flow_root_namespace*,struct mlx5_flow_table*,struct mlx5_flow_group*,int,struct fs_fte*) ;} ;


 int FUNC_0 (int ) ;
 struct mlx5_flow_handle* FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct mlx5_flow_handle*) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 struct mlx5_flow_handle* FUNC_4 (struct fs_fte*,struct mlx5_flow_destination*,int,int*,int*) ;
 int FUNC_5 (struct fs_fte*,struct mlx5_flow_handle*,struct mlx5_flow_destination*,int ) ;
 struct mlx5_flow_root_namespace* FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (struct mlx5_flow_table*,int ) ;
 int FUNC_8 (struct mlx5_flow_root_namespace*,struct mlx5_flow_table*,struct mlx5_flow_group*,struct fs_fte*) ;
 int FUNC_9 (struct mlx5_flow_root_namespace*,struct mlx5_flow_table*,struct mlx5_flow_group*,int,struct fs_fte*) ;

__attribute__((used)) static struct mlx5_flow_handle *
FUNC_10(struct fs_fte *VAR_2,
      struct mlx5_flow_group *VAR_3,
      struct mlx5_flow_destination *VAR_4,
      int VAR_5,
      bool VAR_6)
{
 struct mlx5_flow_root_namespace *VAR_7;
 struct mlx5_flow_handle *VAR_8;
 struct mlx5_flow_table *VAR_9;
 int VAR_10 = 0;
 int VAR_11;
 bool VAR_12 = 0;

 VAR_8 = FUNC_4(VAR_2, VAR_4, VAR_5, &VAR_10,
        &VAR_12);
 if (FUNC_2(VAR_8) || !VAR_12)
  goto out;

 if (VAR_6)
  VAR_10 |= FUNC_0(VAR_1);

 FUNC_7(VAR_9, VAR_3->node.parent);
 VAR_7 = FUNC_6(&VAR_3->node);
 if (!(VAR_2->status & VAR_0))
  VAR_11 = VAR_7->cmds->create_fte(VAR_7, VAR_9, VAR_3, VAR_2);
 else
  VAR_11 = VAR_7->cmds->update_fte(VAR_7, VAR_9, VAR_3, VAR_10, VAR_2);
 if (VAR_11)
  goto free_handle;

 VAR_2->node.active = 1;
 VAR_2->status |= VAR_0;
 FUNC_3(&VAR_2->node.version);

out:
 return VAR_8;

free_handle:
 FUNC_5(VAR_2, VAR_8, VAR_4, VAR_8->num_rules);
 return FUNC_1(VAR_11);
}
