
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ethtool_tcpip4_spec {int pdst; int psrc; int ip4dst; int ip4src; } ;
struct TYPE_4__ {struct ethtool_tcpip4_spec udp_ip4_spec; } ;
struct TYPE_3__ {struct ethtool_tcpip4_spec udp_ip4_spec; } ;
struct ethtool_rx_flow_spec {TYPE_2__ h_u; TYPE_1__ m_u; } ;


 int FUNC_0 (void*,void*,int ,int ,int ,int ) ;
 int FUNC_1 (void*,void*,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, void *VAR_1, struct ethtool_rx_flow_spec *VAR_2)
{
 struct ethtool_tcpip4_spec *VAR_3 = &VAR_2->m_u.udp_ip4_spec;
 struct ethtool_tcpip4_spec *VAR_4 = &VAR_2->h_u.udp_ip4_spec;

 FUNC_0(VAR_0, VAR_1, VAR_3->ip4src, VAR_4->ip4src,
  VAR_3->ip4dst, VAR_4->ip4dst);

 FUNC_1(VAR_0, VAR_1, VAR_3->psrc, VAR_4->psrc,
  VAR_3->pdst, VAR_4->pdst);
}
