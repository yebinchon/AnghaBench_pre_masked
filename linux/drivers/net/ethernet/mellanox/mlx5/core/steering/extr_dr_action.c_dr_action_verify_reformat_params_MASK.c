
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5dr_domain {scalar_t__ type; } ;
typedef enum mlx5dr_action_type { ____Placeholder_mlx5dr_action_type } mlx5dr_action_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct mlx5dr_domain*,char*) ;

__attribute__((used)) static int
FUNC_1(enum mlx5dr_action_type VAR_8,
     struct mlx5dr_domain *VAR_9,
     size_t VAR_10,
     void *VAR_11)
{
 if ((!VAR_11 && VAR_10) || (VAR_11 && !VAR_10) || VAR_8 >
  VAR_1) {
  FUNC_0(VAR_9, "Invalid reformat parameter!\n");
  goto out_err;
 }

 if (VAR_9->type == VAR_5)
  return 0;

 if (VAR_9->type == VAR_6) {
  if (VAR_8 != VAR_2 &&
      VAR_8 != VAR_3) {
   FUNC_0(VAR_9, "Action reformat type not support on RX domain\n");
   goto out_err;
  }
 } else if (VAR_9->type == VAR_7) {
  if (VAR_8 != VAR_0 &&
      VAR_8 != VAR_1) {
   FUNC_0(VAR_9, "Action reformat type not support on TX domain\n");
   goto out_err;
  }
 }

 return 0;

out_err:
 return -VAR_4;
}
