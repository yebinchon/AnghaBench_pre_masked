
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_usrip4_spec {int ip4dst; int ip4src; int proto; int tos; int l4_4_bytes; } ;
struct ethtool_tcpip4_spec {int pdst; int psrc; int ip4dst; int ip4src; int tos; } ;
struct TYPE_11__ {int vlan_tci; } ;
struct TYPE_10__ {int vlan_tci; scalar_t__ vlan_etype; int h_dest; } ;
struct ethhdr {int h_proto; int h_dest; int h_source; } ;
struct TYPE_9__ {struct ethhdr ether_spec; struct ethtool_usrip4_spec usr_ip4_spec; struct ethtool_tcpip4_spec tcp_ip4_spec; } ;
struct TYPE_7__ {int ip_ver; } ;
struct TYPE_8__ {TYPE_1__ usr_ip4_spec; } ;
struct TYPE_12__ {scalar_t__ location; int flow_type; TYPE_5__ h_ext; TYPE_4__ m_ext; TYPE_3__ m_u; TYPE_2__ h_u; } ;
struct ethtool_rxnfc {TYPE_6__ fs; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 scalar_t__ VAR_4 ;


 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_7,
     struct ethtool_rxnfc *VAR_8)
{
 struct ethtool_usrip4_spec *VAR_9;
 struct ethtool_tcpip4_spec *VAR_10;
 struct ethhdr *VAR_11;

 if (VAR_8->fs.location >= VAR_4)
  return -VAR_0;

 if (VAR_8->fs.flow_type & VAR_3) {

  if (!FUNC_3(VAR_8->fs.m_ext.h_dest))
   return -VAR_0;
 }

 switch (VAR_8->fs.flow_type & ~(VAR_2 | VAR_3)) {
 case 129:
 case 128:
  if (VAR_8->fs.m_u.tcp_ip4_spec.tos)
   return -VAR_0;
  VAR_10 = &VAR_8->fs.m_u.tcp_ip4_spec;

  if (!FUNC_0(VAR_10->ip4src) ||
      !FUNC_0(VAR_10->ip4dst) ||
      !FUNC_0(VAR_10->psrc) ||
      !FUNC_0(VAR_10->pdst))
   return -VAR_0;
  break;
 case 130:
  VAR_9 = &VAR_8->fs.m_u.usr_ip4_spec;
  if (VAR_9->l4_4_bytes || VAR_9->tos || VAR_9->proto ||
      VAR_8->fs.h_u.usr_ip4_spec.ip_ver != VAR_1 ||
      (!VAR_9->ip4src && !VAR_9->ip4dst) ||
      !FUNC_0(VAR_9->ip4src) ||
      !FUNC_0(VAR_9->ip4dst))
   return -VAR_0;
  break;
 case 131:
  VAR_11 = &VAR_8->fs.m_u.ether_spec;

  if (!FUNC_4(VAR_11->h_source))
   return -VAR_0;


  if (!FUNC_3(VAR_11->h_dest))
   return -VAR_0;

  if (!FUNC_0(VAR_11->h_proto))
   return -VAR_0;
  break;
 default:
  return -VAR_0;
 }

 if ((VAR_8->fs.flow_type & VAR_2)) {
  if (VAR_8->fs.m_ext.vlan_etype ||
      !((VAR_8->fs.m_ext.vlan_tci & FUNC_2(VAR_6)) ==
        0 ||
        (VAR_8->fs.m_ext.vlan_tci & FUNC_2(VAR_6)) ==
        FUNC_2(VAR_6)))
   return -VAR_0;

  if (VAR_8->fs.m_ext.vlan_tci) {
   if (FUNC_1(VAR_8->fs.h_ext.vlan_tci) >= VAR_5)
    return -VAR_0;

  }
 }

 return 0;
}
