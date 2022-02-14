
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


typedef int u8 ;
struct nfp_flower_tp_ports {int dummy; } ;
struct TYPE_16__ {int tos; int ttl; } ;
struct TYPE_13__ {int port_src; TYPE_3__ ip_ext; int ipv4_dst; int ipv4_src; } ;
struct TYPE_22__ {int tos; int ttl; } ;
struct TYPE_19__ {int * u6_addr32; } ;
struct TYPE_20__ {TYPE_6__ in6_u; } ;
struct TYPE_17__ {int * u6_addr32; } ;
struct TYPE_18__ {TYPE_4__ in6_u; } ;
struct TYPE_12__ {int ipv6_flow_label_exthdr; TYPE_9__ ip_ext; TYPE_7__ ipv6_dst; TYPE_5__ ipv6_src; } ;
struct TYPE_15__ {int * mac_src; int * mac_dst; } ;
struct nfp_flower_merge_check {TYPE_11__ l4; TYPE_10__ ipv6; TYPE_11__ ipv4; TYPE_2__ l2; void* tci; } ;
struct nfp_flower_ipv4 {int dummy; } ;
struct nfp_fl_set_tport {int* tp_port_mask; } ;
struct nfp_fl_set_ipv6_tc_hl_fl {int ipv6_label_mask; int ipv6_tc_mask; int ipv6_hop_limit_mask; } ;
struct nfp_fl_set_ipv6_addr {TYPE_8__* ipv6; } ;
struct nfp_fl_set_ip4_ttl_tos {int ipv4_tos_mask; int ipv4_ttl_mask; } ;
struct nfp_fl_set_ip4_addrs {int ipv4_dst_mask; int ipv4_src_mask; } ;
struct nfp_fl_set_eth {int * eth_addr_mask; } ;
struct nfp_fl_push_vlan {int vlan_tci; } ;
struct TYPE_14__ {unsigned int act_len; } ;
struct nfp_fl_payload {int * action_data; TYPE_1__ meta; } ;
struct nfp_fl_act_head {int jump_id; unsigned int len_lw; } ;
struct TYPE_21__ {int mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_11__*,int,int) ;

__attribute__((used)) static int
FUNC_3(struct nfp_fl_payload *VAR_3,
         struct nfp_flower_merge_check *VAR_4,
         u8 *VAR_5, int *VAR_6)
{
 struct nfp_fl_set_ipv6_tc_hl_fl *VAR_7;
 struct nfp_fl_set_ip4_ttl_tos *VAR_8;
 struct nfp_fl_set_ip4_addrs *VAR_9;
 struct nfp_fl_set_ipv6_addr *VAR_10;
 struct nfp_fl_push_vlan *VAR_11;
 struct nfp_fl_set_tport *VAR_12;
 struct nfp_fl_set_eth *VAR_13;
 struct nfp_fl_act_head *VAR_14;
 unsigned int VAR_15 = 0;
 u8 VAR_16 = 0;
 u8 *VAR_17;
 int VAR_18;

 while (VAR_15 < VAR_3->meta.act_len) {
  VAR_14 = (struct nfp_fl_act_head *)&VAR_3->action_data[VAR_15];
  VAR_16 = VAR_14->jump_id;

  switch (VAR_16) {
  case 142:
   if (VAR_6)
    (*VAR_6)++;
   break;
  case 137:
   VAR_11 = (struct nfp_fl_push_vlan *)VAR_14;
   if (VAR_11->vlan_tci)
    VAR_4->tci = FUNC_0(0xffff);
   break;
  case 141:
   VAR_4->tci = FUNC_0(0);
   break;
  case 133:

   FUNC_1(&VAR_4->l2.mac_dst[0]);
   FUNC_1(&VAR_4->l2.mac_src[0]);
   FUNC_2(&VAR_4->l4, 0xff,
          sizeof(struct nfp_flower_tp_ports));
   FUNC_2(&VAR_4->ipv4, 0xff,
          sizeof(struct nfp_flower_ipv4));
   break;
  case 136:
   VAR_13 = (struct nfp_fl_set_eth *)VAR_14;
   for (VAR_18 = 0; VAR_18 < VAR_1; VAR_18++)
    VAR_4->l2.mac_dst[VAR_18] |= VAR_13->eth_addr_mask[VAR_18];
   for (VAR_18 = 0; VAR_18 < VAR_1; VAR_18++)
    VAR_4->l2.mac_src[VAR_18] |=
     VAR_13->eth_addr_mask[VAR_1 + VAR_18];
   break;
  case 135:
   VAR_9 = (struct nfp_fl_set_ip4_addrs *)VAR_14;
   VAR_4->ipv4.ipv4_src |= VAR_9->ipv4_src_mask;
   VAR_4->ipv4.ipv4_dst |= VAR_9->ipv4_dst_mask;
   break;
  case 134:
   VAR_8 = (struct nfp_fl_set_ip4_ttl_tos *)VAR_14;
   VAR_4->ipv4.ip_ext.ttl |= VAR_8->ipv4_ttl_mask;
   VAR_4->ipv4.ip_ext.tos |= VAR_8->ipv4_tos_mask;
   break;
  case 131:
   VAR_10 = (struct nfp_fl_set_ipv6_addr *)VAR_14;
   for (VAR_18 = 0; VAR_18 < 4; VAR_18++)
    VAR_4->ipv6.ipv6_src.in6_u.u6_addr32[VAR_18] |=
     VAR_10->ipv6[VAR_18].mask;
   break;
  case 132:
   VAR_10 = (struct nfp_fl_set_ipv6_addr *)VAR_14;
   for (VAR_18 = 0; VAR_18 < 4; VAR_18++)
    VAR_4->ipv6.ipv6_dst.in6_u.u6_addr32[VAR_18] |=
     VAR_10->ipv6[VAR_18].mask;
   break;
  case 130:
   VAR_7 = (struct nfp_fl_set_ipv6_tc_hl_fl *)VAR_14;
   VAR_4->ipv6.ip_ext.ttl |=
    VAR_7->ipv6_hop_limit_mask;
   VAR_4->ipv6.ip_ext.tos |= VAR_7->ipv6_tc_mask;
   VAR_4->ipv6.ipv6_flow_label_exthdr |=
    VAR_7->ipv6_label_mask;
   break;
  case 128:
  case 129:
   VAR_12 = (struct nfp_fl_set_tport *)VAR_14;
   VAR_17 = (u8 *)&VAR_4->l4.port_src;
   for (VAR_18 = 0; VAR_18 < 4; VAR_18++)
    VAR_17[VAR_18] |= VAR_12->tp_port_mask[VAR_18];
   break;
  case 139:
  case 140:
  case 138:
   break;
  default:
   return -VAR_0;
  }

  VAR_15 += VAR_14->len_lw << VAR_2;
 }

 if (VAR_5)
  *VAR_5 = VAR_16;

 return 0;
}
