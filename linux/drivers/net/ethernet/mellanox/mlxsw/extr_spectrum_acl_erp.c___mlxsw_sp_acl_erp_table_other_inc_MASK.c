
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_erp_table {int * ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlxsw_sp_acl_erp_table*) ;
 int FUNC_1 (struct mlxsw_sp_acl_erp_table*) ;

__attribute__((used)) static int
FUNC_2(struct mlxsw_sp_acl_erp_table *VAR_1,
       unsigned int *VAR_2)
{
 int VAR_3;




 if (!FUNC_1(VAR_1)) {
  VAR_3 = FUNC_0(VAR_1);
  if (VAR_3)
   return VAR_3;
 }


 if (VAR_1->ops != &VAR_0)
  VAR_1->ops = &VAR_0;

 (*VAR_2)++;

 return 0;
}
