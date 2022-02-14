
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct nfp_flower_mac_mpls {void* mpls_lse; int mac_src; int mac_dst; } ;
struct flow_rule {int dummy; } ;
struct flow_match_mpls {TYPE_4__* mask; TYPE_3__* key; } ;
struct flow_match_eth_addrs {TYPE_2__* mask; TYPE_1__* key; } ;
struct flow_match_basic {TYPE_5__* key; } ;
struct flow_cls_offload {int dummy; } ;
struct TYPE_10__ {scalar_t__ n_proto; } ;
struct TYPE_9__ {int mpls_bos; int mpls_tc; int mpls_label; } ;
struct TYPE_8__ {int mpls_bos; int mpls_tc; int mpls_label; } ;
struct TYPE_7__ {int * src; int * dst; } ;
struct TYPE_6__ {int * src; int * dst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ,int *) ;
 struct flow_rule* FUNC_4 (struct flow_cls_offload*) ;
 int FUNC_5 (struct flow_rule*,struct flow_match_basic*) ;
 int FUNC_6 (struct flow_rule*,struct flow_match_eth_addrs*) ;
 scalar_t__ FUNC_7 (struct flow_rule*,int ) ;
 int FUNC_8 (struct flow_rule*,struct flow_match_mpls*) ;
 int FUNC_9 (struct nfp_flower_mac_mpls*,int ,int) ;

__attribute__((used)) static void
FUNC_10(struct nfp_flower_mac_mpls *VAR_9,
         struct nfp_flower_mac_mpls *VAR_10,
         struct flow_cls_offload *VAR_11)
{
 struct flow_rule *VAR_12 = FUNC_4(VAR_11);

 FUNC_9(VAR_9, 0, sizeof(struct nfp_flower_mac_mpls));
 FUNC_9(VAR_10, 0, sizeof(struct nfp_flower_mac_mpls));

 if (FUNC_7(VAR_12, VAR_3)) {
  struct flow_match_eth_addrs VAR_13;

  FUNC_6(VAR_12, &VAR_13);

  FUNC_3(VAR_9->mac_dst, &VAR_13.key->dst[0]);
  FUNC_3(VAR_9->mac_src, &VAR_13.key->src[0]);
  FUNC_3(VAR_10->mac_dst, &VAR_13.mask->dst[0]);
  FUNC_3(VAR_10->mac_src, &VAR_13.mask->src[0]);
 }

 if (FUNC_7(VAR_12, VAR_4)) {
  struct flow_match_mpls VAR_14;
  u32 VAR_15;

  FUNC_8(VAR_12, &VAR_14);
  VAR_15 = FUNC_0(VAR_6, VAR_14.key->mpls_label) |
    FUNC_0(VAR_8, VAR_14.key->mpls_tc) |
    FUNC_0(VAR_5, VAR_14.key->mpls_bos) |
    VAR_7;
  VAR_9->mpls_lse = FUNC_2(VAR_15);
  VAR_15 = FUNC_0(VAR_6, VAR_14.mask->mpls_label) |
    FUNC_0(VAR_8, VAR_14.mask->mpls_tc) |
    FUNC_0(VAR_5, VAR_14.mask->mpls_bos) |
    VAR_7;
  VAR_10->mpls_lse = FUNC_2(VAR_15);
 } else if (FUNC_7(VAR_12, VAR_2)) {




  struct flow_match_basic VAR_16;

  FUNC_5(VAR_12, &VAR_16);
  if (VAR_16.key->n_proto == FUNC_1(VAR_1) ||
      VAR_16.key->n_proto == FUNC_1(VAR_0)) {
   VAR_9->mpls_lse = FUNC_2(VAR_7);
   VAR_10->mpls_lse = FUNC_2(VAR_7);
  }
 }
}
