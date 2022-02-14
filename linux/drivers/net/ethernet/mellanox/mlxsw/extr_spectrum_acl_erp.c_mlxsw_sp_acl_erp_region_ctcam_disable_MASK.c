
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_erp_table {int num_ctcam_erps; } ;


 int FUNC_0 (struct mlxsw_sp_acl_erp_table*,int) ;

__attribute__((used)) static void
FUNC_1(struct mlxsw_sp_acl_erp_table *VAR_0)
{

 if (VAR_0->num_ctcam_erps > 1)
  return;

 FUNC_0(VAR_0, 0);
}
