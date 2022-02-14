
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mtk_mac {int * hwlro_ip; } ;
struct ethtool_rxnfc {int fs; } ;
struct TYPE_7__ {int ip4src; int psrc; int pdst; int tos; scalar_t__ ip4dst; } ;
struct TYPE_8__ {TYPE_3__ tcp_ip4_spec; } ;
struct TYPE_5__ {scalar_t__ tos; scalar_t__ pdst; scalar_t__ psrc; scalar_t__ ip4src; int ip4dst; } ;
struct TYPE_6__ {TYPE_1__ tcp_ip4_spec; } ;
struct ethtool_rx_flow_spec {size_t location; TYPE_4__ m_u; TYPE_2__ h_u; int flow_type; } ;


 int VAR_0 ;
 struct mtk_mac* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
        struct ethtool_rxnfc *VAR_2)
{
 struct mtk_mac *VAR_3 = FUNC_0(VAR_1);
 struct ethtool_rx_flow_spec *VAR_4 =
  (struct ethtool_rx_flow_spec *)&VAR_2->fs;


 VAR_4->flow_type = VAR_0;
 VAR_4->h_u.tcp_ip4_spec.ip4dst = FUNC_1(VAR_3->hwlro_ip[VAR_4->location]);
 VAR_4->m_u.tcp_ip4_spec.ip4dst = 0;

 VAR_4->h_u.tcp_ip4_spec.ip4src = 0;
 VAR_4->m_u.tcp_ip4_spec.ip4src = 0xffffffff;
 VAR_4->h_u.tcp_ip4_spec.psrc = 0;
 VAR_4->m_u.tcp_ip4_spec.psrc = 0xffff;
 VAR_4->h_u.tcp_ip4_spec.pdst = 0;
 VAR_4->m_u.tcp_ip4_spec.pdst = 0xffff;
 VAR_4->h_u.tcp_ip4_spec.tos = 0;
 VAR_4->m_u.tcp_ip4_spec.tos = 0xff;

 return 0;
}
