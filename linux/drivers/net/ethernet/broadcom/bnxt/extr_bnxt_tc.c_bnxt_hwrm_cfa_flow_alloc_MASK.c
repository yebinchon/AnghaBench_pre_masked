
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


typedef int u16 ;
struct hwrm_cfa_flow_alloc_output {int flow_id; int ext_flow_handle; int flow_handle; } ;
struct hwrm_cfa_flow_alloc_input {void* ethertype; void* action_flags; int * smac; int l2_rewrite_smac; int * dmac; int l2_rewrite_dmac; scalar_t__ l2_rewrite_vlan_tpid; int l2_rewrite_vlan_tci; void* dst_fid; void* flags; void* l4_dst_port_mask; void* l4_dst_port; void* l4_src_port_mask; void* l4_src_port; void* ip_src_mask_len; int * ip_src; void* ip_dst_mask_len; int * ip_dst; int outer_vlan_tci; int ip_proto; int tunnel_handle; int ref_flow_handle; void* src_fid; int member_0; } ;
struct TYPE_22__ {int code; int type; } ;
struct TYPE_20__ {void* dport; void* sport; } ;
struct TYPE_13__ {int ** s6_addr32; } ;
struct TYPE_18__ {TYPE_11__ saddr; TYPE_11__ daddr; } ;
struct TYPE_16__ {int s_addr; } ;
struct TYPE_15__ {int s_addr; } ;
struct TYPE_17__ {TYPE_3__ saddr; TYPE_2__ daddr; } ;
struct bnxt_tc_l3_key {TYPE_9__ icmp; TYPE_7__ ports; TYPE_5__ ipv6; TYPE_4__ ipv4; } ;
struct bnxt_tc_flow_node {int flow_id; int ext_flow_handle; int flow_handle; } ;
struct TYPE_12__ {int code; int type; } ;
struct TYPE_19__ {void* dport; void* sport; } ;
struct TYPE_21__ {TYPE_10__ icmp; TYPE_6__ ports; int ip_proto; } ;
struct TYPE_14__ {void* ether_type; scalar_t__ num_vlans; int inner_vlan_tci; int ** smac; int ** dmac; } ;
struct bnxt_tc_actions {int flags; int push_vlan_tci; scalar_t__ push_vlan_tpid; int dst_fid; } ;
struct bnxt_tc_flow {int flags; struct bnxt_tc_l3_key l4_mask; TYPE_8__ l4_key; TYPE_1__ l2_key; int src_fid; struct bnxt_tc_l3_key l3_key; struct bnxt_tc_l3_key l3_mask; struct bnxt_tc_actions actions; } ;
struct bnxt {int fw_cap; int hwrm_cmd_lock; } ;
typedef int req ;
typedef int __le32 ;
typedef int __le16 ;


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
 int VAR_24 ;
 int FUNC_0 (struct bnxt*,struct hwrm_cfa_flow_alloc_input*,int,int ) ;
 struct hwrm_cfa_flow_alloc_output* FUNC_1 (struct bnxt*,struct hwrm_cfa_flow_alloc_input*) ;
 int FUNC_2 (struct bnxt*,struct hwrm_cfa_flow_alloc_input*,int ,int,int) ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 void* FUNC_6 (TYPE_11__*) ;
 scalar_t__ FUNC_7 (struct bnxt_tc_l3_key*,int) ;
 int FUNC_8 (int *,int **,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct bnxt *VAR_25, struct bnxt_tc_flow *VAR_26,
        __le16 VAR_27,
        __le32 VAR_28,
        struct bnxt_tc_flow_node *VAR_29)
{
 struct bnxt_tc_actions *VAR_30 = &VAR_26->actions;
 struct bnxt_tc_l3_key *VAR_31 = &VAR_26->l3_mask;
 struct bnxt_tc_l3_key *VAR_32 = &VAR_26->l3_key;
 struct hwrm_cfa_flow_alloc_input VAR_33 = { 0 };
 struct hwrm_cfa_flow_alloc_output *VAR_34;
 u16 VAR_35 = 0, VAR_36 = 0;
 int VAR_37;

 FUNC_2(VAR_25, &VAR_33, VAR_23, -1, -1);

 VAR_33.src_fid = FUNC_3(VAR_26->src_fid);
 VAR_33.ref_flow_handle = VAR_27;

 if (VAR_30->flags & VAR_5 ||
     VAR_30->flags & VAR_6) {
  VAR_33.tunnel_handle = VAR_28;
  VAR_35 |= VAR_20;
  VAR_36 |= VAR_15;
 }

 VAR_33.ethertype = VAR_26->l2_key.ether_type;
 VAR_33.ip_proto = VAR_26->l4_key.ip_proto;

 if (VAR_26->flags & VAR_7) {
  FUNC_8(VAR_33.dmac, VAR_26->l2_key.dmac, VAR_21);
  FUNC_8(VAR_33.smac, VAR_26->l2_key.smac, VAR_21);
 }

 if (VAR_26->l2_key.num_vlans > 0) {
  VAR_35 |= VAR_19;




  VAR_33.outer_vlan_tci = VAR_26->l2_key.inner_vlan_tci;
 }


 if (FUNC_7(VAR_31, sizeof(*VAR_31)) &&
     FUNC_7(&VAR_26->l4_mask, sizeof(VAR_26->l4_mask))) {
  VAR_35 |= VAR_18;
 } else {
  VAR_35 |= VAR_26->l2_key.ether_type == FUNC_4(VAR_22) ?
    VAR_16 :
    VAR_17;

  if (VAR_26->flags & VAR_9) {
   VAR_33.ip_dst[0] = VAR_32->ipv4.daddr.s_addr;
   VAR_33.ip_dst_mask_len =
    FUNC_5(VAR_31->ipv4.daddr.s_addr);
   VAR_33.ip_src[0] = VAR_32->ipv4.saddr.s_addr;
   VAR_33.ip_src_mask_len =
    FUNC_5(VAR_31->ipv4.saddr.s_addr);
  } else if (VAR_26->flags & VAR_10) {
   FUNC_8(VAR_33.ip_dst, VAR_32->ipv6.daddr.s6_addr32,
          sizeof(VAR_33.ip_dst));
   VAR_33.ip_dst_mask_len =
     FUNC_6(&VAR_31->ipv6.daddr);
   FUNC_8(VAR_33.ip_src, VAR_32->ipv6.saddr.s6_addr32,
          sizeof(VAR_33.ip_src));
   VAR_33.ip_src_mask_len =
     FUNC_6(&VAR_31->ipv6.saddr);
  }
 }

 if (VAR_26->flags & VAR_11) {
  VAR_33.l4_src_port = VAR_26->l4_key.ports.sport;
  VAR_33.l4_src_port_mask = VAR_26->l4_mask.ports.sport;
  VAR_33.l4_dst_port = VAR_26->l4_key.ports.dport;
  VAR_33.l4_dst_port_mask = VAR_26->l4_mask.ports.dport;
 } else if (VAR_26->flags & VAR_8) {

  VAR_33.l4_src_port = FUNC_4(VAR_26->l4_key.icmp.type);
  VAR_33.l4_src_port_mask = FUNC_4(VAR_26->l4_mask.icmp.type);
  VAR_33.l4_dst_port = FUNC_4(VAR_26->l4_key.icmp.code);
  VAR_33.l4_dst_port_mask = FUNC_4(VAR_26->l4_mask.icmp.code);
 }
 VAR_33.flags = FUNC_3(VAR_35);

 if (VAR_30->flags & VAR_1) {
  VAR_36 |= VAR_12;
 } else {
  if (VAR_30->flags & VAR_2) {
   VAR_36 |= VAR_13;
   VAR_33.dst_fid = FUNC_3(VAR_30->dst_fid);
  }
  if (VAR_30->flags & VAR_4) {
   VAR_36 |=
       VAR_14;
   VAR_33.l2_rewrite_vlan_tpid = VAR_30->push_vlan_tpid;
   VAR_33.l2_rewrite_vlan_tci = VAR_30->push_vlan_tci;
   FUNC_8(&VAR_33.l2_rewrite_dmac, &VAR_33.dmac, VAR_21);
   FUNC_8(&VAR_33.l2_rewrite_smac, &VAR_33.smac, VAR_21);
  }
  if (VAR_30->flags & VAR_3) {
   VAR_36 |=
       VAR_14;

   VAR_33.l2_rewrite_vlan_tpid = 0;
   FUNC_8(&VAR_33.l2_rewrite_dmac, &VAR_33.dmac, VAR_21);
   FUNC_8(&VAR_33.l2_rewrite_smac, &VAR_33.smac, VAR_21);
  }
 }
 VAR_33.action_flags = FUNC_3(VAR_36);

 FUNC_9(&VAR_25->hwrm_cmd_lock);
 VAR_37 = FUNC_0(VAR_25, &VAR_33, sizeof(VAR_33), VAR_24);
 if (!VAR_37) {
  VAR_34 = FUNC_1(VAR_25, &VAR_33);
  VAR_29->flow_handle = VAR_34->flow_handle;
  if (VAR_25->fw_cap & VAR_0) {
   VAR_29->ext_flow_handle = VAR_34->ext_flow_handle;
   VAR_29->flow_id = VAR_34->flow_id;
  }
 }
 FUNC_10(&VAR_25->hwrm_cmd_lock);
 return VAR_37;
}
