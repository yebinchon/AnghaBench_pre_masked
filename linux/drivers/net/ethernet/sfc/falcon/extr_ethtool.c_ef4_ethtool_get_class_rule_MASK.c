
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ethtool_usrip6_spec {scalar_t__ l4_proto; int ip6src; int ip6dst; } ;
struct ethtool_usrip4_spec {scalar_t__ proto; void* ip4src; void* ip4dst; int ip_ver; } ;
struct ethtool_tcpip6_spec {void* psrc; void* pdst; int ip6src; int ip6dst; } ;
struct ethtool_tcpip4_spec {void* psrc; void* pdst; void* ip4src; void* ip4dst; } ;
struct TYPE_6__ {scalar_t__ vlan_tci; } ;
struct TYPE_5__ {int vlan_tci; } ;
struct ethhdr {scalar_t__ h_proto; int h_source; int h_dest; } ;
struct TYPE_8__ {struct ethhdr ether_spec; struct ethtool_usrip6_spec usr_ip6_spec; struct ethtool_tcpip6_spec tcp_ip6_spec; struct ethtool_usrip4_spec usr_ip4_spec; struct ethtool_tcpip4_spec tcp_ip4_spec; } ;
struct TYPE_7__ {struct ethhdr ether_spec; struct ethtool_usrip6_spec usr_ip6_spec; struct ethtool_tcpip6_spec tcp_ip6_spec; struct ethtool_usrip4_spec usr_ip4_spec; struct ethtool_tcpip4_spec tcp_ip4_spec; } ;
struct ethtool_rx_flow_spec {scalar_t__ ring_cookie; TYPE_2__ m_ext; TYPE_1__ h_ext; int flow_type; int location; TYPE_4__ m_u; TYPE_3__ h_u; } ;
struct ef4_nic {int dummy; } ;
struct ef4_filter_spec {scalar_t__ dmaq_id; int match_flags; scalar_t__ ether_type; scalar_t__ ip_proto; int outer_vid; void** rem_host; void** loc_host; int rem_mac; int loc_mac; void* rem_port; void* loc_port; } ;


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
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 void* VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 void* VAR_24 ;
 void* VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ef4_nic*,int ,int ,struct ef4_filter_spec*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int VAR_31 ;
 int FUNC_6 (int ,void**,int) ;

__attribute__((used)) static int FUNC_7(struct ef4_nic *VAR_32,
          struct ethtool_rx_flow_spec *VAR_33)
{
 struct ethtool_tcpip4_spec *VAR_34 = &VAR_33->h_u.tcp_ip4_spec;
 struct ethtool_tcpip4_spec *VAR_35 = &VAR_33->m_u.tcp_ip4_spec;
 struct ethtool_usrip4_spec *VAR_36 = &VAR_33->h_u.usr_ip4_spec;
 struct ethtool_usrip4_spec *VAR_37 = &VAR_33->m_u.usr_ip4_spec;
 struct ethtool_tcpip6_spec *VAR_38 = &VAR_33->h_u.tcp_ip6_spec;
 struct ethtool_tcpip6_spec *VAR_39 = &VAR_33->m_u.tcp_ip6_spec;
 struct ethtool_usrip6_spec *VAR_40 = &VAR_33->h_u.usr_ip6_spec;
 struct ethtool_usrip6_spec *VAR_41 = &VAR_33->m_u.usr_ip6_spec;
 struct ethhdr *VAR_42 = &VAR_33->h_u.ether_spec;
 struct ethhdr *VAR_43 = &VAR_33->m_u.ether_spec;
 struct ef4_filter_spec VAR_44;
 int VAR_45;

 VAR_45 = FUNC_1(VAR_32, VAR_10,
     VAR_33->location, &VAR_44);
 if (VAR_45)
  return VAR_45;

 if (VAR_44.dmaq_id == VAR_11)
  VAR_33->ring_cookie = VAR_26;
 else
  VAR_33->ring_cookie = VAR_44.dmaq_id;

 if ((VAR_44.match_flags & VAR_0) &&
     VAR_44.ether_type == FUNC_4(VAR_15) &&
     (VAR_44.match_flags & VAR_1) &&
     (VAR_44.ip_proto == VAR_20 || VAR_44.ip_proto == VAR_21) &&
     !(VAR_44.match_flags &
       ~(VAR_0 | VAR_6 |
  VAR_2 | VAR_7 |
  VAR_1 |
  VAR_5 | VAR_9))) {
  VAR_33->flow_type = ((VAR_44.ip_proto == VAR_20) ?
       VAR_27 : VAR_29);
  if (VAR_44.match_flags & VAR_2) {
   VAR_34->ip4dst = VAR_44.loc_host[0];
   VAR_35->ip4dst = VAR_19;
  }
  if (VAR_44.match_flags & VAR_7) {
   VAR_34->ip4src = VAR_44.rem_host[0];
   VAR_35->ip4src = VAR_19;
  }
  if (VAR_44.match_flags & VAR_5) {
   VAR_34->pdst = VAR_44.loc_port;
   VAR_35->pdst = VAR_25;
  }
  if (VAR_44.match_flags & VAR_9) {
   VAR_34->psrc = VAR_44.rem_port;
   VAR_35->psrc = VAR_25;
  }
 } else if ((VAR_44.match_flags & VAR_0) &&
     VAR_44.ether_type == FUNC_4(VAR_16) &&
     (VAR_44.match_flags & VAR_1) &&
     (VAR_44.ip_proto == VAR_20 || VAR_44.ip_proto == VAR_21) &&
     !(VAR_44.match_flags &
       ~(VAR_0 | VAR_6 |
  VAR_2 | VAR_7 |
  VAR_1 |
  VAR_5 | VAR_9))) {
  VAR_33->flow_type = ((VAR_44.ip_proto == VAR_20) ?
       VAR_28 : VAR_30);
  if (VAR_44.match_flags & VAR_2) {
   FUNC_6(VAR_38->ip6dst, VAR_44.loc_host,
          sizeof(VAR_38->ip6dst));
   FUNC_5(VAR_39->ip6dst);
  }
  if (VAR_44.match_flags & VAR_7) {
   FUNC_6(VAR_38->ip6src, VAR_44.rem_host,
          sizeof(VAR_38->ip6src));
   FUNC_5(VAR_39->ip6src);
  }
  if (VAR_44.match_flags & VAR_5) {
   VAR_38->pdst = VAR_44.loc_port;
   VAR_39->pdst = VAR_25;
  }
  if (VAR_44.match_flags & VAR_9) {
   VAR_38->psrc = VAR_44.rem_port;
   VAR_39->psrc = VAR_25;
  }
 } else if (!(VAR_44.match_flags &
       ~(VAR_3 | VAR_4 |
         VAR_8 | VAR_0 |
         VAR_6))) {
  VAR_33->flow_type = VAR_13;
  if (VAR_44.match_flags &
      (VAR_3 | VAR_4)) {
   FUNC_3(VAR_42->h_dest, VAR_44.loc_mac);
   if (VAR_44.match_flags & VAR_3)
    FUNC_2(VAR_43->h_dest);
   else
    FUNC_3(VAR_43->h_dest,
      VAR_31);
  }
  if (VAR_44.match_flags & VAR_8) {
   FUNC_3(VAR_42->h_source, VAR_44.rem_mac);
   FUNC_2(VAR_43->h_source);
  }
  if (VAR_44.match_flags & VAR_0) {
   VAR_42->h_proto = VAR_44.ether_type;
   VAR_43->h_proto = VAR_14;
  }
 } else if (VAR_44.match_flags & VAR_0 &&
     VAR_44.ether_type == FUNC_4(VAR_15) &&
     !(VAR_44.match_flags &
       ~(VAR_0 | VAR_6 |
         VAR_2 | VAR_7 |
         VAR_1))) {
  VAR_33->flow_type = VAR_22;
  VAR_36->ip_ver = VAR_17;
  if (VAR_44.match_flags & VAR_1) {
   VAR_37->proto = VAR_24;
   VAR_36->proto = VAR_44.ip_proto;
  }
  if (VAR_44.match_flags & VAR_2) {
   VAR_36->ip4dst = VAR_44.loc_host[0];
   VAR_37->ip4dst = VAR_19;
  }
  if (VAR_44.match_flags & VAR_7) {
   VAR_36->ip4src = VAR_44.rem_host[0];
   VAR_37->ip4src = VAR_19;
  }
 } else if (VAR_44.match_flags & VAR_0 &&
     VAR_44.ether_type == FUNC_4(VAR_16) &&
     !(VAR_44.match_flags &
       ~(VAR_0 | VAR_6 |
         VAR_2 | VAR_7 |
         VAR_1))) {
  VAR_33->flow_type = VAR_23;
  if (VAR_44.match_flags & VAR_1) {
   VAR_41->l4_proto = VAR_24;
   VAR_40->l4_proto = VAR_44.ip_proto;
  }
  if (VAR_44.match_flags & VAR_2) {
   FUNC_6(VAR_40->ip6dst, VAR_44.loc_host,
          sizeof(VAR_40->ip6dst));
   FUNC_5(VAR_41->ip6dst);
  }
  if (VAR_44.match_flags & VAR_7) {
   FUNC_6(VAR_40->ip6src, VAR_44.rem_host,
          sizeof(VAR_40->ip6src));
   FUNC_5(VAR_41->ip6src);
  }
 } else {

  FUNC_0(1);
  return -VAR_12;
 }

 if (VAR_44.match_flags & VAR_6) {
  VAR_33->flow_type |= VAR_18;
  VAR_33->h_ext.vlan_tci = VAR_44.outer_vid;
  VAR_33->m_ext.vlan_tci = FUNC_4(0xfff);
 }

 return VAR_45;
}
