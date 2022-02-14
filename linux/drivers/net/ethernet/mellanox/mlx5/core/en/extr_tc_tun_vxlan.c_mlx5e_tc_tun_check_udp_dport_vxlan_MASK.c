
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct netlink_ext_ack {int dummy; } ;
struct mlx5e_priv {int netdev; TYPE_2__* mdev; } ;
struct flow_rule {int dummy; } ;
struct flow_match_ports {TYPE_3__* key; } ;
struct TYPE_4__ {struct netlink_ext_ack* extack; } ;
struct flow_cls_offload {TYPE_1__ common; } ;
struct TYPE_6__ {int dst; } ;
struct TYPE_5__ {int vxlan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (int ) ;
 struct flow_rule* FUNC_2 (struct flow_cls_offload*) ;
 int FUNC_3 (struct flow_rule*,struct flow_match_ports*) ;
 int FUNC_4 (struct flow_rule*,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_7(struct mlx5e_priv *VAR_2,
           struct flow_cls_offload *VAR_3)
{
 struct flow_rule *VAR_4 = FUNC_2(VAR_3);
 struct netlink_ext_ack *VAR_5 = VAR_3->common.extack;
 struct flow_match_ports VAR_6;

 if (!FUNC_4(VAR_4, VAR_1))
  return -VAR_0;

 FUNC_3(VAR_4, &VAR_6);



 if (!FUNC_5(VAR_2->mdev->vxlan,
        FUNC_1(VAR_6.key->dst))) {
  FUNC_0(VAR_5,
       "Matched UDP dst port is not registered as a VXLAN port");
  FUNC_6(VAR_2->netdev,
       "UDP port %d is not registered as a VXLAN port\n",
       FUNC_1(VAR_6.key->dst));
  return -VAR_0;
 }

 return 0;
}
