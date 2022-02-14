
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_42__ TYPE_9__ ;
typedef struct TYPE_41__ TYPE_8__ ;
typedef struct TYPE_40__ TYPE_7__ ;
typedef struct TYPE_39__ TYPE_6__ ;
typedef struct TYPE_38__ TYPE_5__ ;
typedef struct TYPE_37__ TYPE_4__ ;
typedef struct TYPE_36__ TYPE_3__ ;
typedef struct TYPE_35__ TYPE_2__ ;
typedef struct TYPE_34__ TYPE_21__ ;
typedef struct TYPE_33__ TYPE_20__ ;
typedef struct TYPE_32__ TYPE_1__ ;
typedef struct TYPE_31__ TYPE_19__ ;
typedef struct TYPE_30__ TYPE_18__ ;
typedef struct TYPE_29__ TYPE_17__ ;
typedef struct TYPE_28__ TYPE_16__ ;
typedef struct TYPE_27__ TYPE_15__ ;
typedef struct TYPE_26__ TYPE_14__ ;
typedef struct TYPE_25__ TYPE_13__ ;
typedef struct TYPE_24__ TYPE_12__ ;
typedef struct TYPE_23__ TYPE_11__ ;
typedef struct TYPE_22__ TYPE_10__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct TYPE_29__ {int vlan_id; scalar_t__ src_port; scalar_t__ dst_port; scalar_t__* src_ip; scalar_t__* dst_ip; int src_mac; int dst_mac; } ;
struct TYPE_30__ {TYPE_17__ tcp_spec; } ;
struct TYPE_27__ {int* dst_mac; int* src_mac; int vlan_id; int dst_port; int src_port; scalar_t__* src_ip; scalar_t__* dst_ip; } ;
struct TYPE_28__ {TYPE_15__ tcp_spec; } ;
struct virtchnl_filter {int field_flags; TYPE_18__ data; TYPE_16__ mask; int flow_type; } ;
struct iavf_cloud_filter {struct virtchnl_filter f; } ;
struct iavf_adapter {TYPE_13__* pdev; } ;
struct TYPE_33__ {struct flow_dissector* dissector; } ;
struct flow_rule {TYPE_20__ match; } ;
struct flow_match_vlan {TYPE_7__* key; TYPE_6__* mask; } ;
struct flow_match_ports {TYPE_19__* key; TYPE_14__* mask; } ;
struct flow_match_ipv6_addrs {TYPE_12__* key; TYPE_11__* mask; } ;
struct flow_match_ipv4_addrs {TYPE_10__* key; TYPE_9__* mask; } ;
struct flow_match_eth_addrs {TYPE_5__* key; TYPE_4__* mask; } ;
struct flow_match_enc_keyid {TYPE_1__* mask; } ;
struct flow_match_control {TYPE_8__* key; } ;
struct flow_match_basic {TYPE_3__* key; TYPE_2__* mask; } ;
struct flow_dissector {int used_keys; } ;
struct flow_cls_offload {int dummy; } ;
struct TYPE_42__ {scalar_t__ dst; scalar_t__ src; } ;
struct TYPE_41__ {scalar_t__ addr_type; } ;
struct TYPE_40__ {int vlan_id; } ;
struct TYPE_39__ {int vlan_id; } ;
struct TYPE_38__ {int dst; int src; } ;
struct TYPE_37__ {int dst; int src; } ;
struct TYPE_36__ {scalar_t__ ip_proto; int n_proto; } ;
struct TYPE_35__ {int n_proto; } ;
struct TYPE_34__ {int s6_addr32; } ;
struct TYPE_32__ {scalar_t__ keyid; } ;
struct TYPE_31__ {scalar_t__ src; scalar_t__ dst; } ;
struct TYPE_26__ {int src; int dst; } ;
struct TYPE_25__ {int dev; } ;
struct TYPE_24__ {TYPE_21__ src; TYPE_21__ dst; } ;
struct TYPE_23__ {int src; int dst; } ;
struct TYPE_22__ {scalar_t__ src; scalar_t__ dst; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int ,int) ;
 struct flow_rule* FUNC_8 (struct flow_cls_offload*) ;
 int FUNC_9 (struct flow_rule*,struct flow_match_basic*) ;
 int FUNC_10 (struct flow_rule*,struct flow_match_control*) ;
 int FUNC_11 (struct flow_rule*,struct flow_match_enc_keyid*) ;
 int FUNC_12 (struct flow_rule*,struct flow_match_eth_addrs*) ;
 int FUNC_13 (struct flow_rule*,struct flow_match_ipv4_addrs*) ;
 int FUNC_14 (struct flow_rule*,struct flow_match_ipv6_addrs*) ;
 scalar_t__ FUNC_15 (struct flow_rule*,scalar_t__) ;
 int FUNC_16 (struct flow_rule*,struct flow_match_ports*) ;
 int FUNC_17 (struct flow_rule*,struct flow_match_vlan*) ;
 scalar_t__ FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (TYPE_21__*) ;
 scalar_t__ FUNC_20 (int) ;
 scalar_t__ FUNC_21 (int) ;
 scalar_t__ FUNC_22 (int) ;
 int FUNC_23 (int) ;
 int FUNC_24 (scalar_t__**,int *,int) ;
 scalar_t__ FUNC_25 (int ) ;

__attribute__((used)) static int FUNC_26(struct iavf_adapter *VAR_24,
     struct flow_cls_offload *VAR_25,
     struct iavf_cloud_filter *VAR_26)
{
 struct flow_rule *VAR_27 = FUNC_8(VAR_25);
 struct flow_dissector *VAR_28 = VAR_27->match.dissector;
 u16 VAR_29 = 0;
 u16 VAR_30 = 0;
 u8 VAR_31 = 0;
 u16 VAR_32 = 0;
 u16 VAR_33 = 0;
 int VAR_34 = 0;
 struct virtchnl_filter *VAR_35 = &VAR_26->f;

 if (VAR_28->used_keys &
     ~(FUNC_0(VAR_7) |
       FUNC_0(VAR_6) |
       FUNC_0(VAR_9) |
       FUNC_0(VAR_13) |
       FUNC_0(VAR_10) |
       FUNC_0(VAR_11) |
       FUNC_0(VAR_12) |
       FUNC_0(VAR_8))) {
  FUNC_5(&VAR_24->pdev->dev, "Unsupported key used: 0x%x\n",
   VAR_28->used_keys);
  return -VAR_1;
 }

 if (FUNC_15(VAR_27, VAR_8)) {
  struct flow_match_enc_keyid VAR_36;

  FUNC_11(VAR_27, &VAR_36);
  if (VAR_36.mask->keyid != 0)
   VAR_31 |= VAR_18;
 }

 if (FUNC_15(VAR_27, VAR_6)) {
  struct flow_match_basic VAR_37;

  FUNC_9(VAR_27, &VAR_37);
  VAR_30 = FUNC_25(VAR_37.key->n_proto);
  VAR_29 = FUNC_25(VAR_37.mask->n_proto);

  if (VAR_30 == VAR_3) {
   VAR_30 = 0;
   VAR_29 = 0;
  }
  VAR_33 = VAR_30 & VAR_29;
  if (VAR_33 != VAR_4 && VAR_33 != VAR_5)
   return -VAR_0;
  if (VAR_33 == VAR_5) {

   VAR_35->flow_type = VAR_22;
  }

  if (VAR_37.key->ip_proto != VAR_20) {
   FUNC_6(&VAR_24->pdev->dev, "Only TCP transport is supported\n");
   return -VAR_0;
  }
 }

 if (FUNC_15(VAR_27, VAR_9)) {
  struct flow_match_eth_addrs VAR_38;

  FUNC_12(VAR_27, &VAR_38);


  if (!FUNC_23(VAR_38.mask->dst)) {
   if (FUNC_20(VAR_38.mask->dst)) {
    VAR_31 |= VAR_17;
   } else {
    FUNC_5(&VAR_24->pdev->dev, "Bad ether dest mask %pM\n",
     VAR_38.mask->dst);
    return VAR_19;
   }
  }

  if (!FUNC_23(VAR_38.mask->src)) {
   if (FUNC_20(VAR_38.mask->src)) {
    VAR_31 |= VAR_15;
   } else {
    FUNC_5(&VAR_24->pdev->dev, "Bad ether src mask %pM\n",
     VAR_38.mask->src);
    return VAR_19;
   }
  }

  if (!FUNC_23(VAR_38.key->dst))
   if (FUNC_22(VAR_38.key->dst) ||
       FUNC_21(VAR_38.key->dst)) {

    for (VAR_34 = 0; VAR_34 < VAR_2; VAR_34++)
     VAR_35->mask.tcp_spec.dst_mac[VAR_34] |= 0xff;
    FUNC_7(VAR_35->data.tcp_spec.dst_mac,
      VAR_38.key->dst);
   }

  if (!FUNC_23(VAR_38.key->src))
   if (FUNC_22(VAR_38.key->src) ||
       FUNC_21(VAR_38.key->src)) {

    for (VAR_34 = 0; VAR_34 < VAR_2; VAR_34++)
     VAR_35->mask.tcp_spec.src_mac[VAR_34] |= 0xff;
    FUNC_7(VAR_35->data.tcp_spec.src_mac,
      VAR_38.key->src);
  }
 }

 if (FUNC_15(VAR_27, VAR_13)) {
  struct flow_match_vlan VAR_39;

  FUNC_17(VAR_27, &VAR_39);
  if (VAR_39.mask->vlan_id) {
   if (VAR_39.mask->vlan_id == VAR_23) {
    VAR_31 |= VAR_16;
   } else {
    FUNC_5(&VAR_24->pdev->dev, "Bad vlan mask %u\n",
     VAR_39.mask->vlan_id);
    return VAR_19;
   }
  }
  VAR_35->mask.tcp_spec.vlan_id |= FUNC_3(0xffff);
  VAR_35->data.tcp_spec.vlan_id = FUNC_3(VAR_39.key->vlan_id);
 }

 if (FUNC_15(VAR_27, VAR_7)) {
  struct flow_match_control VAR_40;

  FUNC_10(VAR_27, &VAR_40);
  VAR_32 = VAR_40.key->addr_type;
 }

 if (VAR_32 == VAR_10) {
  struct flow_match_ipv4_addrs VAR_41;

  FUNC_13(VAR_27, &VAR_41);
  if (VAR_41.mask->dst) {
   if (VAR_41.mask->dst == FUNC_4(0xffffffff)) {
    VAR_31 |= VAR_14;
   } else {
    FUNC_5(&VAR_24->pdev->dev, "Bad ip dst mask 0x%08x\n",
     FUNC_2(VAR_41.mask->dst));
    return VAR_19;
   }
  }

  if (VAR_41.mask->src) {
   if (VAR_41.mask->src == FUNC_4(0xffffffff)) {
    VAR_31 |= VAR_14;
   } else {
    FUNC_5(&VAR_24->pdev->dev, "Bad ip src mask 0x%08x\n",
     FUNC_2(VAR_41.mask->dst));
    return VAR_19;
   }
  }

  if (VAR_31 & VAR_18) {
   FUNC_6(&VAR_24->pdev->dev, "Tenant id not allowed for ip filter\n");
   return VAR_19;
  }
  if (VAR_41.key->dst) {
   VAR_35->mask.tcp_spec.dst_ip[0] |= FUNC_4(0xffffffff);
   VAR_35->data.tcp_spec.dst_ip[0] = VAR_41.key->dst;
  }
  if (VAR_41.key->src) {
   VAR_35->mask.tcp_spec.src_ip[0] |= FUNC_4(0xffffffff);
   VAR_35->data.tcp_spec.src_ip[0] = VAR_41.key->src;
  }
 }

 if (VAR_32 == VAR_11) {
  struct flow_match_ipv6_addrs VAR_42;

  FUNC_14(VAR_27, &VAR_42);


  if (FUNC_18(&VAR_42.mask->dst)) {
   FUNC_5(&VAR_24->pdev->dev, "Bad ipv6 dst mask 0x%02x\n",
    VAR_21);
   return VAR_19;
  }




  if (FUNC_19(&VAR_42.key->dst) ||
      FUNC_19(&VAR_42.key->src)) {
   FUNC_5(&VAR_24->pdev->dev,
    "ipv6 addr should not be loopback\n");
   return VAR_19;
  }
  if (!FUNC_18(&VAR_42.mask->dst) ||
      !FUNC_18(&VAR_42.mask->src))
   VAR_31 |= VAR_14;

  for (VAR_34 = 0; VAR_34 < 4; VAR_34++)
   VAR_35->mask.tcp_spec.dst_ip[VAR_34] |= FUNC_4(0xffffffff);
  FUNC_24(&VAR_35->data.tcp_spec.dst_ip, &VAR_42.key->dst.s6_addr32,
         sizeof(VAR_35->data.tcp_spec.dst_ip));
  for (VAR_34 = 0; VAR_34 < 4; VAR_34++)
   VAR_35->mask.tcp_spec.src_ip[VAR_34] |= FUNC_4(0xffffffff);
  FUNC_24(&VAR_35->data.tcp_spec.src_ip, &VAR_42.key->src.s6_addr32,
         sizeof(VAR_35->data.tcp_spec.src_ip));
 }
 if (FUNC_15(VAR_27, VAR_12)) {
  struct flow_match_ports VAR_43;

  FUNC_16(VAR_27, &VAR_43);
  if (VAR_43.mask->src) {
   if (VAR_43.mask->src == FUNC_3(0xffff)) {
    VAR_31 |= VAR_14;
   } else {
    FUNC_5(&VAR_24->pdev->dev, "Bad src port mask %u\n",
     FUNC_1(VAR_43.mask->src));
    return VAR_19;
   }
  }

  if (VAR_43.mask->dst) {
   if (VAR_43.mask->dst == FUNC_3(0xffff)) {
    VAR_31 |= VAR_14;
   } else {
    FUNC_5(&VAR_24->pdev->dev, "Bad dst port mask %u\n",
     FUNC_1(VAR_43.mask->dst));
    return VAR_19;
   }
  }
  if (VAR_43.key->dst) {
   VAR_35->mask.tcp_spec.dst_port |= FUNC_3(0xffff);
   VAR_35->data.tcp_spec.dst_port = VAR_43.key->dst;
  }

  if (VAR_43.key->src) {
   VAR_35->mask.tcp_spec.src_port |= FUNC_3(0xffff);
   VAR_35->data.tcp_spec.src_port = VAR_43.key->src;
  }
 }
 VAR_35->field_flags = VAR_31;

 return 0;
}
