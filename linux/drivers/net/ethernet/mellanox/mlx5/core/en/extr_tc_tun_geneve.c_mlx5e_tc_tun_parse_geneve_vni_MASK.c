
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct netlink_ext_ack {int dummy; } ;
struct mlx5e_priv {int netdev; int mdev; } ;
struct mlx5_flow_spec {int match_value; int match_criteria; } ;
struct flow_rule {int dummy; } ;
struct flow_match_enc_keyid {TYPE_3__* key; TYPE_2__* mask; } ;
struct TYPE_5__ {struct netlink_ext_ack* extack; } ;
struct flow_cls_offload {TYPE_1__ common; } ;
struct TYPE_8__ {int outer_geneve_vni; } ;
struct TYPE_7__ {int keyid; } ;
struct TYPE_6__ {int keyid; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,void*,int ,int ) ;
 int FUNC_3 (struct netlink_ext_ack*,char*) ;
 int FUNC_4 (int ) ;
 struct flow_rule* FUNC_5 (struct flow_cls_offload*) ;
 int FUNC_6 (struct flow_rule*,struct flow_match_enc_keyid*) ;
 int FUNC_7 (struct flow_rule*,int ) ;
 TYPE_4__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static int FUNC_9(struct mlx5e_priv *VAR_7,
      struct mlx5_flow_spec *VAR_8,
      struct flow_cls_offload *VAR_9)
{
 struct flow_rule *VAR_10 = FUNC_5(VAR_9);
 struct netlink_ext_ack *VAR_11 = VAR_9->common.extack;
 struct flow_match_enc_keyid VAR_12;
 void *VAR_13, *VAR_14;

 VAR_13 = FUNC_0(VAR_3, VAR_8->match_criteria, VAR_6);
 VAR_14 = FUNC_0(VAR_3, VAR_8->match_value, VAR_6);

 if (!FUNC_7(VAR_10, VAR_1))
  return 0;

 FUNC_6(VAR_10, &VAR_12);

 if (!VAR_12.mask->keyid)
  return 0;

 if (!FUNC_1(VAR_7->mdev, VAR_2.outer_geneve_vni)) {
  FUNC_3(VAR_11, "Matching on GENEVE VNI is not supported");
  FUNC_8(VAR_7->netdev, "Matching on GENEVE VNI is not supported\n");
  return -VAR_0;
 }

 FUNC_2(VAR_4, VAR_13, VAR_5, FUNC_4(VAR_12.mask->keyid));
 FUNC_2(VAR_4, VAR_14, VAR_5, FUNC_4(VAR_12.key->keyid));

 return 0;
}
