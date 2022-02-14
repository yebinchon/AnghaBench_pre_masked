
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlxsw_sp_acl_ruleset {int dummy; } ;
struct mlxsw_sp {int core; } ;
typedef enum mlxsw_reg_pemrbt_protocol { ____Placeholder_mlxsw_reg_pemrbt_protocol } mlxsw_reg_pemrbt_protocol ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (struct mlxsw_sp_acl_ruleset*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct mlxsw_sp *VAR_2,
     enum mlxsw_reg_pemrbt_protocol VAR_3,
     struct mlxsw_sp_acl_ruleset *VAR_4)
{
 char VAR_5[VAR_0];
 u16 VAR_6;

 VAR_6 = FUNC_3(VAR_4);

 FUNC_1(VAR_5, VAR_3, VAR_6);
 return FUNC_2(VAR_2->core, FUNC_0(VAR_1), VAR_5);
}
