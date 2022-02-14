
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ethtool_usrip4_spec {int tos; int ip4dst; int ip4src; } ;
struct ethtool_tcpip4_spec {int tos; int pdst; int psrc; int ip4dst; int ip4src; } ;
struct ethhdr {int h_proto; int h_dest; int h_source; } ;
struct TYPE_6__ {struct ethhdr ether_spec; struct ethtool_usrip4_spec usr_ip4_spec; struct ethtool_tcpip4_spec sctp_ip4_spec; struct ethtool_tcpip4_spec udp_ip4_spec; struct ethtool_tcpip4_spec tcp_ip4_spec; } ;
struct TYPE_5__ {struct ethhdr ether_spec; struct ethtool_usrip4_spec usr_ip4_spec; struct ethtool_tcpip4_spec sctp_ip4_spec; struct ethtool_tcpip4_spec udp_ip4_spec; struct ethtool_tcpip4_spec tcp_ip4_spec; } ;
struct ethtool_rx_flow_spec {int flow_type; scalar_t__ ring_cookie; int location; TYPE_3__ m_u; TYPE_2__ h_u; } ;
struct enetc_si {int ndev; } ;
struct TYPE_4__ {int member_0; } ;
struct enetc_cmd_rfse {int ethtype_m; scalar_t__ result; int mode; void* ethtype_h; int dmac_m; int dmac_h; int smac_m; int smac_h; int * dip_m; int * dip_h; int * sip_m; int * sip_h; void* dport_m; void* dport_h; void* sport_m; void* sport_h; TYPE_1__ member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 void* VAR_3 ;

 scalar_t__ VAR_4 ;



 int FUNC_0 (struct enetc_si*,struct enetc_cmd_rfse*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct enetc_si *VAR_5,
          struct ethtool_rx_flow_spec *VAR_6, bool VAR_7)
{
 struct ethtool_tcpip4_spec *VAR_8, *VAR_9;
 struct ethtool_usrip4_spec *VAR_10, *VAR_11;
 struct ethhdr *VAR_12, *VAR_13;
 struct enetc_cmd_rfse VAR_14 = { 0 };

 if (!VAR_7)
  goto done;

 switch (VAR_6->flow_type & 0xff) {
 case 129:
  VAR_8 = &VAR_6->h_u.tcp_ip4_spec;
  VAR_9 = &VAR_6->m_u.tcp_ip4_spec;
  goto l4ip4;
 case 128:
  VAR_8 = &VAR_6->h_u.udp_ip4_spec;
  VAR_9 = &VAR_6->m_u.udp_ip4_spec;
  goto l4ip4;
 case 130:
  VAR_8 = &VAR_6->h_u.sctp_ip4_spec;
  VAR_9 = &VAR_6->m_u.sctp_ip4_spec;
l4ip4:
  VAR_14.sip_h[0] = VAR_8->ip4src;
  VAR_14.sip_m[0] = VAR_9->ip4src;
  VAR_14.dip_h[0] = VAR_8->ip4dst;
  VAR_14.dip_m[0] = VAR_9->ip4dst;
  VAR_14.sport_h = FUNC_3(VAR_8->psrc);
  VAR_14.sport_m = FUNC_3(VAR_9->psrc);
  VAR_14.dport_h = FUNC_3(VAR_8->pdst);
  VAR_14.dport_m = FUNC_3(VAR_9->pdst);
  if (VAR_9->tos)
   FUNC_2(VAR_5->ndev, "ToS field is not supported and was ignored\n");
  VAR_14.ethtype_h = VAR_3;
  VAR_14.ethtype_m = 0xffff;
  break;
 case 131:
  VAR_10 = &VAR_6->h_u.usr_ip4_spec;
  VAR_11 = &VAR_6->m_u.usr_ip4_spec;

  VAR_14.sip_h[0] = VAR_10->ip4src;
  VAR_14.sip_m[0] = VAR_11->ip4src;
  VAR_14.dip_h[0] = VAR_10->ip4dst;
  VAR_14.dip_m[0] = VAR_11->ip4dst;
  if (VAR_11->tos)
   FUNC_2(VAR_5->ndev, "ToS field is not supported and was ignored\n");
  VAR_14.ethtype_h = VAR_3;
  VAR_14.ethtype_m = 0xffff;
  break;
 case 132:
  VAR_12 = &VAR_6->h_u.ether_spec;
  VAR_13 = &VAR_6->m_u.ether_spec;

  FUNC_1(VAR_14.smac_h, VAR_12->h_source);
  FUNC_1(VAR_14.smac_m, VAR_13->h_source);
  FUNC_1(VAR_14.dmac_h, VAR_12->h_dest);
  FUNC_1(VAR_14.dmac_m, VAR_13->h_dest);
  VAR_14.ethtype_h = FUNC_3(VAR_12->h_proto);
  VAR_14.ethtype_m = FUNC_3(VAR_13->h_proto);
  break;
 default:
  return -VAR_2;
 }

 VAR_14.mode |= VAR_0;
 if (VAR_6->ring_cookie != VAR_4) {
  VAR_14.mode |= VAR_1;
  VAR_14.result = VAR_6->ring_cookie;
 }
done:
 return FUNC_0(VAR_5, &VAR_14, VAR_6->location);
}
