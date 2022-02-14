
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct objagg_hints {int dummy; } ;
struct mlxsw_sp_acl_erp_table {int objagg_lock; struct mlxsw_sp_acl_atcam_region* aregion; int atcam_erps_list; int * ops; int erp_core; int objagg; } ;
struct mlxsw_sp_acl_atcam_region {TYPE_1__* atcam; } ;
struct TYPE_2__ {int erp_core; } ;


 int VAR_0 ;
 struct mlxsw_sp_acl_erp_table* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (struct mlxsw_sp_acl_erp_table*) ;
 struct mlxsw_sp_acl_erp_table* FUNC_5 (int,int ) ;
 int VAR_3 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,struct objagg_hints*,struct mlxsw_sp_acl_atcam_region*) ;

__attribute__((used)) static struct mlxsw_sp_acl_erp_table *
FUNC_8(struct mlxsw_sp_acl_atcam_region *VAR_4,
         struct objagg_hints *VAR_5)
{
 struct mlxsw_sp_acl_erp_table *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_5(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_6->objagg = FUNC_7(&VAR_3,
       VAR_5, VAR_4);
 if (FUNC_2(VAR_6->objagg)) {
  VAR_7 = FUNC_3(VAR_6->objagg);
  goto err_objagg_create;
 }

 VAR_6->erp_core = VAR_4->atcam->erp_core;
 VAR_6->ops = &VAR_2;
 FUNC_1(&VAR_6->atcam_erps_list);
 VAR_6->aregion = VAR_4;
 FUNC_6(&VAR_6->objagg_lock);

 return VAR_6;

err_objagg_create:
 FUNC_4(VAR_6);
 return FUNC_0(VAR_7);
}
