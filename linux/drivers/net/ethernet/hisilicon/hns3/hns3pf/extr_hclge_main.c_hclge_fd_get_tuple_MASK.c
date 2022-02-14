
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


typedef int u32 ;
struct TYPE_21__ {int ether_proto; int ip_proto; int dst_mac; void* vlan_tag1; int src_mac; void** dst_ip; void** src_ip; void* dst_port; void* src_port; int ip_tos; } ;
struct TYPE_18__ {int dst_mac; void* vlan_tag1; int ip_proto; void* ether_proto; int src_mac; void** dst_ip; void** src_ip; void* dst_port; void* src_port; int ip_tos; } ;
struct hclge_fd_rule {TYPE_14__ tuples_mask; TYPE_11__ tuples; } ;
struct hclge_dev {int dummy; } ;
struct TYPE_17__ {int h_dest; int vlan_tci; } ;
struct TYPE_32__ {int h_dest; int vlan_tci; } ;
struct TYPE_31__ {int h_proto; int h_dest; int h_source; } ;
struct TYPE_29__ {int l4_proto; int ip6dst; int ip6src; } ;
struct TYPE_27__ {int pdst; int psrc; int ip6dst; int ip6src; } ;
struct TYPE_25__ {int proto; int tos; int ip4dst; int ip4src; } ;
struct TYPE_22__ {int tos; int pdst; int psrc; int ip4dst; int ip4src; } ;
struct TYPE_23__ {TYPE_8__ ether_spec; TYPE_6__ usr_ip6_spec; TYPE_4__ tcp_ip6_spec; TYPE_2__ usr_ip4_spec; TYPE_15__ tcp_ip4_spec; } ;
struct TYPE_30__ {int h_proto; int h_dest; int h_source; } ;
struct TYPE_28__ {int l4_proto; int ip6dst; int ip6src; } ;
struct TYPE_26__ {int pdst; int psrc; int ip6dst; int ip6src; } ;
struct TYPE_24__ {int proto; int tos; int ip4dst; int ip4src; } ;
struct TYPE_19__ {int tos; int pdst; int psrc; int ip4dst; int ip4src; } ;
struct TYPE_20__ {TYPE_7__ ether_spec; TYPE_5__ usr_ip6_spec; TYPE_3__ tcp_ip6_spec; TYPE_1__ usr_ip4_spec; TYPE_12__ tcp_ip4_spec; } ;
struct ethtool_rx_flow_spec {int flow_type; TYPE_10__ m_ext; TYPE_9__ h_ext; TYPE_16__ m_u; TYPE_13__ h_u; } ;


 int VAR_0 ;

 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (void**,int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct hclge_dev *VAR_10,
         struct ethtool_rx_flow_spec *VAR_11,
         struct hclge_fd_rule *VAR_12)
{
 u32 VAR_13 = VAR_11->flow_type & ~(VAR_3 | VAR_4);

 switch (VAR_13) {
 case 133:
 case 131:
 case 129:
  VAR_12->tuples.src_ip[VAR_8] =
    FUNC_1(VAR_11->h_u.tcp_ip4_spec.ip4src);
  VAR_12->tuples_mask.src_ip[VAR_8] =
    FUNC_1(VAR_11->m_u.tcp_ip4_spec.ip4src);

  VAR_12->tuples.dst_ip[VAR_8] =
    FUNC_1(VAR_11->h_u.tcp_ip4_spec.ip4dst);
  VAR_12->tuples_mask.dst_ip[VAR_8] =
    FUNC_1(VAR_11->m_u.tcp_ip4_spec.ip4dst);

  VAR_12->tuples.src_port = FUNC_0(VAR_11->h_u.tcp_ip4_spec.psrc);
  VAR_12->tuples_mask.src_port =
    FUNC_0(VAR_11->m_u.tcp_ip4_spec.psrc);

  VAR_12->tuples.dst_port = FUNC_0(VAR_11->h_u.tcp_ip4_spec.pdst);
  VAR_12->tuples_mask.dst_port =
    FUNC_0(VAR_11->m_u.tcp_ip4_spec.pdst);

  VAR_12->tuples.ip_tos = VAR_11->h_u.tcp_ip4_spec.tos;
  VAR_12->tuples_mask.ip_tos = VAR_11->m_u.tcp_ip4_spec.tos;

  VAR_12->tuples.ether_proto = VAR_1;
  VAR_12->tuples_mask.ether_proto = 0xFFFF;

  break;
 case 134:
  VAR_12->tuples.src_ip[VAR_8] =
    FUNC_1(VAR_11->h_u.usr_ip4_spec.ip4src);
  VAR_12->tuples_mask.src_ip[VAR_8] =
    FUNC_1(VAR_11->m_u.usr_ip4_spec.ip4src);

  VAR_12->tuples.dst_ip[VAR_8] =
    FUNC_1(VAR_11->h_u.usr_ip4_spec.ip4dst);
  VAR_12->tuples_mask.dst_ip[VAR_8] =
    FUNC_1(VAR_11->m_u.usr_ip4_spec.ip4dst);

  VAR_12->tuples.ip_tos = VAR_11->h_u.usr_ip4_spec.tos;
  VAR_12->tuples_mask.ip_tos = VAR_11->m_u.usr_ip4_spec.tos;

  VAR_12->tuples.ip_proto = VAR_11->h_u.usr_ip4_spec.proto;
  VAR_12->tuples_mask.ip_proto = VAR_11->m_u.usr_ip4_spec.proto;

  VAR_12->tuples.ether_proto = VAR_1;
  VAR_12->tuples_mask.ether_proto = 0xFFFF;

  break;
 case 132:
 case 130:
 case 128:
  FUNC_2(VAR_12->tuples.src_ip,
      VAR_11->h_u.tcp_ip6_spec.ip6src, VAR_9);
  FUNC_2(VAR_12->tuples_mask.src_ip,
      VAR_11->m_u.tcp_ip6_spec.ip6src, VAR_9);

  FUNC_2(VAR_12->tuples.dst_ip,
      VAR_11->h_u.tcp_ip6_spec.ip6dst, VAR_9);
  FUNC_2(VAR_12->tuples_mask.dst_ip,
      VAR_11->m_u.tcp_ip6_spec.ip6dst, VAR_9);

  VAR_12->tuples.src_port = FUNC_0(VAR_11->h_u.tcp_ip6_spec.psrc);
  VAR_12->tuples_mask.src_port =
    FUNC_0(VAR_11->m_u.tcp_ip6_spec.psrc);

  VAR_12->tuples.dst_port = FUNC_0(VAR_11->h_u.tcp_ip6_spec.pdst);
  VAR_12->tuples_mask.dst_port =
    FUNC_0(VAR_11->m_u.tcp_ip6_spec.pdst);

  VAR_12->tuples.ether_proto = VAR_2;
  VAR_12->tuples_mask.ether_proto = 0xFFFF;

  break;
 case 135:
  FUNC_2(VAR_12->tuples.src_ip,
      VAR_11->h_u.usr_ip6_spec.ip6src, VAR_9);
  FUNC_2(VAR_12->tuples_mask.src_ip,
      VAR_11->m_u.usr_ip6_spec.ip6src, VAR_9);

  FUNC_2(VAR_12->tuples.dst_ip,
      VAR_11->h_u.usr_ip6_spec.ip6dst, VAR_9);
  FUNC_2(VAR_12->tuples_mask.dst_ip,
      VAR_11->m_u.usr_ip6_spec.ip6dst, VAR_9);

  VAR_12->tuples.ip_proto = VAR_11->h_u.usr_ip6_spec.l4_proto;
  VAR_12->tuples_mask.ip_proto = VAR_11->m_u.usr_ip6_spec.l4_proto;

  VAR_12->tuples.ether_proto = VAR_2;
  VAR_12->tuples_mask.ether_proto = 0xFFFF;

  break;
 case 136:
  FUNC_3(VAR_12->tuples.src_mac,
    VAR_11->h_u.ether_spec.h_source);
  FUNC_3(VAR_12->tuples_mask.src_mac,
    VAR_11->m_u.ether_spec.h_source);

  FUNC_3(VAR_12->tuples.dst_mac,
    VAR_11->h_u.ether_spec.h_dest);
  FUNC_3(VAR_12->tuples_mask.dst_mac,
    VAR_11->m_u.ether_spec.h_dest);

  VAR_12->tuples.ether_proto =
    FUNC_0(VAR_11->h_u.ether_spec.h_proto);
  VAR_12->tuples_mask.ether_proto =
    FUNC_0(VAR_11->m_u.ether_spec.h_proto);

  break;
 default:
  return -VAR_0;
 }

 switch (VAR_13) {
 case 133:
 case 132:
  VAR_12->tuples.ip_proto = VAR_5;
  VAR_12->tuples_mask.ip_proto = 0xFF;
  break;
 case 131:
 case 130:
  VAR_12->tuples.ip_proto = VAR_6;
  VAR_12->tuples_mask.ip_proto = 0xFF;
  break;
 case 129:
 case 128:
  VAR_12->tuples.ip_proto = VAR_7;
  VAR_12->tuples_mask.ip_proto = 0xFF;
  break;
 default:
  break;
 }

 if ((VAR_11->flow_type & VAR_3)) {
  VAR_12->tuples.vlan_tag1 = FUNC_0(VAR_11->h_ext.vlan_tci);
  VAR_12->tuples_mask.vlan_tag1 = FUNC_0(VAR_11->m_ext.vlan_tci);
 }

 if (VAR_11->flow_type & VAR_4) {
  FUNC_3(VAR_12->tuples.dst_mac, VAR_11->h_ext.h_dest);
  FUNC_3(VAR_12->tuples_mask.dst_mac, VAR_11->m_ext.h_dest);
 }

 return 0;
}
