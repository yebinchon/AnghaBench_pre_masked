
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct netlink_ext_ack {int dummy; } ;
struct mlx5e_priv {int netdev; } ;
struct mlx5_flow_spec {int dummy; } ;
struct flow_rule {int dummy; } ;
struct flow_match_ports {TYPE_3__* key; TYPE_2__* mask; } ;
struct TYPE_4__ {struct netlink_ext_ack* extack; } ;
struct flow_cls_offload {TYPE_1__ common; } ;
struct TYPE_6__ {int src; int dst; } ;
struct TYPE_5__ {int src; int dst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,void*,int ,int ) ;
 int FUNC_1 (int ,void*,int ) ;
 int FUNC_2 (struct netlink_ext_ack*,char*) ;
 struct flow_rule* FUNC_3 (struct flow_cls_offload*) ;
 int FUNC_4 (struct flow_rule*,struct flow_match_ports*) ;
 int FUNC_5 (struct flow_rule*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (int *,int,int) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ) ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_9(struct mlx5e_priv *VAR_7,
     struct mlx5_flow_spec *VAR_8,
     struct flow_cls_offload *VAR_9,
     void *VAR_10,
     void *VAR_11)
{
 struct flow_rule *VAR_12 = FUNC_3(VAR_9);
 struct netlink_ext_ack *VAR_13 = VAR_9->common.extack;
 struct flow_match_ports VAR_14;



 if (!FUNC_5(VAR_12, VAR_1)) {
  FUNC_2(VAR_13,
       "UDP tunnel decap filter must include enc_dst_port condition");
  FUNC_7(VAR_7->netdev,
       "UDP tunnel decap filter must include enc_dst_port condition\n");
  return -VAR_0;
 }

 FUNC_4(VAR_12, &VAR_14);

 if (FUNC_6(&VAR_14.mask->dst, 0xff,
         sizeof(VAR_14.mask->dst))) {
  FUNC_2(VAR_13,
       "UDP tunnel decap filter must match enc_dst_port fully");
  FUNC_7(VAR_7->netdev,
       "UDP tunnel decap filter must match enc_dst_port fully\n");
  return -VAR_0;
 }



 FUNC_1(VAR_3, VAR_10, VAR_4);
 FUNC_0(VAR_3, VAR_11, VAR_4, VAR_2);

 FUNC_0(VAR_3, VAR_10, VAR_5,
   FUNC_8(VAR_14.mask->dst));
 FUNC_0(VAR_3, VAR_11, VAR_5,
   FUNC_8(VAR_14.key->dst));






 FUNC_0(VAR_3, VAR_10, VAR_6,
   FUNC_8(VAR_14.mask->src));
 FUNC_0(VAR_3, VAR_11, VAR_6,
   FUNC_8(VAR_14.key->src));

 return 0;
}
