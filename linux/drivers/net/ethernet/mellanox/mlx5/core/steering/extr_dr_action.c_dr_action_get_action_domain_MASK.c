
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum mlx5dr_ste_entry_type { ____Placeholder_mlx5dr_ste_entry_type } mlx5dr_ste_entry_type ;
typedef enum mlx5dr_domain_type { ____Placeholder_mlx5dr_domain_type } mlx5dr_domain_type ;
typedef enum dr_action_domain { ____Placeholder_dr_action_domain } dr_action_domain ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int FUNC_0 (int) ;

__attribute__((used)) static enum dr_action_domain
FUNC_1(enum mlx5dr_domain_type VAR_6,
       enum mlx5dr_ste_entry_type VAR_7)
{
 switch (VAR_6) {
 case 129:
  return VAR_4;
 case 128:
  return VAR_3;
 case 130:
  if (VAR_7 == VAR_5)
   return VAR_1;
  return VAR_0;
 default:
  FUNC_0(1);
  return VAR_2;
 }
}
