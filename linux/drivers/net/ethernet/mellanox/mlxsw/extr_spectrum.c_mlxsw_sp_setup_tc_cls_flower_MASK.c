
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_block {int dummy; } ;
struct mlxsw_sp {int dummy; } ;
struct flow_cls_offload {int command; } ;


 int VAR_0 ;





 struct mlxsw_sp* FUNC_0 (struct mlxsw_sp_acl_block*) ;
 int FUNC_1 (struct mlxsw_sp*,struct mlxsw_sp_acl_block*,struct flow_cls_offload*) ;
 int FUNC_2 (struct mlxsw_sp*,struct mlxsw_sp_acl_block*,struct flow_cls_offload*) ;
 int FUNC_3 (struct mlxsw_sp*,struct mlxsw_sp_acl_block*,struct flow_cls_offload*) ;
 int FUNC_4 (struct mlxsw_sp*,struct mlxsw_sp_acl_block*,struct flow_cls_offload*) ;
 int FUNC_5 (struct mlxsw_sp*,struct mlxsw_sp_acl_block*,struct flow_cls_offload*) ;

__attribute__((used)) static int
FUNC_6(struct mlxsw_sp_acl_block *VAR_1,
        struct flow_cls_offload *VAR_2)
{
 struct mlxsw_sp *VAR_3 = FUNC_0(VAR_1);

 switch (VAR_2->command) {
 case 131:
  return FUNC_2(VAR_3, VAR_1, VAR_2);
 case 132:
  FUNC_1(VAR_3, VAR_1, VAR_2);
  return 0;
 case 130:
  return FUNC_3(VAR_3, VAR_1, VAR_2);
 case 129:
  return FUNC_4(VAR_3, VAR_1, VAR_2);
 case 128:
  FUNC_5(VAR_3, VAR_1, VAR_2);
  return 0;
 default:
  return -VAR_0;
 }
}
