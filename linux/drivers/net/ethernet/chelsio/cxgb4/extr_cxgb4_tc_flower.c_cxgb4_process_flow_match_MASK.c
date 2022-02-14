
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_44__ TYPE_9__ ;
typedef struct TYPE_43__ TYPE_8__ ;
typedef struct TYPE_42__ TYPE_7__ ;
typedef struct TYPE_41__ TYPE_6__ ;
typedef struct TYPE_40__ TYPE_5__ ;
typedef struct TYPE_39__ TYPE_4__ ;
typedef struct TYPE_38__ TYPE_3__ ;
typedef struct TYPE_37__ TYPE_2__ ;
typedef struct TYPE_36__ TYPE_22__ ;
typedef struct TYPE_35__ TYPE_21__ ;
typedef struct TYPE_34__ TYPE_20__ ;
typedef struct TYPE_33__ TYPE_1__ ;
typedef struct TYPE_32__ TYPE_19__ ;
typedef struct TYPE_31__ TYPE_18__ ;
typedef struct TYPE_30__ TYPE_17__ ;
typedef struct TYPE_29__ TYPE_16__ ;
typedef struct TYPE_28__ TYPE_15__ ;
typedef struct TYPE_27__ TYPE_14__ ;
typedef struct TYPE_26__ TYPE_13__ ;
typedef struct TYPE_25__ TYPE_12__ ;
typedef struct TYPE_24__ TYPE_11__ ;
typedef struct TYPE_23__ TYPE_10__ ;


typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
struct flow_rule {int dummy; } ;
struct flow_match_vlan {TYPE_14__* mask; TYPE_13__* key; } ;
struct flow_match_ports {TYPE_8__* key; TYPE_7__* mask; } ;
struct flow_match_ipv6_addrs {TYPE_6__* key; TYPE_3__* mask; } ;
struct flow_match_ipv4_addrs {TYPE_20__* key; TYPE_19__* mask; } ;
struct flow_match_ip {TYPE_10__* mask; TYPE_9__* key; } ;
struct flow_match_enc_keyid {TYPE_12__* mask; TYPE_11__* key; } ;
struct flow_match_control {TYPE_15__* key; } ;
struct flow_match_basic {TYPE_17__* mask; TYPE_16__* key; } ;
struct flow_cls_offload {int dummy; } ;
struct TYPE_31__ {int encap_vld; int ivlan_vld; int iport; scalar_t__ ethtype; scalar_t__ ivlan; void* vni; int tos; void* fport; void* lport; int * fip; int * lip; int proto; } ;
struct TYPE_35__ {scalar_t__ ethtype; int encap_vld; int ivlan_vld; int iport; scalar_t__ ivlan; void* vni; int tos; void* fport; void* lport; int * fip; int * lip; int proto; } ;
struct ch_filter_specification {int type; TYPE_18__ mask; TYPE_21__ val; void* nat_fport; void* nat_lport; int * nat_fip; int * nat_lip; } ;
struct TYPE_44__ {int tos; } ;
struct TYPE_43__ {int src; int dst; } ;
struct TYPE_42__ {int src; int dst; } ;
struct TYPE_40__ {int * s6_addr; } ;
struct TYPE_39__ {int * s6_addr; } ;
struct TYPE_41__ {TYPE_5__ src; TYPE_4__ dst; } ;
struct TYPE_37__ {int * s6_addr; } ;
struct TYPE_33__ {int * s6_addr; } ;
struct TYPE_38__ {TYPE_2__ src; TYPE_1__ dst; } ;
struct TYPE_36__ {int port_id; } ;
struct TYPE_34__ {int src; int dst; } ;
struct TYPE_32__ {int src; int dst; } ;
struct TYPE_30__ {int ip_proto; int n_proto; } ;
struct TYPE_29__ {int ip_proto; int n_proto; } ;
struct TYPE_28__ {scalar_t__ addr_type; } ;
struct TYPE_27__ {scalar_t__ vlan_id; scalar_t__ vlan_priority; } ;
struct TYPE_26__ {scalar_t__ vlan_id; scalar_t__ vlan_priority; } ;
struct TYPE_25__ {int keyid; } ;
struct TYPE_24__ {int keyid; } ;
struct TYPE_23__ {int tos; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 struct flow_rule* FUNC_2 (struct flow_cls_offload*) ;
 int FUNC_3 (struct flow_rule*,struct flow_match_basic*) ;
 int FUNC_4 (struct flow_rule*,struct flow_match_control*) ;
 int FUNC_5 (struct flow_rule*,struct flow_match_enc_keyid*) ;
 int FUNC_6 (struct flow_rule*,struct flow_match_ip*) ;
 int FUNC_7 (struct flow_rule*,struct flow_match_ipv4_addrs*) ;
 int FUNC_8 (struct flow_rule*,struct flow_match_ipv6_addrs*) ;
 scalar_t__ FUNC_9 (struct flow_rule*,int ) ;
 int FUNC_10 (struct flow_rule*,struct flow_match_ports*) ;
 int FUNC_11 (struct flow_rule*,struct flow_match_vlan*) ;
 int FUNC_12 (int *,int *,int) ;
 TYPE_22__* FUNC_13 (struct net_device*) ;
 scalar_t__ FUNC_14 (int ) ;

__attribute__((used)) static void FUNC_15(struct net_device *VAR_12,
         struct flow_cls_offload *VAR_13,
         struct ch_filter_specification *VAR_14)
{
 struct flow_rule *VAR_15 = FUNC_2(VAR_13);
 u16 VAR_16 = 0;

 if (FUNC_9(VAR_15, VAR_4)) {
  struct flow_match_control VAR_17;

  FUNC_4(VAR_15, &VAR_17);
  VAR_16 = VAR_17.key->addr_type;
 }

 if (FUNC_9(VAR_15, VAR_3)) {
  struct flow_match_basic VAR_18;
  u16 VAR_19, VAR_20;

  FUNC_3(VAR_15, &VAR_18);
  VAR_19 = FUNC_14(VAR_18.key->n_proto);
  VAR_20 = FUNC_14(VAR_18.mask->n_proto);

  if (VAR_19 == VAR_1) {
   VAR_19 = 0;
   VAR_20 = 0;
  }

  if (VAR_19 == VAR_2)
   VAR_14->type = 1;

  VAR_14->val.ethtype = VAR_19;
  VAR_14->mask.ethtype = VAR_20;
  VAR_14->val.proto = VAR_18.key->ip_proto;
  VAR_14->mask.proto = VAR_18.mask->ip_proto;
 }

 if (VAR_16 == VAR_7) {
  struct flow_match_ipv4_addrs VAR_21;

  FUNC_7(VAR_15, &VAR_21);
  VAR_14->type = 0;
  FUNC_12(&VAR_14->val.lip[0], &VAR_21.key->dst, sizeof(VAR_21.key->dst));
  FUNC_12(&VAR_14->val.fip[0], &VAR_21.key->src, sizeof(VAR_21.key->src));
  FUNC_12(&VAR_14->mask.lip[0], &VAR_21.mask->dst, sizeof(VAR_21.mask->dst));
  FUNC_12(&VAR_14->mask.fip[0], &VAR_21.mask->src, sizeof(VAR_21.mask->src));


  FUNC_12(&VAR_14->nat_lip[0], &VAR_21.key->dst, sizeof(VAR_21.key->dst));
  FUNC_12(&VAR_14->nat_fip[0], &VAR_21.key->src, sizeof(VAR_21.key->src));
 }

 if (VAR_16 == VAR_8) {
  struct flow_match_ipv6_addrs VAR_22;

  FUNC_8(VAR_15, &VAR_22);
  VAR_14->type = 1;
  FUNC_12(&VAR_14->val.lip[0], VAR_22.key->dst.s6_addr,
         sizeof(VAR_22.key->dst));
  FUNC_12(&VAR_14->val.fip[0], VAR_22.key->src.s6_addr,
         sizeof(VAR_22.key->src));
  FUNC_12(&VAR_14->mask.lip[0], VAR_22.mask->dst.s6_addr,
         sizeof(VAR_22.mask->dst));
  FUNC_12(&VAR_14->mask.fip[0], VAR_22.mask->src.s6_addr,
         sizeof(VAR_22.mask->src));


  FUNC_12(&VAR_14->nat_lip[0], VAR_22.key->dst.s6_addr,
         sizeof(VAR_22.key->dst));
  FUNC_12(&VAR_14->nat_fip[0], VAR_22.key->src.s6_addr,
         sizeof(VAR_22.key->src));
 }

 if (FUNC_9(VAR_15, VAR_9)) {
  struct flow_match_ports VAR_23;

  FUNC_10(VAR_15, &VAR_23);
  VAR_14->val.lport = FUNC_1(VAR_23.key->dst);
  VAR_14->mask.lport = FUNC_1(VAR_23.mask->dst);
  VAR_14->val.fport = FUNC_1(VAR_23.key->src);
  VAR_14->mask.fport = FUNC_1(VAR_23.mask->src);


  VAR_14->nat_lport = FUNC_1(VAR_23.key->dst);
  VAR_14->nat_fport = FUNC_1(VAR_23.key->src);
 }

 if (FUNC_9(VAR_15, VAR_6)) {
  struct flow_match_ip VAR_24;

  FUNC_6(VAR_15, &VAR_24);
  VAR_14->val.tos = VAR_24.key->tos;
  VAR_14->mask.tos = VAR_24.mask->tos;
 }

 if (FUNC_9(VAR_15, VAR_5)) {
  struct flow_match_enc_keyid VAR_25;

  FUNC_5(VAR_15, &VAR_25);
  VAR_14->val.vni = FUNC_0(VAR_25.key->keyid);
  VAR_14->mask.vni = FUNC_0(VAR_25.mask->keyid);
  if (VAR_14->mask.vni) {
   VAR_14->val.encap_vld = 1;
   VAR_14->mask.encap_vld = 1;
  }
 }

 if (FUNC_9(VAR_15, VAR_10)) {
  struct flow_match_vlan VAR_26;
  u16 VAR_27, VAR_28;

  FUNC_11(VAR_15, &VAR_26);
  VAR_27 = VAR_26.key->vlan_id | (VAR_26.key->vlan_priority <<
            VAR_11);
  VAR_28 = VAR_26.mask->vlan_id | (VAR_26.mask->vlan_priority <<
           VAR_11);
  VAR_14->val.ivlan = VAR_27;
  VAR_14->mask.ivlan = VAR_28;

  VAR_14->val.ivlan_vld = 1;
  VAR_14->mask.ivlan_vld = 1;
  if (VAR_14->val.ethtype == VAR_0) {
   VAR_14->val.ethtype = 0;
   VAR_14->mask.ethtype = 0;
  }
 }




 VAR_14->val.iport = FUNC_13(VAR_12)->port_id;
 VAR_14->mask.iport = ~0;
}
