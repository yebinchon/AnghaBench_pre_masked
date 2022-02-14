
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
struct TYPE_7__ {scalar_t__* rule_num; int proto_support; } ;
struct hclge_dev {TYPE_2__ fd_cfg; TYPE_4__* pdev; } ;
struct ethtool_usrip6_spec {int l4_4_bytes; int tclass; int l4_proto; int * ip6dst; int * ip6src; } ;
struct ethtool_usrip4_spec {int ip_ver; int l4_4_bytes; int proto; int tos; int ip4dst; int ip4src; } ;
struct ethtool_tcpip6_spec {int tclass; int pdst; int psrc; int * ip6dst; int * ip6src; } ;
struct ethtool_tcpip4_spec {int tos; int pdst; int psrc; int ip4dst; int ip4src; } ;
struct TYPE_8__ {scalar_t__* data; int h_dest; int vlan_tci; scalar_t__ vlan_etype; } ;
struct TYPE_6__ {scalar_t__ vlan_tci; } ;
struct ethhdr {int h_proto; int h_dest; int h_source; } ;
struct TYPE_10__ {struct ethhdr ether_spec; struct ethtool_usrip6_spec usr_ip6_spec; struct ethtool_tcpip6_spec tcp_ip6_spec; struct ethtool_usrip4_spec usr_ip4_spec; struct ethtool_tcpip4_spec tcp_ip4_spec; } ;
struct ethtool_rx_flow_spec {scalar_t__ location; int flow_type; TYPE_3__ h_ext; TYPE_1__ m_ext; TYPE_5__ h_u; } ;
struct TYPE_9__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
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
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct hclge_dev *VAR_17,
          struct ethtool_rx_flow_spec *VAR_18, u32 *VAR_19)
{
 struct ethtool_tcpip4_spec *VAR_20;
 struct ethtool_usrip4_spec *VAR_21;
 struct ethtool_tcpip6_spec *VAR_22;
 struct ethtool_usrip6_spec *VAR_23;
 struct ethhdr *VAR_24;

 if (VAR_18->location >= VAR_17->fd_cfg.rule_num[VAR_5])
  return -VAR_0;

 if (!(VAR_18->flow_type & VAR_17->fd_cfg.proto_support))
  return -VAR_1;

 if ((VAR_18->flow_type & VAR_3) &&
     (VAR_18->h_ext.data[0] != 0 || VAR_18->h_ext.data[1] != 0)) {
  FUNC_2(&VAR_17->pdev->dev, "user-def bytes are not supported\n");
  return -VAR_1;
 }

 switch (VAR_18->flow_type & ~(VAR_3 | VAR_4)) {
 case 133:
 case 131:
 case 129:
  VAR_20 = &VAR_18->h_u.tcp_ip4_spec;
  *VAR_19 |= FUNC_0(VAR_13) | FUNC_0(VAR_7);

  if (!VAR_20->ip4src)
   *VAR_19 |= FUNC_0(VAR_12);

  if (!VAR_20->ip4dst)
   *VAR_19 |= FUNC_0(VAR_6);

  if (!VAR_20->psrc)
   *VAR_19 |= FUNC_0(VAR_14);

  if (!VAR_20->pdst)
   *VAR_19 |= FUNC_0(VAR_8);

  if (!VAR_20->tos)
   *VAR_19 |= FUNC_0(VAR_11);

  break;
 case 134:
  VAR_21 = &VAR_18->h_u.usr_ip4_spec;
  *VAR_19 |= FUNC_0(VAR_13) | FUNC_0(VAR_7) |
   FUNC_0(VAR_14) | FUNC_0(VAR_8);

  if (!VAR_21->ip4src)
   *VAR_19 |= FUNC_0(VAR_12);

  if (!VAR_21->ip4dst)
   *VAR_19 |= FUNC_0(VAR_6);

  if (!VAR_21->tos)
   *VAR_19 |= FUNC_0(VAR_11);

  if (!VAR_21->proto)
   *VAR_19 |= FUNC_0(VAR_10);

  if (VAR_21->l4_4_bytes)
   return -VAR_1;

  if (VAR_21->ip_ver != VAR_2)
   return -VAR_1;

  break;
 case 132:
 case 130:
 case 128:
  VAR_22 = &VAR_18->h_u.tcp_ip6_spec;
  *VAR_19 |= FUNC_0(VAR_13) | FUNC_0(VAR_7) |
   FUNC_0(VAR_11);


  if (!VAR_22->ip6src[0] && !VAR_22->ip6src[1] &&
      !VAR_22->ip6src[2] && !VAR_22->ip6src[3])
   *VAR_19 |= FUNC_0(VAR_12);

  if (!VAR_22->ip6dst[0] && !VAR_22->ip6dst[1] &&
      !VAR_22->ip6dst[2] && !VAR_22->ip6dst[3])
   *VAR_19 |= FUNC_0(VAR_6);

  if (!VAR_22->psrc)
   *VAR_19 |= FUNC_0(VAR_14);

  if (!VAR_22->pdst)
   *VAR_19 |= FUNC_0(VAR_8);

  if (VAR_22->tclass)
   return -VAR_1;

  break;
 case 135:
  VAR_23 = &VAR_18->h_u.usr_ip6_spec;
  *VAR_19 |= FUNC_0(VAR_13) | FUNC_0(VAR_7) |
   FUNC_0(VAR_11) | FUNC_0(VAR_14) |
   FUNC_0(VAR_8);


  if (!VAR_23->ip6src[0] && !VAR_23->ip6src[1] &&
      !VAR_23->ip6src[2] && !VAR_23->ip6src[3])
   *VAR_19 |= FUNC_0(VAR_12);

  if (!VAR_23->ip6dst[0] && !VAR_23->ip6dst[1] &&
      !VAR_23->ip6dst[2] && !VAR_23->ip6dst[3])
   *VAR_19 |= FUNC_0(VAR_6);

  if (!VAR_23->l4_proto)
   *VAR_19 |= FUNC_0(VAR_10);

  if (VAR_23->tclass)
   return -VAR_1;

  if (VAR_23->l4_4_bytes)
   return -VAR_1;

  break;
 case 136:
  VAR_24 = &VAR_18->h_u.ether_spec;
  *VAR_19 |= FUNC_0(VAR_12) | FUNC_0(VAR_6) |
   FUNC_0(VAR_14) | FUNC_0(VAR_8) |
   FUNC_0(VAR_11) | FUNC_0(VAR_10);

  if (FUNC_3(VAR_24->h_source))
   *VAR_19 |= FUNC_0(VAR_13);

  if (FUNC_3(VAR_24->h_dest))
   *VAR_19 |= FUNC_0(VAR_7);

  if (!VAR_24->h_proto)
   *VAR_19 |= FUNC_0(VAR_9);

  break;
 default:
  return -VAR_1;
 }

 if ((VAR_18->flow_type & VAR_3)) {
  if (VAR_18->h_ext.vlan_etype)
   return -VAR_1;
  if (!VAR_18->h_ext.vlan_tci)
   *VAR_19 |= FUNC_0(VAR_15);

  if (VAR_18->m_ext.vlan_tci) {
   if (FUNC_1(VAR_18->h_ext.vlan_tci) >= VAR_16)
    return -VAR_0;
  }
 } else {
  *VAR_19 |= FUNC_0(VAR_15);
 }

 if (VAR_18->flow_type & VAR_4) {
  if (!(VAR_17->fd_cfg.proto_support & 136))
   return -VAR_1;

  if (FUNC_3(VAR_18->h_ext.h_dest))
   *VAR_19 |= FUNC_0(VAR_7);
  else
   *VAR_19 &= ~(FUNC_0(VAR_7));
 }

 return 0;
}
