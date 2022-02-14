
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct netlink_ext_ack {int dummy; } ;
struct mlxsw_sp_acl_rule_info {int act_block; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (int ,int ,struct netlink_ext_ack*) ;

int FUNC_1(struct mlxsw_sp *VAR_0,
       struct mlxsw_sp_acl_rule_info *VAR_1,
       u16 VAR_2, struct netlink_ext_ack *VAR_3)
{
 return FUNC_0(VAR_1->act_block, VAR_2, VAR_3);
}
