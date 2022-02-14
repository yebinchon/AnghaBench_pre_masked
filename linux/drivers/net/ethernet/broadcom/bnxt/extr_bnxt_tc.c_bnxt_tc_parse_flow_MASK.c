
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_82__ TYPE_9__ ;
typedef struct TYPE_81__ TYPE_8__ ;
typedef struct TYPE_80__ TYPE_7__ ;
typedef struct TYPE_79__ TYPE_6__ ;
typedef struct TYPE_78__ TYPE_5__ ;
typedef struct TYPE_77__ TYPE_4__ ;
typedef struct TYPE_76__ TYPE_41__ ;
typedef struct TYPE_75__ TYPE_40__ ;
typedef struct TYPE_74__ TYPE_3__ ;
typedef struct TYPE_73__ TYPE_39__ ;
typedef struct TYPE_72__ TYPE_38__ ;
typedef struct TYPE_71__ TYPE_37__ ;
typedef struct TYPE_70__ TYPE_36__ ;
typedef struct TYPE_69__ TYPE_35__ ;
typedef struct TYPE_68__ TYPE_34__ ;
typedef struct TYPE_67__ TYPE_33__ ;
typedef struct TYPE_66__ TYPE_32__ ;
typedef struct TYPE_65__ TYPE_31__ ;
typedef struct TYPE_64__ TYPE_30__ ;
typedef struct TYPE_63__ TYPE_2__ ;
typedef struct TYPE_62__ TYPE_29__ ;
typedef struct TYPE_61__ TYPE_28__ ;
typedef struct TYPE_60__ TYPE_27__ ;
typedef struct TYPE_59__ TYPE_26__ ;
typedef struct TYPE_58__ TYPE_25__ ;
typedef struct TYPE_57__ TYPE_24__ ;
typedef struct TYPE_56__ TYPE_23__ ;
typedef struct TYPE_55__ TYPE_22__ ;
typedef struct TYPE_54__ TYPE_21__ ;
typedef struct TYPE_53__ TYPE_20__ ;
typedef struct TYPE_52__ TYPE_1__ ;
typedef struct TYPE_51__ TYPE_19__ ;
typedef struct TYPE_50__ TYPE_18__ ;
typedef struct TYPE_49__ TYPE_17__ ;
typedef struct TYPE_48__ TYPE_16__ ;
typedef struct TYPE_47__ TYPE_15__ ;
typedef struct TYPE_46__ TYPE_14__ ;
typedef struct TYPE_45__ TYPE_13__ ;
typedef struct TYPE_44__ TYPE_12__ ;
typedef struct TYPE_43__ TYPE_11__ ;
typedef struct TYPE_42__ TYPE_10__ ;


struct TYPE_67__ {struct flow_dissector* dissector; } ;
struct flow_rule {int action; TYPE_33__ match; } ;
struct flow_match_vlan {TYPE_2__* mask; TYPE_1__* key; } ;
struct flow_match_ports {TYPE_32__* mask; TYPE_30__* key; } ;
struct flow_match_ipv6_addrs {TYPE_14__* mask; TYPE_11__* key; } ;
struct flow_match_ipv4_addrs {TYPE_26__* mask; TYPE_23__* key; } ;
struct flow_match_icmp {TYPE_20__* mask; TYPE_18__* key; } ;
struct flow_match_eth_addrs {TYPE_40__* mask; TYPE_38__* key; } ;
struct flow_match_enc_keyid {TYPE_28__* mask; TYPE_27__* key; } ;
struct flow_match_basic {TYPE_37__* mask; TYPE_35__* key; } ;
struct flow_dissector {int used_keys; } ;
struct flow_cls_offload {int dummy; } ;
struct TYPE_57__ {int src; int dst; } ;
struct TYPE_58__ {TYPE_24__ ipv4; } ;
struct TYPE_65__ {int tp_src; int tp_dst; void* tun_id; TYPE_25__ u; } ;
struct TYPE_54__ {int src; int dst; } ;
struct TYPE_55__ {TYPE_21__ ipv4; } ;
struct TYPE_62__ {int tp_src; int tp_dst; void* tun_id; TYPE_22__ u; } ;
struct TYPE_51__ {int code; int type; } ;
struct TYPE_48__ {int sport; int dport; } ;
struct TYPE_70__ {TYPE_19__ icmp; TYPE_16__ ports; int ip_proto; } ;
struct TYPE_49__ {int code; int type; } ;
struct TYPE_47__ {int sport; int dport; } ;
struct TYPE_68__ {TYPE_17__ icmp; TYPE_15__ ports; int ip_proto; } ;
struct TYPE_44__ {int saddr; int daddr; } ;
struct TYPE_80__ {int s_addr; } ;
struct TYPE_77__ {int s_addr; } ;
struct TYPE_81__ {TYPE_7__ saddr; TYPE_4__ daddr; } ;
struct TYPE_45__ {TYPE_12__ ipv6; TYPE_8__ ipv4; } ;
struct TYPE_82__ {int saddr; int daddr; } ;
struct TYPE_78__ {int s_addr; } ;
struct TYPE_74__ {int s_addr; } ;
struct TYPE_79__ {TYPE_5__ saddr; TYPE_3__ daddr; } ;
struct TYPE_42__ {TYPE_9__ ipv6; TYPE_6__ ipv4; } ;
struct TYPE_76__ {scalar_t__ ether_type; int num_vlans; scalar_t__ inner_vlan_tpid; void* inner_vlan_tci; int smac; int dmac; } ;
struct TYPE_73__ {scalar_t__ inner_vlan_tpid; void* inner_vlan_tci; int smac; int dmac; int ether_type; } ;
struct bnxt_tc_flow {int actions; TYPE_31__ tun_mask; TYPE_29__ tun_key; int flags; TYPE_36__ l4_mask; TYPE_34__ l4_key; TYPE_13__ l3_mask; TYPE_10__ l3_key; TYPE_41__ l2_key; TYPE_39__ l2_mask; } ;
struct bnxt {int dev; } ;
struct TYPE_75__ {int src; int dst; } ;
struct TYPE_72__ {int src; int dst; } ;
struct TYPE_71__ {int ip_proto; int n_proto; } ;
struct TYPE_69__ {scalar_t__ n_proto; int ip_proto; } ;
struct TYPE_66__ {int src; int dst; } ;
struct TYPE_64__ {int src; int dst; } ;
struct TYPE_63__ {int vlan_priority; int vlan_id; } ;
struct TYPE_61__ {int keyid; } ;
struct TYPE_60__ {int keyid; } ;
struct TYPE_59__ {int src; int dst; } ;
struct TYPE_56__ {int src; int dst; } ;
struct TYPE_53__ {int code; int type; } ;
struct TYPE_52__ {int vlan_priority; int vlan_id; } ;
struct TYPE_50__ {int code; int type; } ;
struct TYPE_46__ {int src; int dst; } ;
struct TYPE_43__ {int src; int dst; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct bnxt*,int *,int *) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 struct flow_rule* FUNC_5 (struct flow_cls_offload*) ;
 int FUNC_6 (struct flow_rule*,struct flow_match_basic*) ;
 int FUNC_7 (struct flow_rule*,struct flow_match_ipv4_addrs*) ;
 int FUNC_8 (struct flow_rule*,struct flow_match_enc_keyid*) ;
 int FUNC_9 (struct flow_rule*,struct flow_match_ports*) ;
 int FUNC_10 (struct flow_rule*,struct flow_match_eth_addrs*) ;
 int FUNC_11 (struct flow_rule*,struct flow_match_icmp*) ;
 int FUNC_12 (struct flow_rule*,struct flow_match_ipv4_addrs*) ;
 int FUNC_13 (struct flow_rule*,struct flow_match_ipv6_addrs*) ;
 scalar_t__ FUNC_14 (struct flow_rule*,int ) ;
 int FUNC_15 (struct flow_rule*,struct flow_match_ports*) ;
 int FUNC_16 (struct flow_rule*,struct flow_match_vlan*) ;
 scalar_t__ FUNC_17 (int) ;
 void* FUNC_18 (int ) ;
 int FUNC_19 (int ,char*,int) ;

__attribute__((used)) static int FUNC_20(struct bnxt *VAR_24,
         struct flow_cls_offload *VAR_25,
         struct bnxt_tc_flow *VAR_26)
{
 struct flow_rule *VAR_27 = FUNC_5(VAR_25);
 struct flow_dissector *VAR_28 = VAR_27->match.dissector;


 if ((VAR_28->used_keys & FUNC_0(VAR_13)) == 0 ||
     (VAR_28->used_keys & FUNC_0(VAR_12)) == 0) {
  FUNC_19(VAR_24->dev, "cannot form TC key: used_keys = 0x%x",
       VAR_28->used_keys);
  return -VAR_8;
 }

 if (FUNC_14(VAR_27, VAR_12)) {
  struct flow_match_basic VAR_29;

  FUNC_6(VAR_27, &VAR_29);
  VAR_26->l2_key.ether_type = VAR_29.key->n_proto;
  VAR_26->l2_mask.ether_type = VAR_29.mask->n_proto;

  if (VAR_29.key->n_proto == FUNC_17(VAR_10) ||
      VAR_29.key->n_proto == FUNC_17(VAR_11)) {
   VAR_26->l4_key.ip_proto = VAR_29.key->ip_proto;
   VAR_26->l4_mask.ip_proto = VAR_29.mask->ip_proto;
  }
 }

 if (FUNC_14(VAR_27, VAR_18)) {
  struct flow_match_eth_addrs VAR_30;

  FUNC_10(VAR_27, &VAR_30);
  VAR_26->flags |= VAR_0;
  FUNC_4(VAR_26->l2_key.dmac, VAR_30.key->dst);
  FUNC_4(VAR_26->l2_mask.dmac, VAR_30.mask->dst);
  FUNC_4(VAR_26->l2_key.smac, VAR_30.key->src);
  FUNC_4(VAR_26->l2_mask.smac, VAR_30.mask->src);
 }

 if (FUNC_14(VAR_27, VAR_23)) {
  struct flow_match_vlan VAR_31;

  FUNC_16(VAR_27, &VAR_31);
  VAR_26->l2_key.inner_vlan_tci =
   FUNC_3(FUNC_1(VAR_31.key->vlan_id,
          VAR_31.key->vlan_priority));
  VAR_26->l2_mask.inner_vlan_tci =
   FUNC_3((FUNC_1(VAR_31.mask->vlan_id,
           VAR_31.mask->vlan_priority)));
  VAR_26->l2_key.inner_vlan_tpid = FUNC_17(VAR_9);
  VAR_26->l2_mask.inner_vlan_tpid = FUNC_17(0xffff);
  VAR_26->l2_key.num_vlans = 1;
 }

 if (FUNC_14(VAR_27, VAR_20)) {
  struct flow_match_ipv4_addrs VAR_32;

  FUNC_12(VAR_27, &VAR_32);
  VAR_26->flags |= VAR_2;
  VAR_26->l3_key.ipv4.daddr.s_addr = VAR_32.key->dst;
  VAR_26->l3_mask.ipv4.daddr.s_addr = VAR_32.mask->dst;
  VAR_26->l3_key.ipv4.saddr.s_addr = VAR_32.key->src;
  VAR_26->l3_mask.ipv4.saddr.s_addr = VAR_32.mask->src;
 } else if (FUNC_14(VAR_27, VAR_21)) {
  struct flow_match_ipv6_addrs VAR_33;

  FUNC_13(VAR_27, &VAR_33);
  VAR_26->flags |= VAR_3;
  VAR_26->l3_key.ipv6.daddr = VAR_33.key->dst;
  VAR_26->l3_mask.ipv6.daddr = VAR_33.mask->dst;
  VAR_26->l3_key.ipv6.saddr = VAR_33.key->src;
  VAR_26->l3_mask.ipv6.saddr = VAR_33.mask->src;
 }

 if (FUNC_14(VAR_27, VAR_22)) {
  struct flow_match_ports VAR_34;

  FUNC_15(VAR_27, &VAR_34);
  VAR_26->flags |= VAR_4;
  VAR_26->l4_key.ports.dport = VAR_34.key->dst;
  VAR_26->l4_mask.ports.dport = VAR_34.mask->dst;
  VAR_26->l4_key.ports.sport = VAR_34.key->src;
  VAR_26->l4_mask.ports.sport = VAR_34.mask->src;
 }

 if (FUNC_14(VAR_27, VAR_19)) {
  struct flow_match_icmp VAR_35;

  FUNC_11(VAR_27, &VAR_35);
  VAR_26->flags |= VAR_1;
  VAR_26->l4_key.icmp.type = VAR_35.key->type;
  VAR_26->l4_key.icmp.code = VAR_35.key->code;
  VAR_26->l4_mask.icmp.type = VAR_35.mask->type;
  VAR_26->l4_mask.icmp.code = VAR_35.mask->code;
 }

 if (FUNC_14(VAR_27, VAR_14)) {
  struct flow_match_ipv4_addrs VAR_36;

  FUNC_7(VAR_27, &VAR_36);
  VAR_26->flags |= VAR_6;
  VAR_26->tun_key.u.ipv4.dst = VAR_36.key->dst;
  VAR_26->tun_mask.u.ipv4.dst = VAR_36.mask->dst;
  VAR_26->tun_key.u.ipv4.src = VAR_36.key->src;
  VAR_26->tun_mask.u.ipv4.src = VAR_36.mask->src;
 } else if (FUNC_14(VAR_27,
          VAR_15)) {
  return -VAR_8;
 }

 if (FUNC_14(VAR_27, VAR_16)) {
  struct flow_match_enc_keyid VAR_37;

  FUNC_8(VAR_27, &VAR_37);
  VAR_26->flags |= VAR_5;
  VAR_26->tun_key.tun_id = FUNC_18(VAR_37.key->keyid);
  VAR_26->tun_mask.tun_id = FUNC_18(VAR_37.mask->keyid);
 }

 if (FUNC_14(VAR_27, VAR_17)) {
  struct flow_match_ports VAR_38;

  FUNC_9(VAR_27, &VAR_38);
  VAR_26->flags |= VAR_7;
  VAR_26->tun_key.tp_dst = VAR_38.key->dst;
  VAR_26->tun_mask.tp_dst = VAR_38.mask->dst;
  VAR_26->tun_key.tp_src = VAR_38.key->src;
  VAR_26->tun_mask.tp_src = VAR_38.mask->src;
 }

 return FUNC_2(VAR_24, &VAR_26->actions, &VAR_27->action);
}
