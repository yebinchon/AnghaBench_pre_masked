
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_flow_cmds {int dummy; } ;
typedef enum fs_flow_table_type { ____Placeholder_fs_flow_table_type } fs_flow_table_type ;




 int FUNC_0 (int) ;
 struct mlx5_flow_cmds const VAR_0 ;
 struct mlx5_flow_cmds const VAR_1 ;

const struct mlx5_flow_cmds *FUNC_1(enum fs_flow_table_type VAR_2)
{
 switch (VAR_2) {
 case 129:
  return &VAR_1;
 case 128:
  return &VAR_0;
 default:
  FUNC_0(1);
  return ((void*)0);
 }
}
