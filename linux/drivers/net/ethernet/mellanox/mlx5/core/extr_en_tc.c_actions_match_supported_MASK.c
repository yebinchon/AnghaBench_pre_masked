
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct netlink_ext_ack {int dummy; } ;
struct mlx5e_tc_flow_parse_attr {int spec; } ;
struct mlx5e_tc_flow {TYPE_2__* nic_attr; TYPE_1__* esw_attr; } ;
struct mlx5e_priv {int dummy; } ;
struct flow_action {int dummy; } ;
struct TYPE_4__ {int action; } ;
struct TYPE_3__ {int action; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct mlx5e_tc_flow*,int ) ;
 scalar_t__ FUNC_1 (struct mlx5e_tc_flow*) ;
 int FUNC_2 (int *,struct flow_action*,int,struct netlink_ext_ack*) ;

__attribute__((used)) static bool FUNC_3(struct mlx5e_priv *VAR_5,
        struct flow_action *VAR_6,
        struct mlx5e_tc_flow_parse_attr *VAR_7,
        struct mlx5e_tc_flow *VAR_8,
        struct netlink_ext_ack *VAR_9)
{
 u32 VAR_10;

 if (FUNC_1(VAR_8))
  VAR_10 = VAR_8->esw_attr->action;
 else
  VAR_10 = VAR_8->nic_attr->action;

 if (FUNC_0(VAR_8, VAR_0) &&
     !((VAR_10 & VAR_1) ||
       (VAR_10 & VAR_4) ||
       (VAR_10 & VAR_2)))
  return 0;

 if (VAR_10 & VAR_3)
  return FUNC_2(&VAR_7->spec,
           VAR_6, VAR_10,
           VAR_9);

 return 1;
}
