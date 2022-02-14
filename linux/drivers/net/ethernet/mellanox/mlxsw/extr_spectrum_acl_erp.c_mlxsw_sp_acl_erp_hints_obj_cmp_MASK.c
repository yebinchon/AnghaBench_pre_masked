
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_erp_key {int mask; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const struct mlxsw_sp_acl_erp_key *VAR_2 = VAR_0;
 const struct mlxsw_sp_acl_erp_key *VAR_3 = VAR_1;





 return FUNC_0(VAR_2->mask, VAR_3->mask, sizeof(VAR_2->mask));
}
