
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_flow_table {int dummy; } ;
struct mlx5_flow_root_namespace {struct mlx5_core_dev* dev; } ;
struct mlx5_flow_group {int id; } ;
struct mlx5_core_dev {int dummy; } ;
struct fs_fte {int dummy; } ;
struct TYPE_2__ {int flow_modify_en; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_core_dev*,int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (struct mlx5_core_dev*,int,int,struct mlx5_flow_table*,int ,struct fs_fte*) ;

__attribute__((used)) static int FUNC_2(struct mlx5_flow_root_namespace *VAR_2,
          struct mlx5_flow_table *VAR_3,
          struct mlx5_flow_group *VAR_4,
          int VAR_5,
          struct fs_fte *VAR_6)
{
 int VAR_7;
 struct mlx5_core_dev *VAR_8 = VAR_2->dev;
 int VAR_9 = FUNC_0(VAR_8,
      VAR_1.
      flow_modify_en);
 if (!VAR_9)
  return -VAR_0;
 VAR_7 = 1;

 return FUNC_1(VAR_8, VAR_7, VAR_5, VAR_3, VAR_4->id, VAR_6);
}
