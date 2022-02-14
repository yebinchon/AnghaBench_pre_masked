
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_acl_atcam_region {int entries_list; int entries_ht; TYPE_1__* ops; int cregion; } ;
struct TYPE_2__ {int (* fini ) (struct mlxsw_sp_acl_atcam_region*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mlxsw_sp_acl_atcam_region*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mlxsw_sp_acl_atcam_region*) ;

void FUNC_6(struct mlxsw_sp_acl_atcam_region *VAR_0)
{
 FUNC_2(&VAR_0->cregion);
 FUNC_3(VAR_0);
 VAR_0->ops->fini(VAR_0);
 FUNC_4(&VAR_0->entries_ht);
 FUNC_0(!FUNC_1(&VAR_0->entries_list));
}
