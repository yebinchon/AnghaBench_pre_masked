
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mlxsw_sp_acl_erp_key {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp_acl_erp_key const*,struct mlxsw_sp_acl_erp_key const*,int *,int *) ;

__attribute__((used)) static bool FUNC_1(void *VAR_0, const void *VAR_1,
      const void *VAR_2)
{
 const struct mlxsw_sp_acl_erp_key *VAR_3 = VAR_1;
 const struct mlxsw_sp_acl_erp_key *VAR_4 = VAR_2;
 u16 VAR_5;
 u8 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_3, VAR_4,
       &VAR_5, &VAR_6);
 return VAR_7 ? 0 : 1;
}
