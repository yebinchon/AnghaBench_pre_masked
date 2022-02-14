
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct in6_addr {int dummy; } ;
struct ethtool_tcpip6_spec {scalar_t__ pdst; scalar_t__ psrc; scalar_t__ ip6dst; scalar_t__ ip6src; scalar_t__ tclass; } ;
struct TYPE_2__ {struct ethtool_tcpip6_spec tcp_ip6_spec; } ;
struct ethtool_rx_flow_spec {TYPE_1__ m_u; } ;


 int VAR_0 ;
 int FUNC_0 (struct in6_addr*) ;

__attribute__((used)) static int FUNC_1(struct ethtool_rx_flow_spec *VAR_1)
{
 struct ethtool_tcpip6_spec *VAR_2 = &VAR_1->m_u.tcp_ip6_spec;
 int VAR_3 = 0;

 if (VAR_2->tclass)
  return -VAR_0;

 if (!FUNC_0((struct in6_addr *)VAR_2->ip6src))
  VAR_3++;

 if (!FUNC_0((struct in6_addr *)VAR_2->ip6dst))
  VAR_3++;

 if (VAR_2->psrc)
  VAR_3++;
 if (VAR_2->pdst)
  VAR_3++;

 return ++VAR_3;
}
