
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_16__ ;
typedef struct TYPE_22__ TYPE_15__ ;
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct mlx5e_priv {TYPE_13__* netdev; int mdev; } ;
struct mlx5_flow_spec {void* match_criteria; void* match_value; } ;
struct flow_rule {int dummy; } ;
struct flow_match_ipv6_addrs {TYPE_10__* key; TYPE_8__* mask; } ;
struct flow_match_ipv4_addrs {TYPE_6__* key; TYPE_4__* mask; } ;
struct flow_match_ip {TYPE_12__* mask; TYPE_11__* key; } ;
struct flow_match_control {TYPE_2__* key; } ;
struct TYPE_24__ {struct netlink_ext_ack* extack; } ;
struct flow_cls_offload {TYPE_1__ common; } ;
struct TYPE_32__ {int ipv6; } ;
struct TYPE_31__ {int dst; int src; } ;
struct TYPE_30__ {int ipv6; } ;
struct TYPE_29__ {int dst; int src; } ;
struct TYPE_28__ {int ipv4; } ;
struct TYPE_27__ {int dst; int src; } ;
struct TYPE_26__ {int ipv4; } ;
struct TYPE_25__ {scalar_t__ addr_type; } ;
struct TYPE_23__ {TYPE_9__ ipv6_layout; TYPE_5__ ipv4_layout; } ;
struct TYPE_22__ {int outer_ipv4_ttl; } ;
struct TYPE_21__ {TYPE_7__ ipv6_layout; TYPE_3__ ipv4_layout; } ;
struct TYPE_20__ {int dev_addr; } ;
struct TYPE_19__ {int tos; int ttl; } ;
struct TYPE_18__ {int tos; int ttl; } ;
struct TYPE_17__ {int dst; int src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 void* FUNC_0 (int ,void*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,void*,int ,int) ;
 int FUNC_4 (int ,void*,int ) ;
 int FUNC_5 (struct netlink_ext_ack*,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_16__ VAR_9 ;
 int FUNC_6 (void*,int ) ;
 int VAR_10 ;
 struct flow_rule* FUNC_7 (struct flow_cls_offload*) ;
 int FUNC_8 (struct flow_rule*,struct flow_match_control*) ;
 int FUNC_9 (struct flow_rule*,struct flow_match_ip*) ;
 int FUNC_10 (struct flow_rule*,struct flow_match_ipv4_addrs*) ;
 int FUNC_11 (struct flow_rule*,struct flow_match_ipv6_addrs*) ;
 scalar_t__ FUNC_12 (struct flow_rule*,int ) ;
 int VAR_11 ;
 TYPE_15__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_13 (void*,int *,int ) ;
 int FUNC_14 (struct net_device*,struct mlx5e_priv*,struct mlx5_flow_spec*,struct flow_cls_offload*,void*,void*,int *) ;
 int FUNC_15 (int ) ;
 int VAR_19 ;
 TYPE_14__ VAR_20 ;
 int VAR_21 ;

__attribute__((used)) static int FUNC_16(struct mlx5e_priv *VAR_22,
        struct mlx5_flow_spec *VAR_23,
        struct flow_cls_offload *VAR_24,
        struct net_device *VAR_25, u8 *VAR_26)
{
 struct netlink_ext_ack *VAR_27 = VAR_24->common.extack;
 void *VAR_28 = FUNC_0(VAR_13, VAR_23->match_criteria,
           VAR_19);
 void *VAR_29 = FUNC_0(VAR_13, VAR_23->match_value,
           VAR_19);
 struct flow_rule *VAR_30 = FUNC_7(VAR_24);
 int VAR_31;

 VAR_31 = FUNC_14(VAR_25, VAR_22, VAR_23, VAR_24,
     VAR_28, VAR_29, VAR_26);
 if (VAR_31) {
  FUNC_5(VAR_27,
       "failed to parse tunnel attributes");
  return VAR_31;
 }

 if (FUNC_12(VAR_30, VAR_3)) {
  struct flow_match_control VAR_32;
  u16 VAR_33;

  FUNC_8(VAR_30, &VAR_32);
  VAR_33 = VAR_32.key->addr_type;


  if (VAR_33 == VAR_5) {
   struct flow_match_ipv4_addrs VAR_34;

   FUNC_10(VAR_30, &VAR_34);
   FUNC_3(VAR_14, VAR_28,
     VAR_20,
     FUNC_15(VAR_34.mask->src));
   FUNC_3(VAR_14, VAR_29,
     VAR_20,
     FUNC_15(VAR_34.key->src));

   FUNC_3(VAR_14, VAR_28,
     VAR_9,
     FUNC_15(VAR_34.mask->dst));
   FUNC_3(VAR_14, VAR_29,
     VAR_9,
     FUNC_15(VAR_34.key->dst));

   FUNC_4(VAR_14, VAR_28,
      VAR_10);
   FUNC_3(VAR_14, VAR_29, VAR_10,
     VAR_1);
  } else if (VAR_33 == VAR_6) {
   struct flow_match_ipv6_addrs VAR_35;

   FUNC_11(VAR_30, &VAR_35);
   FUNC_13(FUNC_0(VAR_14, VAR_28,
         VAR_20),
          &VAR_35.mask->src, FUNC_2(VAR_18,
           VAR_17));
   FUNC_13(FUNC_0(VAR_14, VAR_29,
         VAR_20),
          &VAR_35.key->src, FUNC_2(VAR_18,
          VAR_17));

   FUNC_13(FUNC_0(VAR_14, VAR_28,
         VAR_9),
          &VAR_35.mask->dst, FUNC_2(VAR_18,
           VAR_17));
   FUNC_13(FUNC_0(VAR_14, VAR_29,
         VAR_9),
          &VAR_35.key->dst, FUNC_2(VAR_18,
          VAR_17));

   FUNC_4(VAR_14, VAR_28,
      VAR_10);
   FUNC_3(VAR_14, VAR_29, VAR_10,
     VAR_2);
  }
 }

 if (FUNC_12(VAR_30, VAR_4)) {
  struct flow_match_ip VAR_36;

  FUNC_9(VAR_30, &VAR_36);
  FUNC_3(VAR_14, VAR_28, VAR_16,
    VAR_36.mask->tos & 0x3);
  FUNC_3(VAR_14, VAR_29, VAR_16,
    VAR_36.key->tos & 0x3);

  FUNC_3(VAR_14, VAR_28, VAR_15,
    VAR_36.mask->tos >> 2);
  FUNC_3(VAR_14, VAR_29, VAR_15,
    VAR_36.key->tos >> 2);

  FUNC_3(VAR_14, VAR_28, VAR_21,
    VAR_36.mask->ttl);
  FUNC_3(VAR_14, VAR_29, VAR_21,
    VAR_36.key->ttl);

  if (VAR_36.mask->ttl &&
      !FUNC_1
   (VAR_22->mdev,
    VAR_12.outer_ipv4_ttl)) {
   FUNC_5(VAR_27,
        "Matching on TTL is not supported");
   return -VAR_0;
  }

 }




 FUNC_4(VAR_14, VAR_28, VAR_8);
 FUNC_4(VAR_14, VAR_28, VAR_7);
 FUNC_6(FUNC_0(VAR_14, VAR_29,
         VAR_8), VAR_22->netdev->dev_addr);


 FUNC_3(VAR_14, VAR_28, VAR_11, 1);
 FUNC_3(VAR_14, VAR_29, VAR_11, 0);

 return 0;
}
