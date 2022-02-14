
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_50__ TYPE_9__ ;
typedef struct TYPE_49__ TYPE_8__ ;
typedef struct TYPE_48__ TYPE_7__ ;
typedef struct TYPE_47__ TYPE_6__ ;
typedef struct TYPE_46__ TYPE_5__ ;
typedef struct TYPE_45__ TYPE_4__ ;
typedef struct TYPE_44__ TYPE_3__ ;
typedef struct TYPE_43__ TYPE_2__ ;
typedef struct TYPE_42__ TYPE_25__ ;
typedef struct TYPE_41__ TYPE_24__ ;
typedef struct TYPE_40__ TYPE_23__ ;
typedef struct TYPE_39__ TYPE_22__ ;
typedef struct TYPE_38__ TYPE_21__ ;
typedef struct TYPE_37__ TYPE_20__ ;
typedef struct TYPE_36__ TYPE_1__ ;
typedef struct TYPE_35__ TYPE_19__ ;
typedef struct TYPE_34__ TYPE_18__ ;
typedef struct TYPE_33__ TYPE_17__ ;
typedef struct TYPE_32__ TYPE_16__ ;
typedef struct TYPE_31__ TYPE_15__ ;
typedef struct TYPE_30__ TYPE_14__ ;
typedef struct TYPE_29__ TYPE_13__ ;
typedef struct TYPE_28__ TYPE_12__ ;
typedef struct TYPE_27__ TYPE_11__ ;
typedef struct TYPE_26__ TYPE_10__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct mlx5e_priv {int netdev; int mdev; } ;
struct mlx5_flow_spec {void* match_criteria; void* match_value; } ;
struct TYPE_43__ {struct flow_dissector* dissector; } ;
struct flow_rule {TYPE_2__ match; } ;
struct flow_match_vlan {struct flow_dissector_key_vlan* key; struct flow_dissector_key_vlan* mask; } ;
struct flow_match_tcp {TYPE_22__* mask; TYPE_21__* key; } ;
struct flow_match_ports {TYPE_20__* mask; TYPE_19__* key; } ;
struct flow_match_ipv6_addrs {TYPE_16__* mask; TYPE_15__* key; } ;
struct flow_match_ipv4_addrs {TYPE_12__* mask; TYPE_11__* key; } ;
struct flow_match_ip {TYPE_18__* mask; TYPE_17__* key; } ;
struct flow_match_eth_addrs {TYPE_4__* mask; TYPE_3__* key; } ;
struct flow_match_control {TYPE_6__* key; TYPE_5__* mask; } ;
struct flow_match_basic {TYPE_8__* mask; TYPE_7__* key; } ;
struct flow_dissector_key_vlan {int vlan_id; scalar_t__ vlan_tpid; int vlan_priority; } ;
struct flow_dissector {int used_keys; } ;
struct TYPE_36__ {struct netlink_ext_ack* extack; } ;
struct flow_cls_offload {TYPE_1__ common; } ;
struct TYPE_50__ {int ipv4; } ;
struct TYPE_49__ {int ip_proto; scalar_t__ n_proto; } ;
struct TYPE_48__ {scalar_t__ ip_proto; scalar_t__ n_proto; } ;
struct TYPE_47__ {scalar_t__ addr_type; int flags; } ;
struct TYPE_46__ {int flags; } ;
struct TYPE_45__ {int dst; int src; } ;
struct TYPE_44__ {int src; int dst; } ;
struct TYPE_30__ {int ipv6; } ;
struct TYPE_26__ {int ipv4; } ;
struct TYPE_42__ {TYPE_14__ ipv6_layout; TYPE_10__ ipv4_layout; } ;
struct TYPE_41__ {int outer_ipv4_ttl; } ;
struct TYPE_29__ {int ipv6; } ;
struct TYPE_40__ {TYPE_13__ ipv6_layout; TYPE_9__ ipv4_layout; } ;
struct TYPE_39__ {scalar_t__ flags; } ;
struct TYPE_38__ {scalar_t__ flags; } ;
struct TYPE_37__ {scalar_t__ dst; scalar_t__ src; } ;
struct TYPE_35__ {scalar_t__ dst; scalar_t__ src; } ;
struct TYPE_34__ {int tos; int ttl; } ;
struct TYPE_33__ {int tos; int ttl; } ;
struct TYPE_32__ {scalar_t__ dst; scalar_t__ src; } ;
struct TYPE_31__ {scalar_t__ dst; scalar_t__ src; } ;
struct TYPE_28__ {scalar_t__ dst; scalar_t__ src; } ;
struct TYPE_27__ {scalar_t__ dst; scalar_t__ src; } ;


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
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;


 scalar_t__ VAR_23 ;
 void* FUNC_1 (int ,void*,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 int FUNC_3 (int ,void*,int ,int) ;
 int FUNC_4 (struct netlink_ext_ack*,char*) ;
 int VAR_29 ;
 int VAR_30 ;
 TYPE_25__ VAR_31 ;
 int FUNC_5 (void*,int ) ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 struct flow_rule* FUNC_6 (struct flow_cls_offload*) ;
 int FUNC_7 (struct flow_rule*,struct flow_match_basic*) ;
 int FUNC_8 (struct flow_rule*,struct flow_match_control*) ;
 int FUNC_9 (struct flow_rule*,struct flow_match_vlan*) ;
 int FUNC_10 (struct flow_rule*,struct flow_match_eth_addrs*) ;
 int FUNC_11 (struct flow_rule*,struct flow_match_ip*) ;
 int FUNC_12 (struct flow_rule*,struct flow_match_ipv4_addrs*) ;
 int FUNC_13 (struct flow_rule*,struct flow_match_ipv6_addrs*) ;
 scalar_t__ FUNC_14 (struct flow_rule*,scalar_t__) ;
 int FUNC_15 (struct flow_rule*,struct flow_match_ports*) ;
 int FUNC_16 (struct flow_rule*,struct flow_match_tcp*) ;
 int FUNC_17 (struct flow_rule*,struct flow_match_vlan*) ;
 int VAR_35 ;
 TYPE_24__ VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 void* FUNC_18 (int ,struct mlx5_flow_spec*) ;
 void* FUNC_19 (int ,struct mlx5_flow_spec*) ;
 scalar_t__ FUNC_20 (int ) ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 scalar_t__ FUNC_21 (scalar_t__*) ;
 scalar_t__ FUNC_22 (struct net_device*) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (void*,scalar_t__*,int) ;
 int FUNC_25 (struct flow_dissector_key_vlan*,int,int) ;
 int VAR_43 ;
 scalar_t__ FUNC_26 (struct net_device*) ;
 int FUNC_27 (int ,char*) ;
 int FUNC_28 (int ,char*,int) ;
 int FUNC_29 (scalar_t__) ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 scalar_t__ FUNC_30 (struct mlx5e_priv*,struct mlx5_flow_spec*,struct flow_cls_offload*,struct net_device*,scalar_t__*) ;
 int VAR_49 ;
 TYPE_23__ VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int FUNC_31 (struct net_device*) ;
 scalar_t__ FUNC_32 (struct net_device*) ;

__attribute__((used)) static int FUNC_33(struct mlx5e_priv *VAR_58,
         struct mlx5_flow_spec *VAR_59,
         struct flow_cls_offload *VAR_60,
         struct net_device *VAR_61,
         u8 *VAR_62, u8 *VAR_63)
{
 struct netlink_ext_ack *VAR_64 = VAR_60->common.extack;
 void *VAR_65 = FUNC_1(VAR_37, VAR_59->match_criteria,
           VAR_44);
 void *VAR_66 = FUNC_1(VAR_37, VAR_59->match_value,
           VAR_44);
 void *VAR_67 = FUNC_1(VAR_37, VAR_59->match_criteria,
        VAR_43);
 void *VAR_68 = FUNC_1(VAR_37, VAR_59->match_value,
        VAR_43);
 struct flow_rule *VAR_69 = FUNC_6(VAR_60);
 struct flow_dissector *VAR_70 = VAR_69->match.dissector;
 u16 VAR_71 = 0;
 u8 VAR_72 = 0;
 u8 *VAR_73;

 VAR_73 = VAR_63;

 if (VAR_70->used_keys &
     ~(FUNC_0(VAR_17) |
       FUNC_0(VAR_4) |
       FUNC_0(VAR_3) |
       FUNC_0(VAR_13) |
       FUNC_0(VAR_20) |
       FUNC_0(VAR_5) |
       FUNC_0(VAR_15) |
       FUNC_0(VAR_16) |
       FUNC_0(VAR_18) |
       FUNC_0(VAR_10) |
       FUNC_0(VAR_8) |
       FUNC_0(VAR_9) |
       FUNC_0(VAR_12) |
       FUNC_0(VAR_6) |
       FUNC_0(VAR_19) |
       FUNC_0(VAR_14) |
       FUNC_0(VAR_7) |
       FUNC_0(VAR_11))) {
  FUNC_4(VAR_64, "Unsupported key");
  FUNC_28(VAR_58->netdev, "Unsupported key used: 0x%x\n",
       VAR_70->used_keys);
  return -VAR_1;
 }

 if (FUNC_26(VAR_61)) {
  if (FUNC_30(VAR_58, VAR_59, VAR_60, VAR_61,
          VAR_63))
   return -VAR_1;




  VAR_73 = VAR_62;
  VAR_65 = FUNC_18(VAR_24,
             VAR_59);
  VAR_66 = FUNC_19(VAR_24,
          VAR_59);
 }

 if (FUNC_14(VAR_69, VAR_3)) {
  struct flow_match_basic VAR_74;

  FUNC_7(VAR_69, &VAR_74);
  FUNC_3(VAR_38, VAR_65, VAR_32,
    FUNC_29(VAR_74.mask->n_proto));
  FUNC_3(VAR_38, VAR_66, VAR_32,
    FUNC_29(VAR_74.key->n_proto));

  if (VAR_74.mask->n_proto)
   *VAR_73 = VAR_25;
 }
 if (FUNC_14(VAR_69, VAR_20) ||
     FUNC_22(VAR_61)) {
  struct flow_dissector_key_vlan VAR_75;
  struct flow_dissector_key_vlan VAR_76;
  struct flow_match_vlan VAR_77;

  if (FUNC_22(VAR_61)) {
   VAR_77.key = &VAR_76;
   VAR_77.key->vlan_id = FUNC_31(VAR_61);
   VAR_77.key->vlan_tpid = FUNC_32(VAR_61);
   VAR_77.key->vlan_priority = 0;
   VAR_77.mask = &VAR_75;
   FUNC_25(VAR_77.mask, 0xff, sizeof(*VAR_77.mask));
   VAR_77.mask->vlan_priority = 0;
  } else {
   FUNC_17(VAR_69, &VAR_77);
  }
  if (VAR_77.mask->vlan_id ||
      VAR_77.mask->vlan_priority ||
      VAR_77.mask->vlan_tpid) {
   if (VAR_77.key->vlan_tpid == FUNC_20(VAR_2)) {
    FUNC_3(VAR_38, VAR_65,
      VAR_51, 1);
    FUNC_3(VAR_38, VAR_66,
      VAR_51, 1);
   } else {
    FUNC_3(VAR_38, VAR_65,
      VAR_29, 1);
    FUNC_3(VAR_38, VAR_66,
      VAR_29, 1);
   }

   FUNC_3(VAR_38, VAR_65, VAR_34,
     VAR_77.mask->vlan_id);
   FUNC_3(VAR_38, VAR_66, VAR_34,
     VAR_77.key->vlan_id);

   FUNC_3(VAR_38, VAR_65, VAR_33,
     VAR_77.mask->vlan_priority);
   FUNC_3(VAR_38, VAR_66, VAR_33,
     VAR_77.key->vlan_priority);

   *VAR_73 = VAR_25;
  }
 } else if (*VAR_73 != VAR_28) {




  FUNC_3(VAR_38, VAR_65, VAR_29, 1);
  *VAR_73 = VAR_25;
 }

 if (FUNC_14(VAR_69, VAR_5)) {
  struct flow_match_vlan VAR_78;

  FUNC_9(VAR_69, &VAR_78);
  if (VAR_78.mask->vlan_id ||
      VAR_78.mask->vlan_priority ||
      VAR_78.mask->vlan_tpid) {
   if (VAR_78.key->vlan_tpid == FUNC_20(VAR_2)) {
    FUNC_3(VAR_39, VAR_67,
      VAR_47, 1);
    FUNC_3(VAR_39, VAR_68,
      VAR_47, 1);
   } else {
    FUNC_3(VAR_39, VAR_67,
      VAR_45, 1);
    FUNC_3(VAR_39, VAR_68,
      VAR_45, 1);
   }

   FUNC_3(VAR_39, VAR_67, VAR_48,
     VAR_78.mask->vlan_id);
   FUNC_3(VAR_39, VAR_68, VAR_48,
     VAR_78.key->vlan_id);
   FUNC_3(VAR_39, VAR_67, VAR_46,
     VAR_78.mask->vlan_priority);
   FUNC_3(VAR_39, VAR_68, VAR_46,
     VAR_78.key->vlan_priority);

   *VAR_73 = VAR_25;
  }
 }

 if (FUNC_14(VAR_69, VAR_13)) {
  struct flow_match_eth_addrs VAR_79;

  FUNC_10(VAR_69, &VAR_79);
  FUNC_5(FUNC_1(VAR_38, VAR_65,
          VAR_30),
    VAR_79.mask->dst);
  FUNC_5(FUNC_1(VAR_38, VAR_66,
          VAR_30),
    VAR_79.key->dst);

  FUNC_5(FUNC_1(VAR_38, VAR_65,
          VAR_49),
    VAR_79.mask->src);
  FUNC_5(FUNC_1(VAR_38, VAR_66,
          VAR_49),
    VAR_79.key->src);

  if (!FUNC_23(VAR_79.mask->src) ||
      !FUNC_23(VAR_79.mask->dst))
   *VAR_73 = VAR_25;
 }

 if (FUNC_14(VAR_69, VAR_4)) {
  struct flow_match_control VAR_80;

  FUNC_8(VAR_69, &VAR_80);
  VAR_71 = VAR_80.key->addr_type;


  if (VAR_80.mask->flags & VAR_21)
   return -VAR_1;

  if (VAR_80.mask->flags & VAR_22) {
   FUNC_3(VAR_38, VAR_65, VAR_35, 1);
   FUNC_3(VAR_38, VAR_66, VAR_35,
     VAR_80.key->flags & VAR_22);


   if (!(VAR_80.key->flags & VAR_22))
    *VAR_73 = VAR_25;

   else
    *VAR_73 = VAR_26;
  }
 }

 if (FUNC_14(VAR_69, VAR_3)) {
  struct flow_match_basic VAR_81;

  FUNC_7(VAR_69, &VAR_81);
  VAR_72 = VAR_81.key->ip_proto;

  FUNC_3(VAR_38, VAR_65, VAR_42,
    VAR_81.mask->ip_proto);
  FUNC_3(VAR_38, VAR_66, VAR_42,
    VAR_81.key->ip_proto);

  if (VAR_81.mask->ip_proto)
   *VAR_73 = VAR_26;
 }

 if (VAR_71 == VAR_15) {
  struct flow_match_ipv4_addrs VAR_82;

  FUNC_12(VAR_69, &VAR_82);
  FUNC_24(FUNC_1(VAR_38, VAR_65,
        VAR_50),
         &VAR_82.mask->src, sizeof(VAR_82.mask->src));
  FUNC_24(FUNC_1(VAR_38, VAR_66,
        VAR_50),
         &VAR_82.key->src, sizeof(VAR_82.key->src));
  FUNC_24(FUNC_1(VAR_38, VAR_65,
        VAR_31),
         &VAR_82.mask->dst, sizeof(VAR_82.mask->dst));
  FUNC_24(FUNC_1(VAR_38, VAR_66,
        VAR_31),
         &VAR_82.key->dst, sizeof(VAR_82.key->dst));

  if (VAR_82.mask->src || VAR_82.mask->dst)
   *VAR_73 = VAR_26;
 }

 if (VAR_71 == VAR_16) {
  struct flow_match_ipv6_addrs VAR_83;

  FUNC_13(VAR_69, &VAR_83);
  FUNC_24(FUNC_1(VAR_38, VAR_65,
        VAR_50),
         &VAR_83.mask->src, sizeof(VAR_83.mask->src));
  FUNC_24(FUNC_1(VAR_38, VAR_66,
        VAR_50),
         &VAR_83.key->src, sizeof(VAR_83.key->src));

  FUNC_24(FUNC_1(VAR_38, VAR_65,
        VAR_31),
         &VAR_83.mask->dst, sizeof(VAR_83.mask->dst));
  FUNC_24(FUNC_1(VAR_38, VAR_66,
        VAR_31),
         &VAR_83.key->dst, sizeof(VAR_83.key->dst));

  if (FUNC_21(&VAR_83.mask->src) != VAR_23 ||
      FUNC_21(&VAR_83.mask->dst) != VAR_23)
   *VAR_73 = VAR_26;
 }

 if (FUNC_14(VAR_69, VAR_14)) {
  struct flow_match_ip VAR_84;

  FUNC_11(VAR_69, &VAR_84);
  FUNC_3(VAR_38, VAR_65, VAR_41,
    VAR_84.mask->tos & 0x3);
  FUNC_3(VAR_38, VAR_66, VAR_41,
    VAR_84.key->tos & 0x3);

  FUNC_3(VAR_38, VAR_65, VAR_40,
    VAR_84.mask->tos >> 2);
  FUNC_3(VAR_38, VAR_66, VAR_40,
    VAR_84.key->tos >> 2);

  FUNC_3(VAR_38, VAR_65, VAR_55,
    VAR_84.mask->ttl);
  FUNC_3(VAR_38, VAR_66, VAR_55,
    VAR_84.key->ttl);

  if (VAR_84.mask->ttl &&
      !FUNC_2(VAR_58->mdev,
      VAR_36.outer_ipv4_ttl)) {
   FUNC_4(VAR_64,
        "Matching on TTL is not supported");
   return -VAR_1;
  }

  if (VAR_84.mask->tos || VAR_84.mask->ttl)
   *VAR_73 = VAR_26;
 }



 if (FUNC_14(VAR_69, VAR_18)) {
  struct flow_match_ports VAR_85;

  FUNC_15(VAR_69, &VAR_85);
  switch (VAR_72) {
  case 129:
   FUNC_3(VAR_38, VAR_65,
     VAR_54, FUNC_29(VAR_85.mask->src));
   FUNC_3(VAR_38, VAR_66,
     VAR_54, FUNC_29(VAR_85.key->src));

   FUNC_3(VAR_38, VAR_65,
     VAR_52, FUNC_29(VAR_85.mask->dst));
   FUNC_3(VAR_38, VAR_66,
     VAR_52, FUNC_29(VAR_85.key->dst));
   break;

  case 128:
   FUNC_3(VAR_38, VAR_65,
     VAR_57, FUNC_29(VAR_85.mask->src));
   FUNC_3(VAR_38, VAR_66,
     VAR_57, FUNC_29(VAR_85.key->src));

   FUNC_3(VAR_38, VAR_65,
     VAR_56, FUNC_29(VAR_85.mask->dst));
   FUNC_3(VAR_38, VAR_66,
     VAR_56, FUNC_29(VAR_85.key->dst));
   break;
  default:
   FUNC_4(VAR_64,
        "Only UDP and TCP transports are supported for L4 matching");
   FUNC_27(VAR_58->netdev,
       "Only UDP and TCP transport are supported\n");
   return -VAR_0;
  }

  if (VAR_85.mask->src || VAR_85.mask->dst)
   *VAR_73 = VAR_27;
 }

 if (FUNC_14(VAR_69, VAR_19)) {
  struct flow_match_tcp VAR_86;

  FUNC_16(VAR_69, &VAR_86);
  FUNC_3(VAR_38, VAR_65, VAR_53,
    FUNC_29(VAR_86.mask->flags));
  FUNC_3(VAR_38, VAR_66, VAR_53,
    FUNC_29(VAR_86.key->flags));

  if (VAR_86.mask->flags)
   *VAR_73 = VAR_27;
 }

 return 0;
}
