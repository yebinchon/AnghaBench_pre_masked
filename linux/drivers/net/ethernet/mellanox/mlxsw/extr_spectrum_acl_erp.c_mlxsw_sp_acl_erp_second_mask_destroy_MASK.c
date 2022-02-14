
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_acl_erp_table {int * ops; } ;
struct TYPE_2__ {scalar_t__ ctcam; } ;
struct mlxsw_sp_acl_erp {int index; TYPE_1__ key; } ;


 int VAR_0 ;
 void FUNC_0 (struct mlxsw_sp_acl_erp*) ;
 int FUNC_1 (struct mlxsw_sp_acl_erp*) ;
 int FUNC_2 (struct mlxsw_sp_acl_erp_table*,int ) ;
 int FUNC_3 (struct mlxsw_sp_acl_erp*) ;
 int FUNC_4 (struct mlxsw_sp_acl_erp_table*) ;
 int FUNC_5 (struct mlxsw_sp_acl_erp*) ;

__attribute__((used)) static void
FUNC_6(struct mlxsw_sp_acl_erp_table *VAR_1,
         struct mlxsw_sp_acl_erp *VAR_2)
{
 if (VAR_2->key.ctcam)
  return FUNC_0(VAR_2);

 FUNC_3(VAR_2);
 FUNC_5(VAR_2);
 FUNC_2(VAR_1, VAR_2->index);
 FUNC_1(VAR_2);

 FUNC_4(VAR_1);

 VAR_1->ops = &VAR_0;
}
