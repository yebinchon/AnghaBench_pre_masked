
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct mlxsw_sp_acl_rule_info {int egress_bind_blocker; } ;
struct mlxsw_sp_acl_block {int dummy; } ;
struct mlxsw_sp {TYPE_2__* bus_info; } ;
struct TYPE_14__ {struct flow_dissector* dissector; } ;
struct flow_rule {TYPE_1__ match; } ;
struct flow_match_vlan {TYPE_9__* mask; TYPE_8__* key; } ;
struct flow_match_eth_addrs {TYPE_7__* mask; TYPE_6__* key; } ;
struct flow_match_control {TYPE_3__* key; } ;
struct flow_match_basic {TYPE_5__* mask; TYPE_4__* key; } ;
struct flow_dissector {int used_keys; } ;
struct TYPE_13__ {int extack; int prio; } ;
struct flow_cls_offload {TYPE_11__ common; TYPE_10__* rule; } ;
struct TYPE_22__ {scalar_t__ vlan_id; scalar_t__ vlan_priority; } ;
struct TYPE_21__ {scalar_t__ vlan_id; scalar_t__ vlan_priority; } ;
struct TYPE_20__ {scalar_t__ src; scalar_t__ dst; } ;
struct TYPE_19__ {scalar_t__ src; scalar_t__ dst; } ;
struct TYPE_18__ {scalar_t__ ip_proto; int n_proto; } ;
struct TYPE_17__ {scalar_t__ ip_proto; int n_proto; } ;
struct TYPE_16__ {scalar_t__ addr_type; } ;
struct TYPE_15__ {int dev; } ;
struct TYPE_12__ {int action; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 struct flow_rule* FUNC_3 (struct flow_cls_offload*) ;
 int FUNC_4 (struct flow_rule*,struct flow_match_basic*) ;
 int FUNC_5 (struct flow_rule*,struct flow_match_control*) ;
 int FUNC_6 (struct flow_rule*,struct flow_match_eth_addrs*) ;
 scalar_t__ FUNC_7 (struct flow_rule*,scalar_t__) ;
 int FUNC_8 (struct flow_rule*,struct flow_match_vlan*) ;
 scalar_t__ FUNC_9 (struct mlxsw_sp_acl_block*) ;
 int FUNC_10 (struct mlxsw_sp_acl_rule_info*,int ,scalar_t__,scalar_t__,int) ;
 int FUNC_11 (struct mlxsw_sp_acl_rule_info*,int ,scalar_t__,scalar_t__) ;
 int FUNC_12 (struct mlxsw_sp_acl_rule_info*,int ) ;
 int FUNC_13 (struct mlxsw_sp*,struct mlxsw_sp_acl_block*,struct mlxsw_sp_acl_rule_info*,int *,int ) ;
 int FUNC_14 (struct mlxsw_sp*,struct mlxsw_sp_acl_rule_info*,struct flow_cls_offload*,scalar_t__) ;
 int FUNC_15 (struct mlxsw_sp_acl_rule_info*,struct flow_cls_offload*) ;
 int FUNC_16 (struct mlxsw_sp_acl_rule_info*,struct flow_cls_offload*) ;
 int FUNC_17 (struct mlxsw_sp_acl_rule_info*,struct flow_cls_offload*,struct mlxsw_sp_acl_block*) ;
 int FUNC_18 (struct mlxsw_sp*,struct mlxsw_sp_acl_rule_info*,struct flow_cls_offload*,scalar_t__) ;
 int FUNC_19 (struct mlxsw_sp*,struct mlxsw_sp_acl_rule_info*,struct flow_cls_offload*,scalar_t__) ;
 scalar_t__ FUNC_20 (int ) ;

__attribute__((used)) static int FUNC_21(struct mlxsw_sp *VAR_20,
     struct mlxsw_sp_acl_block *VAR_21,
     struct mlxsw_sp_acl_rule_info *VAR_22,
     struct flow_cls_offload *VAR_23)
{
 struct flow_rule *VAR_24 = FUNC_3(VAR_23);
 struct flow_dissector *VAR_25 = VAR_24->match.dissector;
 u16 VAR_26 = 0;
 u16 VAR_27 = 0;
 u16 VAR_28 = 0;
 u8 VAR_29 = 0;
 int VAR_30;

 if (VAR_25->used_keys &
     ~(FUNC_0(VAR_8) |
       FUNC_0(VAR_3) |
       FUNC_0(VAR_2) |
       FUNC_0(VAR_4) |
       FUNC_0(VAR_6) |
       FUNC_0(VAR_7) |
       FUNC_0(VAR_9) |
       FUNC_0(VAR_10) |
       FUNC_0(VAR_5) |
       FUNC_0(VAR_11))) {
  FUNC_2(VAR_20->bus_info->dev, "Unsupported key\n");
  FUNC_1(VAR_23->common.extack, "Unsupported key");
  return -VAR_0;
 }

 FUNC_12(VAR_22, VAR_23->common.prio);

 VAR_30 = FUNC_17(VAR_22, VAR_23, VAR_21);
 if (VAR_30)
  return VAR_30;

 if (FUNC_7(VAR_24, VAR_3)) {
  struct flow_match_control VAR_31;

  FUNC_5(VAR_24, &VAR_31);
  VAR_28 = VAR_31.key->addr_type;
 }

 if (FUNC_7(VAR_24, VAR_2)) {
  struct flow_match_basic VAR_32;

  FUNC_4(VAR_24, &VAR_32);
  VAR_27 = FUNC_20(VAR_32.key->n_proto);
  VAR_26 = FUNC_20(VAR_32.mask->n_proto);

  if (VAR_27 == VAR_1) {
   VAR_27 = 0;
   VAR_26 = 0;
  }
  FUNC_11(VAR_22,
            VAR_14,
            VAR_27, VAR_26);

  VAR_29 = VAR_32.key->ip_proto;
  FUNC_11(VAR_22,
            VAR_15,
            VAR_32.key->ip_proto,
            VAR_32.mask->ip_proto);
 }

 if (FUNC_7(VAR_24, VAR_4)) {
  struct flow_match_eth_addrs VAR_33;

  FUNC_6(VAR_24, &VAR_33);
  FUNC_10(VAR_22,
            VAR_13,
            VAR_33.key->dst,
            VAR_33.mask->dst, 2);
  FUNC_10(VAR_22,
            VAR_12,
            VAR_33.key->dst + 2,
            VAR_33.mask->dst + 2, 4);
  FUNC_10(VAR_22,
            VAR_18,
            VAR_33.key->src,
            VAR_33.mask->src, 2);
  FUNC_10(VAR_22,
            VAR_17,
            VAR_33.key->src + 2,
            VAR_33.mask->src + 2, 4);
 }

 if (FUNC_7(VAR_24, VAR_11)) {
  struct flow_match_vlan VAR_34;

  FUNC_8(VAR_24, &VAR_34);
  if (FUNC_9(VAR_21)) {
   FUNC_1(VAR_23->common.extack, "vlan_id key is not supported on egress");
   return -VAR_0;
  }




  VAR_22->egress_bind_blocker = 1;

  if (VAR_34.mask->vlan_id != 0)
   FUNC_11(VAR_22,
             VAR_19,
             VAR_34.key->vlan_id,
             VAR_34.mask->vlan_id);
  if (VAR_34.mask->vlan_priority != 0)
   FUNC_11(VAR_22,
             VAR_16,
             VAR_34.key->vlan_priority,
             VAR_34.mask->vlan_priority);
 }

 if (VAR_28 == VAR_6)
  FUNC_15(VAR_22, VAR_23);

 if (VAR_28 == VAR_7)
  FUNC_16(VAR_22, VAR_23);

 VAR_30 = FUNC_18(VAR_20, VAR_22, VAR_23, VAR_29);
 if (VAR_30)
  return VAR_30;
 VAR_30 = FUNC_19(VAR_20, VAR_22, VAR_23, VAR_29);
 if (VAR_30)
  return VAR_30;

 VAR_30 = FUNC_14(VAR_20, VAR_22, VAR_23, VAR_27 & VAR_26);
 if (VAR_30)
  return VAR_30;

 return FUNC_13(VAR_20, VAR_21, VAR_22,
          &VAR_23->rule->action,
          VAR_23->common.extack);
}
