
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct netlink_ext_ack* extack; } ;
struct tc_cls_matchall_offload {TYPE_1__ common; } ;
struct netlink_ext_ack {int dummy; } ;
struct mlx5e_priv {int dummy; } ;


 int FUNC_0 (struct mlx5e_priv*,int ,struct netlink_ext_ack*) ;

int FUNC_1(struct mlx5e_priv *VAR_0,
        struct tc_cls_matchall_offload *VAR_1)
{
 struct netlink_ext_ack *VAR_2 = VAR_1->common.extack;

 return FUNC_0(VAR_0, 0, VAR_2);
}
