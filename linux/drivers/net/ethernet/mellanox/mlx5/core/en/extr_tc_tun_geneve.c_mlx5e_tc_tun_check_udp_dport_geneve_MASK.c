
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct netlink_ext_ack {int dummy; } ;
struct mlx5e_priv {int netdev; } ;
struct flow_rule {int dummy; } ;
struct flow_match_ports {TYPE_2__* key; } ;
struct TYPE_3__ {struct netlink_ext_ack* extack; } ;
struct flow_cls_offload {TYPE_1__ common; } ;
struct TYPE_4__ {int dst; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 struct flow_rule* FUNC_2 (struct flow_cls_offload*) ;
 int FUNC_3 (struct flow_rule*,struct flow_match_ports*) ;
 int FUNC_4 (struct flow_rule*,int ) ;
 int FUNC_5 (int ,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct mlx5e_priv *VAR_3,
            struct flow_cls_offload *VAR_4)
{
 struct flow_rule *VAR_5 = FUNC_2(VAR_4);
 struct netlink_ext_ack *VAR_6 = VAR_4->common.extack;
 struct flow_match_ports VAR_7;

 if (!FUNC_4(VAR_5, VAR_1))
  return -VAR_0;

 FUNC_3(VAR_5, &VAR_7);




 if (FUNC_1(VAR_7.key->dst) != VAR_2) {
  FUNC_0(VAR_6,
       "Matched UDP dst port is not registered as a GENEVE port");
  FUNC_5(VAR_3->netdev,
       "UDP port %d is not registered as a GENEVE port\n",
       FUNC_1(VAR_7.key->dst));
  return -VAR_0;
 }

 return 0;
}
