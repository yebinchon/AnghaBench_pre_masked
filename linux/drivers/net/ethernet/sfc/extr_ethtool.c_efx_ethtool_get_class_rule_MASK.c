
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct ethtool_usrip6_spec {scalar_t__ l4_proto; int ip6src; int ip6dst; } ;
struct ethtool_usrip4_spec {scalar_t__ proto; void* ip4src; void* ip4dst; int ip_ver; } ;
struct ethtool_tcpip6_spec {void* psrc; void* pdst; int ip6src; int ip6dst; } ;
struct ethtool_tcpip4_spec {void* psrc; void* pdst; void* ip4src; void* ip4dst; } ;
struct TYPE_6__ {scalar_t__ vlan_tci; } ;
struct TYPE_5__ {int vlan_tci; } ;
struct ethhdr {scalar_t__ h_proto; int h_source; int h_dest; } ;
struct TYPE_8__ {struct ethhdr ether_spec; struct ethtool_usrip6_spec usr_ip6_spec; struct ethtool_tcpip6_spec tcp_ip6_spec; struct ethtool_usrip4_spec usr_ip4_spec; struct ethtool_tcpip4_spec tcp_ip4_spec; } ;
struct TYPE_7__ {struct ethhdr ether_spec; struct ethtool_usrip6_spec usr_ip6_spec; struct ethtool_tcpip6_spec tcp_ip6_spec; struct ethtool_usrip4_spec usr_ip4_spec; struct ethtool_tcpip4_spec tcp_ip4_spec; } ;
struct ethtool_rx_flow_spec {scalar_t__ ring_cookie; int flow_type; TYPE_2__ m_ext; TYPE_1__ h_ext; int location; TYPE_4__ m_u; TYPE_3__ h_u; } ;
struct efx_nic {int dummy; } ;
struct efx_filter_spec {scalar_t__ dmaq_id; int match_flags; scalar_t__ ether_type; scalar_t__ ip_proto; int flags; int rss_context; int outer_vid; void** rem_host; void** loc_host; int rem_mac; int loc_mac; void* rem_port; void* loc_port; } ;


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
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 void* VAR_26 ;
 void* VAR_27 ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct efx_nic*,int ,int ,struct efx_filter_spec*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int VAR_33 ;
 int FUNC_6 (int ,void**,int) ;

__attribute__((used)) static int FUNC_7(struct efx_nic *VAR_34,
          struct ethtool_rx_flow_spec *VAR_35,
          u32 *VAR_36)
{
 struct ethtool_tcpip4_spec *VAR_37 = &VAR_35->h_u.tcp_ip4_spec;
 struct ethtool_tcpip4_spec *VAR_38 = &VAR_35->m_u.tcp_ip4_spec;
 struct ethtool_usrip4_spec *VAR_39 = &VAR_35->h_u.usr_ip4_spec;
 struct ethtool_usrip4_spec *VAR_40 = &VAR_35->m_u.usr_ip4_spec;
 struct ethtool_tcpip6_spec *VAR_41 = &VAR_35->h_u.tcp_ip6_spec;
 struct ethtool_tcpip6_spec *VAR_42 = &VAR_35->m_u.tcp_ip6_spec;
 struct ethtool_usrip6_spec *VAR_43 = &VAR_35->h_u.usr_ip6_spec;
 struct ethtool_usrip6_spec *VAR_44 = &VAR_35->m_u.usr_ip6_spec;
 struct ethhdr *VAR_45 = &VAR_35->h_u.ether_spec;
 struct ethhdr *VAR_46 = &VAR_35->m_u.ether_spec;
 struct efx_filter_spec VAR_47;
 int VAR_48;

 VAR_48 = FUNC_1(VAR_34, VAR_11,
     VAR_35->location, &VAR_47);
 if (VAR_48)
  return VAR_48;

 if (VAR_47.dmaq_id == VAR_12)
  VAR_35->ring_cookie = VAR_28;
 else
  VAR_35->ring_cookie = VAR_47.dmaq_id;

 if ((VAR_47.match_flags & VAR_1) &&
     VAR_47.ether_type == FUNC_4(VAR_16) &&
     (VAR_47.match_flags & VAR_2) &&
     (VAR_47.ip_proto == VAR_22 || VAR_47.ip_proto == VAR_23) &&
     !(VAR_47.match_flags &
       ~(VAR_1 | VAR_7 |
  VAR_3 | VAR_8 |
  VAR_2 |
  VAR_6 | VAR_10))) {
  VAR_35->flow_type = ((VAR_47.ip_proto == VAR_22) ?
       VAR_29 : VAR_31);
  if (VAR_47.match_flags & VAR_3) {
   VAR_37->ip4dst = VAR_47.loc_host[0];
   VAR_38->ip4dst = VAR_21;
  }
  if (VAR_47.match_flags & VAR_8) {
   VAR_37->ip4src = VAR_47.rem_host[0];
   VAR_38->ip4src = VAR_21;
  }
  if (VAR_47.match_flags & VAR_6) {
   VAR_37->pdst = VAR_47.loc_port;
   VAR_38->pdst = VAR_27;
  }
  if (VAR_47.match_flags & VAR_10) {
   VAR_37->psrc = VAR_47.rem_port;
   VAR_38->psrc = VAR_27;
  }
 } else if ((VAR_47.match_flags & VAR_1) &&
     VAR_47.ether_type == FUNC_4(VAR_17) &&
     (VAR_47.match_flags & VAR_2) &&
     (VAR_47.ip_proto == VAR_22 || VAR_47.ip_proto == VAR_23) &&
     !(VAR_47.match_flags &
       ~(VAR_1 | VAR_7 |
  VAR_3 | VAR_8 |
  VAR_2 |
  VAR_6 | VAR_10))) {
  VAR_35->flow_type = ((VAR_47.ip_proto == VAR_22) ?
       VAR_30 : VAR_32);
  if (VAR_47.match_flags & VAR_3) {
   FUNC_6(VAR_41->ip6dst, VAR_47.loc_host,
          sizeof(VAR_41->ip6dst));
   FUNC_5(VAR_42->ip6dst);
  }
  if (VAR_47.match_flags & VAR_8) {
   FUNC_6(VAR_41->ip6src, VAR_47.rem_host,
          sizeof(VAR_41->ip6src));
   FUNC_5(VAR_42->ip6src);
  }
  if (VAR_47.match_flags & VAR_6) {
   VAR_41->pdst = VAR_47.loc_port;
   VAR_42->pdst = VAR_27;
  }
  if (VAR_47.match_flags & VAR_10) {
   VAR_41->psrc = VAR_47.rem_port;
   VAR_42->psrc = VAR_27;
  }
 } else if (!(VAR_47.match_flags &
       ~(VAR_4 | VAR_5 |
         VAR_9 | VAR_1 |
         VAR_7))) {
  VAR_35->flow_type = VAR_14;
  if (VAR_47.match_flags &
      (VAR_4 | VAR_5)) {
   FUNC_3(VAR_45->h_dest, VAR_47.loc_mac);
   if (VAR_47.match_flags & VAR_4)
    FUNC_2(VAR_46->h_dest);
   else
    FUNC_3(VAR_46->h_dest,
      VAR_33);
  }
  if (VAR_47.match_flags & VAR_9) {
   FUNC_3(VAR_45->h_source, VAR_47.rem_mac);
   FUNC_2(VAR_46->h_source);
  }
  if (VAR_47.match_flags & VAR_1) {
   VAR_45->h_proto = VAR_47.ether_type;
   VAR_46->h_proto = VAR_15;
  }
 } else if (VAR_47.match_flags & VAR_1 &&
     VAR_47.ether_type == FUNC_4(VAR_16) &&
     !(VAR_47.match_flags &
       ~(VAR_1 | VAR_7 |
         VAR_3 | VAR_8 |
         VAR_2))) {
  VAR_35->flow_type = VAR_24;
  VAR_39->ip_ver = VAR_18;
  if (VAR_47.match_flags & VAR_2) {
   VAR_40->proto = VAR_26;
   VAR_39->proto = VAR_47.ip_proto;
  }
  if (VAR_47.match_flags & VAR_3) {
   VAR_39->ip4dst = VAR_47.loc_host[0];
   VAR_40->ip4dst = VAR_21;
  }
  if (VAR_47.match_flags & VAR_8) {
   VAR_39->ip4src = VAR_47.rem_host[0];
   VAR_40->ip4src = VAR_21;
  }
 } else if (VAR_47.match_flags & VAR_1 &&
     VAR_47.ether_type == FUNC_4(VAR_17) &&
     !(VAR_47.match_flags &
       ~(VAR_1 | VAR_7 |
         VAR_3 | VAR_8 |
         VAR_2))) {
  VAR_35->flow_type = VAR_25;
  if (VAR_47.match_flags & VAR_2) {
   VAR_44->l4_proto = VAR_26;
   VAR_43->l4_proto = VAR_47.ip_proto;
  }
  if (VAR_47.match_flags & VAR_3) {
   FUNC_6(VAR_43->ip6dst, VAR_47.loc_host,
          sizeof(VAR_43->ip6dst));
   FUNC_5(VAR_44->ip6dst);
  }
  if (VAR_47.match_flags & VAR_8) {
   FUNC_6(VAR_43->ip6src, VAR_47.rem_host,
          sizeof(VAR_43->ip6src));
   FUNC_5(VAR_44->ip6src);
  }
 } else {

  FUNC_0(1);
  return -VAR_13;
 }

 if (VAR_47.match_flags & VAR_7) {
  VAR_35->flow_type |= VAR_19;
  VAR_35->h_ext.vlan_tci = VAR_47.outer_vid;
  VAR_35->m_ext.vlan_tci = FUNC_4(0xfff);
 }

 if (VAR_47.flags & VAR_0) {
  VAR_35->flow_type |= VAR_20;
  *VAR_36 = VAR_47.rss_context;
 }

 return VAR_48;
}
