
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct filer_table {int index; TYPE_4__* fe; } ;
struct ethtool_usrip4_spec {int dummy; } ;
struct ethtool_tcpip4_spec {int dummy; } ;
struct TYPE_7__ {struct ethtool_tcpip4_spec udp_ip4_spec; struct ethtool_tcpip4_spec tcp_ip4_spec; } ;
struct TYPE_6__ {struct ethtool_tcpip4_spec udp_ip4_spec; struct ethtool_tcpip4_spec tcp_ip4_spec; } ;
struct TYPE_5__ {scalar_t__ vlan_tci; } ;
struct ethtool_rx_flow_spec {int flow_type; int ring_cookie; TYPE_3__ m_u; TYPE_2__ h_u; TYPE_1__ m_ext; } ;
struct ethhdr {int dummy; } ;
struct TYPE_8__ {int ctrl; int prop; } ;


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



 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int,int ,struct filer_table*) ;
 int FUNC_2 (struct ethtool_tcpip4_spec*,struct ethtool_tcpip4_spec*,struct filer_table*) ;
 int FUNC_3 (struct ethhdr*,struct ethhdr*,struct filer_table*) ;
 int FUNC_4 (int,struct filer_table*) ;
 int FUNC_5 (int,int,struct filer_table*) ;
 int FUNC_6 (struct ethtool_usrip4_spec*,struct ethtool_usrip4_spec*,struct filer_table*) ;
 int FUNC_7 (struct ethtool_rx_flow_spec*) ;
 int FUNC_8 (struct ethtool_rx_flow_spec*) ;
 int FUNC_9 (struct ethtool_rx_flow_spec*) ;
 int FUNC_10 (struct ethtool_rx_flow_spec*) ;
 int FUNC_11 (struct ethtool_rx_flow_spec*) ;
 int FUNC_12 (struct ethtool_rx_flow_spec*) ;

__attribute__((used)) static int FUNC_13(struct ethtool_rx_flow_spec *VAR_15,
     struct filer_table *VAR_16)
{
 u32 VAR_17 = 0, VAR_18 = 0;
 u32 VAR_19 = 0, VAR_20 = 0;
 u32 VAR_21 = 0, VAR_22 = 0;
 u32 VAR_23 = 0, VAR_24 = 0;
 u32 VAR_25 = VAR_16->index;


 if ((VAR_15->flow_type & VAR_1) &&
     (VAR_15->m_ext.vlan_tci != FUNC_0(0xFFFF))) {
  if (!VAR_15->m_ext.vlan_tci)
   VAR_15->m_ext.vlan_tci = FUNC_0(0xFFFF);

  VAR_17 = VAR_13;
  VAR_18 = VAR_13;


  VAR_19 = FUNC_11(VAR_15);
  VAR_20 = FUNC_12(VAR_15);
  VAR_21 = FUNC_7(VAR_15);
  VAR_22 = FUNC_8(VAR_15);
  VAR_23 = FUNC_9(VAR_15);
  VAR_24 = FUNC_10(VAR_15);

  if (VAR_22) {
   if (VAR_21)
    VAR_17 |= VAR_9;
   VAR_18 |= VAR_9;
  }
 }

 switch (VAR_15->flow_type & ~VAR_1) {
 case 129:
  FUNC_5(VAR_10 | VAR_11 | VAR_17,
        VAR_10 | VAR_11 | VAR_18, VAR_16);
  FUNC_2(&VAR_15->h_u.tcp_ip4_spec,
      &VAR_15->m_u.tcp_ip4_spec, VAR_16);
  break;
 case 128:
  FUNC_5(VAR_10 | VAR_12 | VAR_17,
        VAR_10 | VAR_12 | VAR_18, VAR_16);
  FUNC_2(&VAR_15->h_u.udp_ip4_spec,
      &VAR_15->m_u.udp_ip4_spec, VAR_16);
  break;
 case 130:
  FUNC_5(VAR_10 | VAR_17, VAR_10 | VAR_18,
        VAR_16);
  FUNC_1(132, 0, VAR_5, VAR_16);
  FUNC_2((struct ethtool_tcpip4_spec *)&VAR_15->h_u,
      (struct ethtool_tcpip4_spec *)&VAR_15->m_u,
      VAR_16);
  break;
 case 131:
  FUNC_5(VAR_10 | VAR_17, VAR_10 | VAR_18,
        VAR_16);
  FUNC_6((struct ethtool_usrip4_spec *) &VAR_15->h_u,
     (struct ethtool_usrip4_spec *) &VAR_15->m_u,
     VAR_16);
  break;
 case 132:
  if (VAR_17)
   FUNC_5(VAR_17, VAR_18, VAR_16);
  FUNC_3((struct ethhdr *) &VAR_15->h_u,
          (struct ethhdr *) &VAR_15->m_u, VAR_16);
  break;
 default:
  return -1;
 }


 if (VAR_17) {
  FUNC_1(VAR_19, VAR_20, VAR_7, VAR_16);
  FUNC_1(VAR_23, VAR_24, VAR_6, VAR_16);
 }


 if (VAR_16->index == VAR_25) {
  FUNC_4(0xFFFFFFFF, VAR_16);
  VAR_16->fe[VAR_16->index].ctrl = 0x20;
  VAR_16->fe[VAR_16->index].prop = 0x0;
  VAR_16->index++;
 }


 VAR_16->fe[VAR_16->index - 1].ctrl &= (~VAR_3);


 if (VAR_15->ring_cookie == VAR_14)
  VAR_16->fe[VAR_16->index - 1].ctrl |= VAR_8;
 else
  VAR_16->fe[VAR_16->index - 1].ctrl |= (VAR_15->ring_cookie << 10);


 if (VAR_16->index > (VAR_25 + 2)) {
  VAR_16->fe[VAR_25 + 1].ctrl |= VAR_4;
  VAR_16->fe[VAR_16->index - 1].ctrl |= VAR_4;
 }




 if (VAR_16->index > VAR_2 - 1)
  return -VAR_0;

 return 0;
}
