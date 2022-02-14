
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlxsw_sp_port {scalar_t__ mlxsw_sp; int local_port; } ;
struct mlxsw_sp_acl_rule_info {int dummy; } ;
struct mlxsw_sp_acl_block {scalar_t__ mlxsw_sp; int net; } ;
struct flow_rule {int dummy; } ;
struct flow_match_meta {TYPE_2__* key; TYPE_1__* mask; } ;
struct TYPE_6__ {int extack; } ;
struct flow_cls_offload {TYPE_3__ common; } ;
struct TYPE_5__ {int ingress_ifindex; } ;
struct TYPE_4__ {int ingress_ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 struct net_device* FUNC_1 (int ,int ) ;
 struct flow_rule* FUNC_2 (struct flow_cls_offload*) ;
 int FUNC_3 (struct flow_rule*,int ) ;
 int FUNC_4 (struct flow_rule*,struct flow_match_meta*) ;
 int FUNC_5 (struct mlxsw_sp_acl_rule_info*,int ,int ,int) ;
 int FUNC_6 (struct net_device*) ;
 struct mlxsw_sp_port* FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct mlxsw_sp_acl_rule_info *VAR_3,
          struct flow_cls_offload *VAR_4,
          struct mlxsw_sp_acl_block *VAR_5)
{
 struct flow_rule *VAR_6 = FUNC_2(VAR_4);
 struct mlxsw_sp_port *VAR_7;
 struct net_device *VAR_8;
 struct flow_match_meta VAR_9;

 if (!FUNC_3(VAR_6, VAR_1))
  return 0;

 FUNC_4(VAR_6, &VAR_9);
 if (VAR_9.mask->ingress_ifindex != 0xFFFFFFFF) {
  FUNC_0(VAR_4->common.extack, "Unsupported ingress ifindex mask");
  return -VAR_0;
 }

 VAR_8 = FUNC_1(VAR_5->net,
      VAR_9.key->ingress_ifindex);
 if (!VAR_8) {
  FUNC_0(VAR_4->common.extack, "Can't find specified ingress port to match on");
  return -VAR_0;
 }

 if (!FUNC_6(VAR_8)) {
  FUNC_0(VAR_4->common.extack, "Can't match on non-mlxsw ingress port");
  return -VAR_0;
 }

 VAR_7 = FUNC_7(VAR_8);
 if (VAR_7->mlxsw_sp != VAR_5->mlxsw_sp) {
  FUNC_0(VAR_4->common.extack, "Can't match on a port from different device");
  return -VAR_0;
 }

 FUNC_5(VAR_3,
           VAR_2,
           VAR_7->local_port,
           0xFFFFFFFF);
 return 0;
}
