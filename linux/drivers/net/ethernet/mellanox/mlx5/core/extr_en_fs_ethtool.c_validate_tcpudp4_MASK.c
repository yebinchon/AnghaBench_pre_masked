
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ethtool_tcpip4_spec {scalar_t__ pdst; scalar_t__ psrc; scalar_t__ ip4dst; scalar_t__ ip4src; scalar_t__ tos; } ;
struct TYPE_2__ {struct ethtool_tcpip4_spec tcp_ip4_spec; } ;
struct ethtool_rx_flow_spec {TYPE_1__ m_u; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct ethtool_rx_flow_spec *VAR_1)
{
 struct ethtool_tcpip4_spec *VAR_2 = &VAR_1->m_u.tcp_ip4_spec;
 int VAR_3 = 0;

 if (VAR_2->tos)
  return -VAR_0;

 if (VAR_2->ip4src)
  VAR_3++;
 if (VAR_2->ip4dst)
  VAR_3++;
 if (VAR_2->psrc)
  VAR_3++;
 if (VAR_2->pdst)
  VAR_3++;

 return ++VAR_3;
}
