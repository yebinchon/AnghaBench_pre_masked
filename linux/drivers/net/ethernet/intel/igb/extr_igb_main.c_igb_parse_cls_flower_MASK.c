
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct netlink_ext_ack {int dummy; } ;
struct TYPE_17__ {int vlan_tci; int match_flags; int etype; int src_addr; int dst_addr; } ;
struct igb_nfc_filter {int action; int cookie; TYPE_8__ filter; } ;
struct igb_adapter {int dummy; } ;
struct TYPE_10__ {struct flow_dissector* dissector; } ;
struct flow_rule {TYPE_1__ match; } ;
struct flow_match_vlan {TYPE_9__* key; TYPE_7__* mask; } ;
struct flow_match_eth_addrs {TYPE_4__* key; TYPE_3__* mask; } ;
struct flow_match_basic {TYPE_6__* key; TYPE_5__* mask; } ;
struct flow_dissector {int used_keys; } ;
struct TYPE_11__ {struct netlink_ext_ack* extack; } ;
struct flow_cls_offload {int cookie; TYPE_2__ common; } ;
struct TYPE_18__ {int vlan_priority; } ;
struct TYPE_16__ {scalar_t__ vlan_priority; } ;
struct TYPE_15__ {int n_proto; } ;
struct TYPE_14__ {scalar_t__ n_proto; } ;
struct TYPE_13__ {int src; int dst; } ;
struct TYPE_12__ {int src; int dst; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (int ,int ) ;
 struct flow_rule* FUNC_3 (struct flow_cls_offload*) ;
 int FUNC_4 (struct flow_rule*,struct flow_match_basic*) ;
 int FUNC_5 (struct flow_rule*,struct flow_match_eth_addrs*) ;
 scalar_t__ FUNC_6 (struct flow_rule*,int ) ;
 int FUNC_7 (struct flow_rule*,struct flow_match_vlan*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct igb_adapter *VAR_12,
    struct flow_cls_offload *VAR_13,
    int VAR_14,
    struct igb_nfc_filter *VAR_15)
{
 struct flow_rule *VAR_16 = FUNC_3(VAR_13);
 struct flow_dissector *VAR_17 = VAR_16->match.dissector;
 struct netlink_ext_ack *VAR_18 = VAR_13->common.extack;

 if (VAR_17->used_keys &
     ~(FUNC_0(VAR_3) |
       FUNC_0(VAR_4) |
       FUNC_0(VAR_5) |
       FUNC_0(VAR_6))) {
  FUNC_1(VAR_18,
       "Unsupported key used, only BASIC, CONTROL, ETH_ADDRS and VLAN are supported");
  return -VAR_1;
 }

 if (FUNC_6(VAR_16, VAR_5)) {
  struct flow_match_eth_addrs VAR_19;

  FUNC_5(VAR_16, &VAR_19);
  if (!FUNC_9(VAR_19.mask->dst)) {
   if (!FUNC_8(VAR_19.mask->dst)) {
    FUNC_1(VAR_18, "Only full masks are supported for destination MAC address");
    return -VAR_0;
   }

   VAR_15->filter.match_flags |=
    VAR_7;
   FUNC_2(VAR_15->filter.dst_addr, VAR_19.key->dst);
  }

  if (!FUNC_9(VAR_19.mask->src)) {
   if (!FUNC_8(VAR_19.mask->src)) {
    FUNC_1(VAR_18, "Only full masks are supported for source MAC address");
    return -VAR_0;
   }

   VAR_15->filter.match_flags |=
    VAR_9;
   FUNC_2(VAR_15->filter.src_addr, VAR_19.key->src);
  }
 }

 if (FUNC_6(VAR_16, VAR_3)) {
  struct flow_match_basic VAR_20;

  FUNC_4(VAR_16, &VAR_20);
  if (VAR_20.mask->n_proto) {
   if (VAR_20.mask->n_proto != VAR_2) {
    FUNC_1(VAR_18, "Only full mask is supported for EtherType filter");
    return -VAR_0;
   }

   VAR_15->filter.match_flags |= VAR_8;
   VAR_15->filter.etype = VAR_20.key->n_proto;
  }
 }

 if (FUNC_6(VAR_16, VAR_6)) {
  struct flow_match_vlan VAR_21;

  FUNC_7(VAR_16, &VAR_21);
  if (VAR_21.mask->vlan_priority) {
   if (VAR_21.mask->vlan_priority != VAR_11) {
    FUNC_1(VAR_18, "Only full mask is supported for VLAN priority");
    return -VAR_0;
   }

   VAR_15->filter.match_flags |= VAR_10;
   VAR_15->filter.vlan_tci = VAR_21.key->vlan_priority;
  }
 }

 VAR_15->action = VAR_14;
 VAR_15->cookie = VAR_13->cookie;

 return 0;
}
