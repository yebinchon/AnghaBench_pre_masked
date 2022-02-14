
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_9__ ;
typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_18__ ;
typedef struct TYPE_26__ TYPE_17__ ;
typedef struct TYPE_25__ TYPE_16__ ;
typedef struct TYPE_24__ TYPE_15__ ;
typedef struct TYPE_23__ TYPE_14__ ;
typedef struct TYPE_22__ TYPE_13__ ;
typedef struct TYPE_21__ TYPE_12__ ;
typedef struct TYPE_20__ TYPE_11__ ;
typedef struct TYPE_19__ TYPE_10__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct i40e_vsi {struct i40e_pf* back; } ;
struct i40e_pf {TYPE_15__* pdev; } ;
struct i40e_cloud_filter {int ip_proto; int flags; int src_port; int dst_port; int dst_ipv6; int src_ipv6; int src_ipv4; int dst_ipv4; scalar_t__ vlan_id; int src_mac; int dst_mac; scalar_t__ n_proto; int tenant_id; } ;
struct TYPE_35__ {struct flow_dissector* dissector; } ;
struct flow_rule {TYPE_8__ match; } ;
struct flow_match_vlan {TYPE_17__* key; TYPE_16__* mask; } ;
struct flow_match_ports {TYPE_7__* key; TYPE_6__* mask; } ;
struct flow_match_ipv6_addrs {TYPE_5__* key; TYPE_4__* mask; } ;
struct flow_match_ipv4_addrs {TYPE_3__* key; TYPE_2__* mask; } ;
struct flow_match_eth_addrs {TYPE_14__* key; TYPE_13__* mask; } ;
struct flow_match_enc_keyid {TYPE_10__* key; TYPE_9__* mask; } ;
struct flow_match_control {TYPE_1__* key; } ;
struct flow_match_basic {TYPE_12__* key; TYPE_11__* mask; } ;
struct flow_dissector {int used_keys; } ;
struct flow_cls_offload {int dummy; } ;
struct TYPE_36__ {scalar_t__ keyid; } ;
struct TYPE_34__ {int src; int dst; } ;
struct TYPE_33__ {scalar_t__ src; scalar_t__ dst; } ;
struct TYPE_27__ {int s6_addr32; } ;
struct TYPE_32__ {TYPE_18__ dst; TYPE_18__ src; } ;
struct TYPE_31__ {int src; int dst; } ;
struct TYPE_30__ {int src; int dst; } ;
struct TYPE_29__ {scalar_t__ dst; scalar_t__ src; } ;
struct TYPE_28__ {scalar_t__ addr_type; } ;
struct TYPE_26__ {int vlan_id; } ;
struct TYPE_25__ {int vlan_id; } ;
struct TYPE_24__ {int dev; } ;
struct TYPE_23__ {int src; int dst; } ;
struct TYPE_22__ {int src; int dst; } ;
struct TYPE_21__ {int ip_proto; int n_proto; } ;
struct TYPE_20__ {int n_proto; } ;
struct TYPE_19__ {int keyid; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;


 int VAR_17 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (int ,int ) ;
 struct flow_rule* FUNC_7 (struct flow_cls_offload*) ;
 int FUNC_8 (struct flow_rule*,struct flow_match_basic*) ;
 int FUNC_9 (struct flow_rule*,struct flow_match_control*) ;
 int FUNC_10 (struct flow_rule*,struct flow_match_enc_keyid*) ;
 int FUNC_11 (struct flow_rule*,struct flow_match_eth_addrs*) ;
 int FUNC_12 (struct flow_rule*,struct flow_match_ipv4_addrs*) ;
 int FUNC_13 (struct flow_rule*,struct flow_match_ipv6_addrs*) ;
 scalar_t__ FUNC_14 (struct flow_rule*,scalar_t__) ;
 int FUNC_15 (struct flow_rule*,struct flow_match_ports*) ;
 int FUNC_16 (struct flow_rule*,struct flow_match_vlan*) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (TYPE_18__*) ;
 scalar_t__ FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int *,int *,int) ;
 scalar_t__ FUNC_22 (int ) ;

__attribute__((used)) static int FUNC_23(struct i40e_vsi *VAR_18,
     struct flow_cls_offload *VAR_19,
     struct i40e_cloud_filter *VAR_20)
{
 struct flow_rule *VAR_21 = FUNC_7(VAR_19);
 struct flow_dissector *VAR_22 = VAR_21->match.dissector;
 u16 VAR_23 = 0, VAR_24 = 0, VAR_25 = 0;
 struct i40e_pf *VAR_26 = VAR_18->back;
 u8 VAR_27 = 0;

 if (VAR_22->used_keys &
     ~(FUNC_0(VAR_4) |
       FUNC_0(VAR_3) |
       FUNC_0(VAR_6) |
       FUNC_0(VAR_10) |
       FUNC_0(VAR_7) |
       FUNC_0(VAR_8) |
       FUNC_0(VAR_9) |
       FUNC_0(VAR_5))) {
  FUNC_5(&VAR_26->pdev->dev, "Unsupported key used: 0x%x\n",
   VAR_22->used_keys);
  return -VAR_1;
 }

 if (FUNC_14(VAR_21, VAR_5)) {
  struct flow_match_enc_keyid VAR_28;

  FUNC_10(VAR_21, &VAR_28);
  if (VAR_28.mask->keyid != 0)
   VAR_27 |= VAR_15;

  VAR_20->tenant_id = FUNC_2(VAR_28.key->keyid);
 }

 if (FUNC_14(VAR_21, VAR_3)) {
  struct flow_match_basic VAR_29;

  FUNC_8(VAR_21, &VAR_29);
  VAR_24 = FUNC_22(VAR_29.key->n_proto);
  VAR_23 = FUNC_22(VAR_29.mask->n_proto);

  if (VAR_24 == VAR_2) {
   VAR_24 = 0;
   VAR_23 = 0;
  }
  VAR_20->n_proto = VAR_24 & VAR_23;
  VAR_20->ip_proto = VAR_29.key->ip_proto;
 }

 if (FUNC_14(VAR_21, VAR_6)) {
  struct flow_match_eth_addrs VAR_30;

  FUNC_11(VAR_21, &VAR_30);


  if (!FUNC_20(VAR_30.mask->dst)) {
   if (FUNC_19(VAR_30.mask->dst)) {
    VAR_27 |= VAR_14;
   } else {
    FUNC_5(&VAR_26->pdev->dev, "Bad ether dest mask %pM\n",
     VAR_30.mask->dst);
    return VAR_16;
   }
  }

  if (!FUNC_20(VAR_30.mask->src)) {
   if (FUNC_19(VAR_30.mask->src)) {
    VAR_27 |= VAR_12;
   } else {
    FUNC_5(&VAR_26->pdev->dev, "Bad ether src mask %pM\n",
     VAR_30.mask->src);
    return VAR_16;
   }
  }
  FUNC_6(VAR_20->dst_mac, VAR_30.key->dst);
  FUNC_6(VAR_20->src_mac, VAR_30.key->src);
 }

 if (FUNC_14(VAR_21, VAR_10)) {
  struct flow_match_vlan VAR_31;

  FUNC_16(VAR_21, &VAR_31);
  if (VAR_31.mask->vlan_id) {
   if (VAR_31.mask->vlan_id == VAR_17) {
    VAR_27 |= VAR_13;

   } else {
    FUNC_5(&VAR_26->pdev->dev, "Bad vlan mask 0x%04x\n",
     VAR_31.mask->vlan_id);
    return VAR_16;
   }
  }

  VAR_20->vlan_id = FUNC_3(VAR_31.key->vlan_id);
 }

 if (FUNC_14(VAR_21, VAR_4)) {
  struct flow_match_control VAR_32;

  FUNC_9(VAR_21, &VAR_32);
  VAR_25 = VAR_32.key->addr_type;
 }

 if (VAR_25 == VAR_7) {
  struct flow_match_ipv4_addrs VAR_33;

  FUNC_12(VAR_21, &VAR_33);
  if (VAR_33.mask->dst) {
   if (VAR_33.mask->dst == FUNC_4(0xffffffff)) {
    VAR_27 |= VAR_11;
   } else {
    FUNC_5(&VAR_26->pdev->dev, "Bad ip dst mask %pI4b\n",
     &VAR_33.mask->dst);
    return VAR_16;
   }
  }

  if (VAR_33.mask->src) {
   if (VAR_33.mask->src == FUNC_4(0xffffffff)) {
    VAR_27 |= VAR_11;
   } else {
    FUNC_5(&VAR_26->pdev->dev, "Bad ip src mask %pI4b\n",
     &VAR_33.mask->src);
    return VAR_16;
   }
  }

  if (VAR_27 & VAR_15) {
   FUNC_5(&VAR_26->pdev->dev, "Tenant id not allowed for ip filter\n");
   return VAR_16;
  }
  VAR_20->dst_ipv4 = VAR_33.key->dst;
  VAR_20->src_ipv4 = VAR_33.key->src;
 }

 if (VAR_25 == VAR_8) {
  struct flow_match_ipv6_addrs VAR_34;

  FUNC_13(VAR_21, &VAR_34);




  if (FUNC_18(&VAR_34.key->dst) ||
      FUNC_18(&VAR_34.key->src)) {
   FUNC_5(&VAR_26->pdev->dev,
    "Bad ipv6, addr is LOOPBACK\n");
   return VAR_16;
  }
  if (!FUNC_17(&VAR_34.mask->dst) ||
      !FUNC_17(&VAR_34.mask->src))
   VAR_27 |= VAR_11;

  FUNC_21(&VAR_20->src_ipv6, &VAR_34.key->src.s6_addr32,
         sizeof(VAR_20->src_ipv6));
  FUNC_21(&VAR_20->dst_ipv6, &VAR_34.key->dst.s6_addr32,
         sizeof(VAR_20->dst_ipv6));
 }

 if (FUNC_14(VAR_21, VAR_9)) {
  struct flow_match_ports VAR_35;

  FUNC_15(VAR_21, &VAR_35);
  if (VAR_35.mask->src) {
   if (VAR_35.mask->src == FUNC_3(0xffff)) {
    VAR_27 |= VAR_11;
   } else {
    FUNC_5(&VAR_26->pdev->dev, "Bad src port mask 0x%04x\n",
     FUNC_1(VAR_35.mask->src));
    return VAR_16;
   }
  }

  if (VAR_35.mask->dst) {
   if (VAR_35.mask->dst == FUNC_3(0xffff)) {
    VAR_27 |= VAR_11;
   } else {
    FUNC_5(&VAR_26->pdev->dev, "Bad dst port mask 0x%04x\n",
     FUNC_1(VAR_35.mask->dst));
    return VAR_16;
   }
  }

  VAR_20->dst_port = VAR_35.key->dst;
  VAR_20->src_port = VAR_35.key->src;

  switch (VAR_20->ip_proto) {
  case 129:
  case 128:
   break;
  default:
   FUNC_5(&VAR_26->pdev->dev,
    "Only UDP and TCP transport are supported\n");
   return -VAR_0;
  }
 }
 VAR_20->flags = VAR_27;
 return 0;
}
