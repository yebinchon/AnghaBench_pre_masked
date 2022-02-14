
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct netlink_ext_ack {int dummy; } ;
struct mlx5e_priv {int mdev; int netdev; } ;
struct mlx5_flow_spec {int match_value; int match_criteria; } ;
struct TYPE_3__ {struct netlink_ext_ack* extack; } ;
struct flow_cls_offload {TYPE_1__ common; } ;
struct TYPE_4__ {int outer_geneve_protocol_type; int outer_geneve_oam; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,void*,int ,int ) ;
 int FUNC_3 (int ,void*,int ) ;
 int FUNC_4 (struct netlink_ext_ack*,char*) ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(struct mlx5e_priv *VAR_8,
         struct mlx5_flow_spec *VAR_9,
         struct flow_cls_offload *VAR_10)
{
 void *VAR_11 = FUNC_0(VAR_3, VAR_9->match_criteria, VAR_7);
 void *VAR_12 = FUNC_0(VAR_3, VAR_9->match_value, VAR_7);
 struct netlink_ext_ack *VAR_13 = VAR_10->common.extack;



 if (!FUNC_1(VAR_8->mdev, VAR_2.outer_geneve_oam)) {
  FUNC_4(VAR_13, "Matching on GENEVE OAM is not supported");
  FUNC_5(VAR_8->netdev, "Matching on GENEVE OAM is not supported\n");
  return -VAR_0;
 }
 FUNC_3(VAR_4, VAR_11, VAR_5);
 FUNC_2(VAR_4, VAR_12, VAR_5, 0);



 if (FUNC_1(VAR_8->mdev,
           VAR_2.outer_geneve_protocol_type)) {
  FUNC_3(VAR_4, VAR_11, VAR_6);
  FUNC_2(VAR_4, VAR_12, VAR_6, VAR_1);
 }

 return 0;
}
