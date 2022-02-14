
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int prio; struct netlink_ext_ack* extack; } ;
struct tc_cls_matchall_offload {TYPE_2__* rule; TYPE_1__ common; } ;
struct netlink_ext_ack {int dummy; } ;
struct mlx5e_priv {int dummy; } ;
struct TYPE_4__ {int action; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mlx5e_priv*,int *,struct netlink_ext_ack*) ;

int FUNC_3(struct mlx5e_priv *VAR_1,
    struct tc_cls_matchall_offload *VAR_2)
{
 struct netlink_ext_ack *VAR_3 = VAR_2->common.extack;
 int VAR_4 = FUNC_1(VAR_2->common.prio) >> 16;

 if (VAR_4 != 1) {
  FUNC_0(VAR_3, "only priority 1 is supported");
  return -VAR_0;
 }

 return FUNC_2(VAR_1, &VAR_2->rule->action, VAR_3);
}
