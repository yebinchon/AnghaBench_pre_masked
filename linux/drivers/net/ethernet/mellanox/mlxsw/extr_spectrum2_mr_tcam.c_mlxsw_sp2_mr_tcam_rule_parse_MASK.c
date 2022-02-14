
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_mr_route_key {int vrid; int proto; } ;
struct mlxsw_sp_acl_rule_info {unsigned int priority; } ;
struct mlxsw_sp_acl_rule {int dummy; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;


 void FUNC_1 (struct mlxsw_sp_acl_rule_info*,struct mlxsw_sp_mr_route_key*) ;
 void FUNC_2 (struct mlxsw_sp_acl_rule_info*,struct mlxsw_sp_mr_route_key*) ;
 struct mlxsw_sp_acl_rule_info* FUNC_3 (struct mlxsw_sp_acl_rule*) ;
 int FUNC_4 (struct mlxsw_sp_acl_rule_info*,int ,int,int ) ;

__attribute__((used)) static void
FUNC_5(struct mlxsw_sp_acl_rule *VAR_2,
        struct mlxsw_sp_mr_route_key *VAR_3,
        unsigned int VAR_4)
{
 struct mlxsw_sp_acl_rule_info *VAR_5;

 VAR_5 = FUNC_3(VAR_2);
 VAR_5->priority = VAR_4;
 FUNC_4(VAR_5, VAR_0,
           VAR_3->vrid, FUNC_0(7, 0));
 FUNC_4(VAR_5,
           VAR_1,
           VAR_3->vrid >> 8, FUNC_0(2, 0));
 switch (VAR_3->proto) {
 case 129:
  return FUNC_1(VAR_5, VAR_3);
 case 128:
  return FUNC_2(VAR_5, VAR_3);
 }
}
