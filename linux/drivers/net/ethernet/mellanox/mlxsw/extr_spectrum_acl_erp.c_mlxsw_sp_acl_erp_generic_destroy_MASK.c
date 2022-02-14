
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_erp_table {int num_atcam_erps; } ;
struct mlxsw_sp_acl_erp {int id; int list; int key; struct mlxsw_sp_acl_erp_table* erp_table; } ;


 int FUNC_0 (struct mlxsw_sp_acl_erp*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlxsw_sp_acl_erp_table*,int ) ;
 int FUNC_3 (struct mlxsw_sp_acl_erp_table*,int *) ;

__attribute__((used)) static void
FUNC_4(struct mlxsw_sp_acl_erp *VAR_0)
{
 struct mlxsw_sp_acl_erp_table *VAR_1 = VAR_0->erp_table;

 FUNC_3(VAR_1, &VAR_0->key);
 VAR_1->num_atcam_erps--;
 FUNC_1(&VAR_0->list);
 FUNC_2(VAR_1, VAR_0->id);
 FUNC_0(VAR_0);
}
