
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5dr_ste_build {int rx; int inner; int * ste_build_tag_func; int bit_mask; int byte_mask; int lu_type; struct mlx5dr_domain* dmn; int vhca_id_valid; } ;
struct TYPE_2__ {int source_eswitch_owner_vhca_id; } ;
struct mlx5dr_match_param {TYPE_1__ misc; } ;
struct mlx5dr_domain {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5dr_match_param*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

int FUNC_2(struct mlx5dr_ste_build *VAR_2,
      struct mlx5dr_match_param *VAR_3,
      struct mlx5dr_domain *VAR_4,
      bool VAR_5, bool VAR_6)
{
 int VAR_7;


 VAR_2->vhca_id_valid = VAR_3->misc.source_eswitch_owner_vhca_id;

 VAR_7 = FUNC_0(VAR_3, VAR_2->bit_mask);
 if (VAR_7)
  return VAR_7;

 VAR_2->rx = VAR_6;
 VAR_2->dmn = VAR_4;
 VAR_2->inner = VAR_5;
 VAR_2->lu_type = VAR_0;
 VAR_2->byte_mask = FUNC_1(VAR_2->bit_mask);
 VAR_2->ste_build_tag_func = &VAR_1;

 return 0;
}
