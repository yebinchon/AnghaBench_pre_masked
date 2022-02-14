
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_flow_table {int dummy; } ;
struct mlx5_flow_root_namespace {struct mlx5_core_dev* dev; } ;
struct mlx5_flow_group {int dummy; } ;
struct mlx5_core_dev {int dummy; } ;
struct mailbox_mod {int dummy; } ;
struct TYPE_3__ {int esp_id; int action; } ;
struct fs_fte {TYPE_1__ action; } ;
struct TYPE_4__ {int (* update_fte ) (struct mlx5_flow_root_namespace*,struct mlx5_flow_table*,struct mlx5_flow_group*,int,struct fs_fte*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (struct mlx5_core_dev*,struct fs_fte*,struct mailbox_mod*) ;
 int FUNC_3 (struct fs_fte*,struct mailbox_mod*) ;

__attribute__((used)) static int FUNC_4(struct mlx5_flow_root_namespace *VAR_2,
        struct mlx5_flow_table *VAR_3,
        struct mlx5_flow_group *VAR_4,
        int VAR_5,
        struct fs_fte *VAR_6,
        bool VAR_7)
{
 int (*VAR_8)(struct mlx5_flow_root_namespace *VAR_9,
     struct mlx5_flow_table *VAR_10,
     struct mlx5_flow_group *VAR_11,
     int VAR_12,
     struct fs_fte *VAR_13) =
  FUNC_1(FUNC_0(VAR_7))->update_fte;
 struct mlx5_core_dev *VAR_14 = VAR_2->dev;
 bool VAR_15 = VAR_6->action.esp_id;
 struct mailbox_mod VAR_16;
 int VAR_17;

 if (!VAR_15 ||
     !(VAR_6->action.action &
       (VAR_1 |
        VAR_0)))
  return VAR_8(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

 FUNC_2(VAR_14, VAR_6, &VAR_16);
 VAR_17 = VAR_8(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_3(VAR_6, &VAR_16);

 return VAR_17;
}
