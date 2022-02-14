
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct mlxsw_sp_port {int dummy; } ;
struct mlxsw_sp_acl_block_binding {int ingress; int list; struct mlxsw_sp_port* mlxsw_sp_port; } ;
struct mlxsw_sp_acl_block {int binding_list; scalar_t__ egress_blocker_rule_count; } ;
struct mlxsw_sp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct mlxsw_sp_acl_block_binding*) ;
 struct mlxsw_sp_acl_block_binding* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct mlxsw_sp_acl_block*,struct mlxsw_sp_port*,int) ;
 int FUNC_6 (struct mlxsw_sp*,struct mlxsw_sp_acl_block*,struct mlxsw_sp_acl_block_binding*) ;
 scalar_t__ FUNC_7 (struct mlxsw_sp_acl_block*) ;

int FUNC_8(struct mlxsw_sp *VAR_4,
       struct mlxsw_sp_acl_block *VAR_5,
       struct mlxsw_sp_port *VAR_6,
       bool VAR_7,
       struct netlink_ext_ack *VAR_8)
{
 struct mlxsw_sp_acl_block_binding *VAR_9;
 int VAR_10;

 if (FUNC_1(FUNC_5(VAR_5, VAR_6, VAR_7)))
  return -VAR_0;

 if (!VAR_7 && VAR_5->egress_blocker_rule_count) {
  FUNC_0(VAR_8, "Block cannot be bound to egress because it contains unsupported rules");
  return -VAR_2;
 }

 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_1;
 VAR_9->mlxsw_sp_port = VAR_6;
 VAR_9->ingress = VAR_7;

 if (FUNC_7(VAR_5)) {
  VAR_10 = FUNC_6(VAR_4, VAR_5, VAR_9);
  if (VAR_10)
   goto err_ruleset_bind;
 }

 FUNC_4(&VAR_9->list, &VAR_5->binding_list);
 return 0;

err_ruleset_bind:
 FUNC_2(VAR_9);
 return VAR_10;
}
