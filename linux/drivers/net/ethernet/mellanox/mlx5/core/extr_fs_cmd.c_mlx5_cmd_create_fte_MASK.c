
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_flow_table {int dummy; } ;
struct mlx5_flow_root_namespace {struct mlx5_core_dev* dev; } ;
struct mlx5_flow_group {unsigned int id; } ;
struct mlx5_core_dev {int dummy; } ;
struct fs_fte {int dummy; } ;


 int FUNC_0 (struct mlx5_core_dev*,int ,int ,struct mlx5_flow_table*,unsigned int,struct fs_fte*) ;

__attribute__((used)) static int FUNC_1(struct mlx5_flow_root_namespace *VAR_0,
          struct mlx5_flow_table *VAR_1,
          struct mlx5_flow_group *VAR_2,
          struct fs_fte *VAR_3)
{
 struct mlx5_core_dev *VAR_4 = VAR_0->dev;
 unsigned int VAR_5 = VAR_2->id;

 return FUNC_0(VAR_4, 0, 0, VAR_1, VAR_5, VAR_3);
}
