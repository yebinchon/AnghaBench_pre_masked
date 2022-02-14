
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_62__ TYPE_9__ ;
typedef struct TYPE_61__ TYPE_8__ ;
typedef struct TYPE_60__ TYPE_7__ ;
typedef struct TYPE_59__ TYPE_6__ ;
typedef struct TYPE_58__ TYPE_5__ ;
typedef struct TYPE_57__ TYPE_4__ ;
typedef struct TYPE_56__ TYPE_3__ ;
typedef struct TYPE_55__ TYPE_31__ ;
typedef struct TYPE_54__ TYPE_30__ ;
typedef struct TYPE_53__ TYPE_2__ ;
typedef struct TYPE_52__ TYPE_29__ ;
typedef struct TYPE_51__ TYPE_28__ ;
typedef struct TYPE_50__ TYPE_27__ ;
typedef struct TYPE_49__ TYPE_26__ ;
typedef struct TYPE_48__ TYPE_25__ ;
typedef struct TYPE_47__ TYPE_24__ ;
typedef struct TYPE_46__ TYPE_23__ ;
typedef struct TYPE_45__ TYPE_22__ ;
typedef struct TYPE_44__ TYPE_21__ ;
typedef struct TYPE_43__ TYPE_20__ ;
typedef struct TYPE_42__ TYPE_1__ ;
typedef struct TYPE_41__ TYPE_19__ ;
typedef struct TYPE_40__ TYPE_18__ ;
typedef struct TYPE_39__ TYPE_17__ ;
typedef struct TYPE_38__ TYPE_16__ ;
typedef struct TYPE_37__ TYPE_15__ ;
typedef struct TYPE_36__ TYPE_14__ ;
typedef struct TYPE_35__ TYPE_13__ ;
typedef struct TYPE_34__ TYPE_12__ ;
typedef struct TYPE_33__ TYPE_11__ ;
typedef struct TYPE_32__ TYPE_10__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct TYPE_33__ {int * mask; int * value; } ;
struct TYPE_62__ {int mask; int value; } ;
struct TYPE_34__ {TYPE_11__ pcp; TYPE_9__ vid; } ;
struct TYPE_60__ {scalar_t__ mask; scalar_t__ value; } ;
struct TYPE_58__ {scalar_t__ mask; scalar_t__ value; } ;
struct TYPE_53__ {int * addr; } ;
struct TYPE_42__ {int * addr; } ;
struct TYPE_56__ {TYPE_2__ mask; TYPE_1__ value; } ;
struct TYPE_51__ {int * addr; } ;
struct TYPE_49__ {int * addr; } ;
struct TYPE_52__ {TYPE_28__ mask; TYPE_26__ value; } ;
struct TYPE_43__ {int * mask; int * value; } ;
struct TYPE_54__ {TYPE_7__ dport; TYPE_5__ sport; TYPE_3__ dip; TYPE_29__ sip; TYPE_20__ proto; } ;
struct TYPE_45__ {int * mask; int * value; } ;
struct TYPE_46__ {TYPE_22__ proto; } ;
struct TYPE_39__ {int mask; int value; } ;
struct TYPE_38__ {int mask; int value; } ;
struct TYPE_40__ {TYPE_17__ smac; TYPE_16__ dmac; } ;
struct TYPE_55__ {TYPE_30__ ipv4; TYPE_23__ ipv6; TYPE_18__ etype; } ;
struct ocelot_ace_rule {int id; int prio; TYPE_12__ vlan; int type; TYPE_31__ frame; } ;
struct TYPE_36__ {struct flow_dissector* dissector; } ;
struct flow_rule {TYPE_14__ match; } ;
struct flow_match_vlan {TYPE_13__* mask; TYPE_10__* key; } ;
struct flow_match_ports {TYPE_8__* mask; TYPE_6__* key; } ;
struct flow_match_ipv4_addrs {TYPE_4__* mask; TYPE_27__* key; } ;
struct flow_match_eth_addrs {TYPE_19__* mask; TYPE_15__* key; } ;
struct flow_match_control {int dummy; } ;
struct flow_match_basic {TYPE_24__* mask; TYPE_21__* key; } ;
struct flow_dissector {int used_keys; } ;
struct TYPE_48__ {int prio; int protocol; } ;
struct flow_cls_offload {int cookie; TYPE_25__ common; } ;
struct TYPE_61__ {int dst; int src; } ;
struct TYPE_59__ {int dst; int src; } ;
struct TYPE_57__ {int dst; int src; } ;
struct TYPE_50__ {int dst; int src; } ;
struct TYPE_47__ {int ip_proto; } ;
struct TYPE_44__ {int ip_proto; int n_proto; } ;
struct TYPE_41__ {int src; int dst; } ;
struct TYPE_37__ {int src; int dst; } ;
struct TYPE_35__ {int vlan_priority; int vlan_id; } ;
struct TYPE_32__ {int vlan_priority; int vlan_id; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ,int ) ;
 struct flow_rule* FUNC_2 (struct flow_cls_offload*) ;
 int FUNC_3 (struct flow_rule*,struct flow_match_basic*) ;
 int FUNC_4 (struct flow_rule*,struct flow_match_control*) ;
 int FUNC_5 (struct flow_rule*,struct flow_match_eth_addrs*) ;
 int FUNC_6 (struct flow_rule*,struct flow_match_ipv4_addrs*) ;
 scalar_t__ FUNC_7 (struct flow_rule*,int ) ;
 int FUNC_8 (struct flow_rule*,struct flow_match_ports*) ;
 int FUNC_9 (struct flow_rule*,struct flow_match_vlan*) ;
 int FUNC_10 (int *,int *,int) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (struct flow_cls_offload*,struct ocelot_ace_rule*) ;

__attribute__((used)) static int FUNC_13(struct flow_cls_offload *VAR_15,
          struct ocelot_ace_rule *VAR_16)
{
 struct flow_rule *VAR_17 = FUNC_2(VAR_15);
 struct flow_dissector *VAR_18 = VAR_17->match.dissector;

 if (VAR_18->used_keys &
     ~(FUNC_0(VAR_5) |
       FUNC_0(VAR_4) |
       FUNC_0(VAR_9) |
       FUNC_0(VAR_10) |
       FUNC_0(VAR_7) |
       FUNC_0(VAR_8) |
       FUNC_0(VAR_6))) {
  return -VAR_0;
 }

 if (FUNC_7(VAR_17, VAR_5)) {
  struct flow_match_control VAR_19;

  FUNC_4(VAR_17, &VAR_19);
 }

 if (FUNC_7(VAR_17, VAR_6)) {
  struct flow_match_eth_addrs VAR_20;
  u16 VAR_21 = FUNC_11(VAR_15->common.protocol);





  if ((VAR_18->used_keys &
      (FUNC_0(VAR_6) |
       FUNC_0(VAR_4) |
       FUNC_0(VAR_5))) !=
      (FUNC_0(VAR_6) |
       FUNC_0(VAR_4) |
       FUNC_0(VAR_5)))
   return -VAR_0;

  if (VAR_21 == VAR_2 ||
      VAR_21 == VAR_3 ||
      VAR_21 == VAR_1)
   return -VAR_0;

  FUNC_5(VAR_17, &VAR_20);
  VAR_16->type = VAR_12;
  FUNC_1(VAR_16->frame.etype.dmac.value,
    VAR_20.key->dst);
  FUNC_1(VAR_16->frame.etype.smac.value,
    VAR_20.key->src);
  FUNC_1(VAR_16->frame.etype.dmac.mask,
    VAR_20.mask->dst);
  FUNC_1(VAR_16->frame.etype.smac.mask,
    VAR_20.mask->src);
  goto finished_key_parsing;
 }

 if (FUNC_7(VAR_17, VAR_4)) {
  struct flow_match_basic VAR_22;

  FUNC_3(VAR_17, &VAR_22);
  if (FUNC_11(VAR_22.key->n_proto) == VAR_2) {
   VAR_16->type = VAR_13;
   VAR_16->frame.ipv4.proto.value[0] =
    VAR_22.key->ip_proto;
   VAR_16->frame.ipv4.proto.mask[0] =
    VAR_22.mask->ip_proto;
  }
  if (FUNC_11(VAR_22.key->n_proto) == VAR_3) {
   VAR_16->type = VAR_14;
   VAR_16->frame.ipv6.proto.value[0] =
    VAR_22.key->ip_proto;
   VAR_16->frame.ipv6.proto.mask[0] =
    VAR_22.mask->ip_proto;
  }
 }

 if (FUNC_7(VAR_17, VAR_7) &&
     FUNC_11(VAR_15->common.protocol) == VAR_2) {
  struct flow_match_ipv4_addrs VAR_23;
  u8 *VAR_24;

  FUNC_6(VAR_17, &VAR_23);
  VAR_24 = &VAR_16->frame.ipv4.sip.value.addr[0];
  FUNC_10(VAR_24, &VAR_23.key->src, 4);

  VAR_24 = &VAR_16->frame.ipv4.sip.mask.addr[0];
  FUNC_10(VAR_24, &VAR_23.mask->src, 4);

  VAR_24 = &VAR_16->frame.ipv4.dip.value.addr[0];
  FUNC_10(VAR_24, &VAR_23.key->dst, 4);

  VAR_24 = &VAR_16->frame.ipv4.dip.mask.addr[0];
  FUNC_10(VAR_24, &VAR_23.mask->dst, 4);
 }

 if (FUNC_7(VAR_17, VAR_8) &&
     FUNC_11(VAR_15->common.protocol) == VAR_3) {
  return -VAR_0;
 }

 if (FUNC_7(VAR_17, VAR_9)) {
  struct flow_match_ports VAR_25;

  FUNC_8(VAR_17, &VAR_25);
  VAR_16->frame.ipv4.sport.value = FUNC_11(VAR_25.key->src);
  VAR_16->frame.ipv4.sport.mask = FUNC_11(VAR_25.mask->src);
  VAR_16->frame.ipv4.dport.value = FUNC_11(VAR_25.key->dst);
  VAR_16->frame.ipv4.dport.mask = FUNC_11(VAR_25.mask->dst);
 }

 if (FUNC_7(VAR_17, VAR_10)) {
  struct flow_match_vlan VAR_26;

  FUNC_9(VAR_17, &VAR_26);
  VAR_16->type = VAR_11;
  VAR_16->vlan.vid.value = VAR_26.key->vlan_id;
  VAR_16->vlan.vid.mask = VAR_26.mask->vlan_id;
  VAR_16->vlan.pcp.value[0] = VAR_26.key->vlan_priority;
  VAR_16->vlan.pcp.mask[0] = VAR_26.mask->vlan_priority;
 }

finished_key_parsing:
 VAR_16->prio = VAR_15->common.prio;
 VAR_16->id = VAR_15->cookie;
 return FUNC_12(VAR_15, VAR_16);
}
