
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_erp_table {int * ops; } ;
struct mlxsw_sp_acl_erp_key {scalar_t__ ctcam; } ;
struct mlxsw_sp_acl_erp {int dummy; } ;


 int VAR_0 ;
 struct mlxsw_sp_acl_erp* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct mlxsw_sp_acl_erp*) ;
 int VAR_1 ;
 struct mlxsw_sp_acl_erp* FUNC_2 (struct mlxsw_sp_acl_erp_table*,struct mlxsw_sp_acl_erp_key*) ;

__attribute__((used)) static struct mlxsw_sp_acl_erp *
FUNC_3(struct mlxsw_sp_acl_erp_table *VAR_2,
       struct mlxsw_sp_acl_erp_key *VAR_3)
{
 struct mlxsw_sp_acl_erp *VAR_4;

 if (VAR_3->ctcam)
  return FUNC_0(-VAR_0);

 VAR_4 = FUNC_2(VAR_2, VAR_3);
 if (FUNC_1(VAR_4))
  return VAR_4;

 VAR_2->ops = &VAR_1;

 return VAR_4;
}
