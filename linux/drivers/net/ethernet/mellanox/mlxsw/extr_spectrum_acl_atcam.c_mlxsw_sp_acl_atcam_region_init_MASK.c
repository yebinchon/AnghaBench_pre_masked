
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_acl_tcam_region {int dummy; } ;
struct mlxsw_sp_acl_ctcam_region_ops {int dummy; } ;
struct mlxsw_sp_acl_atcam_region {int entries_ht; TYPE_1__* ops; int cregion; int entries_list; struct mlxsw_sp_acl_atcam* atcam; struct mlxsw_sp_acl_tcam_region* region; } ;
struct mlxsw_sp_acl_atcam {int dummy; } ;
struct mlxsw_sp {int dummy; } ;
struct TYPE_2__ {int (* init ) (struct mlxsw_sp_acl_atcam_region*) ;int (* fini ) (struct mlxsw_sp_acl_atcam_region*) ;} ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct mlxsw_sp_acl_atcam_region*) ;
 int FUNC_2 (struct mlxsw_sp*,int *,struct mlxsw_sp_acl_tcam_region*,struct mlxsw_sp_acl_ctcam_region_ops const*) ;
 int FUNC_3 (struct mlxsw_sp_acl_atcam_region*) ;
 int FUNC_4 (struct mlxsw_sp_acl_atcam_region*,void*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct mlxsw_sp_acl_atcam_region*) ;
 int FUNC_8 (struct mlxsw_sp_acl_atcam_region*) ;

int
FUNC_9(struct mlxsw_sp *VAR_1,
          struct mlxsw_sp_acl_atcam *VAR_2,
          struct mlxsw_sp_acl_atcam_region *VAR_3,
          struct mlxsw_sp_acl_tcam_region *VAR_4,
          void *VAR_5,
          const struct mlxsw_sp_acl_ctcam_region_ops *VAR_6)
{
 int VAR_7;

 VAR_3->region = VAR_4;
 VAR_3->atcam = VAR_2;
 FUNC_1(VAR_3);
 FUNC_0(&VAR_3->entries_list);

 VAR_7 = FUNC_6(&VAR_3->entries_ht,
         &VAR_0);
 if (VAR_7)
  return VAR_7;
 VAR_7 = VAR_3->ops->init(VAR_3);
 if (VAR_7)
  goto err_ops_init;
 VAR_7 = FUNC_4(VAR_3, VAR_5);
 if (VAR_7)
  goto err_erp_region_init;
 VAR_7 = FUNC_2(VAR_1, &VAR_3->cregion,
          VAR_4, VAR_6);
 if (VAR_7)
  goto err_ctcam_region_init;

 return 0;

err_ctcam_region_init:
 FUNC_3(VAR_3);
err_erp_region_init:
 VAR_3->ops->fini(VAR_3);
err_ops_init:
 FUNC_5(&VAR_3->entries_ht);
 return VAR_7;
}
