
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_flow_table_attr {scalar_t__ max_fte; } ;
struct mlx5_flow_table {int dummy; } ;
struct mlx5_flow_namespace {int dummy; } ;
struct TYPE_2__ {struct mlx5_flow_table* ft_offloads; } ;
struct mlx5_eswitch {TYPE_1__ offloads; struct mlx5_core_dev* dev; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlx5_flow_table*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mlx5_flow_table*) ;
 int FUNC_2 (struct mlx5_core_dev*,char*,...) ;
 struct mlx5_flow_table* FUNC_3 (struct mlx5_flow_namespace*,struct mlx5_flow_table_attr*) ;
 struct mlx5_flow_namespace* FUNC_4 (struct mlx5_core_dev*,int ) ;

__attribute__((used)) static int FUNC_5(struct mlx5_eswitch *VAR_3, int VAR_4)
{
 struct mlx5_flow_table_attr VAR_5 = {};
 struct mlx5_core_dev *VAR_6 = VAR_3->dev;
 struct mlx5_flow_table *VAR_7;
 struct mlx5_flow_namespace *VAR_8;
 int VAR_9 = 0;

 VAR_8 = FUNC_4(VAR_6, VAR_2);
 if (!VAR_8) {
  FUNC_2(VAR_3->dev, "Failed to get offloads flow namespace\n");
  return -VAR_0;
 }

 VAR_5.max_fte = VAR_4 + VAR_1;

 VAR_7 = FUNC_3(VAR_8, &VAR_5);
 if (FUNC_0(VAR_7)) {
  VAR_9 = FUNC_1(VAR_7);
  FUNC_2(VAR_3->dev, "Failed to create offloads table, err %d\n", VAR_9);
  return VAR_9;
 }

 VAR_3->offloads.ft_offloads = VAR_7;
 return 0;
}
