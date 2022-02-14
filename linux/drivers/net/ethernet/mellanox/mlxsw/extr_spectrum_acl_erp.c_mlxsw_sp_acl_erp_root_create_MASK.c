
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_acl_erp_table {TYPE_1__* ops; } ;
struct mlxsw_sp_acl_erp_key {int ctcam; } ;
struct mlxsw_sp_acl_atcam_region {struct mlxsw_sp_acl_erp_table* erp_table; } ;
struct TYPE_2__ {void* (* erp_create ) (struct mlxsw_sp_acl_erp_table*,struct mlxsw_sp_acl_erp_key*) ;} ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 void* FUNC_1 (struct mlxsw_sp_acl_erp_table*,struct mlxsw_sp_acl_erp_key*) ;

__attribute__((used)) static void *FUNC_2(void *VAR_3, void *VAR_4,
       unsigned int VAR_5)
{
 struct mlxsw_sp_acl_atcam_region *VAR_6 = VAR_3;
 struct mlxsw_sp_acl_erp_table *VAR_7 = VAR_6->erp_table;
 struct mlxsw_sp_acl_erp_key *VAR_8 = VAR_4;

 if (!VAR_8->ctcam &&
     VAR_5 != VAR_2 &&
     VAR_5 >= VAR_1)
  return FUNC_0(-VAR_0);
 return VAR_7->ops->erp_create(VAR_7, VAR_8);
}
