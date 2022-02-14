
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int metadata_reg_c_0; } ;
struct TYPE_3__ {int source_port; } ;
struct mlx5dr_match_param {TYPE_2__ misc2; TYPE_1__ misc; } ;
typedef enum mlx5dr_ste_entry_type { ____Placeholder_mlx5dr_ste_entry_type } mlx5dr_ste_entry_type ;
typedef enum mlx5dr_domain_type { ____Placeholder_mlx5dr_domain_type } mlx5dr_domain_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_0(enum mlx5dr_domain_type VAR_4,
    enum mlx5dr_ste_entry_type VAR_5,
    struct mlx5dr_match_param *VAR_6,
    struct mlx5dr_match_param *VAR_7)
{
 if (VAR_4 != VAR_0)
  return 0;

 if (VAR_6->misc.source_port) {
  if (VAR_5 == VAR_1)
   if (VAR_7->misc.source_port != VAR_3)
    return 1;

  if (VAR_5 == VAR_2)
   if (VAR_7->misc.source_port == VAR_3)
    return 1;
 }


 if (VAR_6->misc2.metadata_reg_c_0) {
  if (VAR_5 == VAR_1)
   if ((VAR_7->misc2.metadata_reg_c_0 & VAR_3) != VAR_3)
    return 1;

  if (VAR_5 == VAR_2)
   if ((VAR_7->misc2.metadata_reg_c_0 & VAR_3) == VAR_3)
    return 1;
 }
 return 0;
}
