
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pedit_headers_action {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct mlx5e_tc_flow_parse_attr {int spec; } ;
struct mlx5e_priv {int dummy; } ;
struct TYPE_2__ {int prio; int vid; } ;
struct flow_action_entry {TYPE_1__ vlan; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct mlx5e_priv*,int ,struct flow_action_entry const*,struct mlx5e_tc_flow_parse_attr*,struct pedit_headers_action*,int *,struct netlink_ext_ack*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int
FUNC_4(struct mlx5e_priv *VAR_3,
     struct mlx5e_tc_flow_parse_attr *VAR_4,
     struct pedit_headers_action *VAR_5,
     u32 *VAR_6, struct netlink_ext_ack *VAR_7)
{
 const struct flow_action_entry VAR_8 = {
  .vlan.vid = 0,
  .vlan.prio =
   FUNC_0(VAR_2,
     FUNC_3(*VAR_6,
        &VAR_4->spec),
     VAR_1) &
   FUNC_0(VAR_2,
     FUNC_2(*VAR_6,
           &VAR_4->spec),
     VAR_1),
 };

 return FUNC_1(VAR_3, VAR_0,
           &VAR_8, VAR_4, VAR_5, VAR_6,
           VAR_7);
}
