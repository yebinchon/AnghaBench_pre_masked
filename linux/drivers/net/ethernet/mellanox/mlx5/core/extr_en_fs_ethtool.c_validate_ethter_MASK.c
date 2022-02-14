
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ethhdr {scalar_t__ h_proto; int h_source; int h_dest; } ;
struct TYPE_2__ {struct ethhdr ether_spec; } ;
struct ethtool_rx_flow_spec {TYPE_1__ m_u; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct ethtool_rx_flow_spec *VAR_0)
{
 struct ethhdr *VAR_1 = &VAR_0->m_u.ether_spec;
 int VAR_2 = 0;

 if (!FUNC_0(VAR_1->h_dest))
  VAR_2++;
 if (!FUNC_0(VAR_1->h_source))
  VAR_2++;
 if (VAR_1->h_proto)
  VAR_2++;
 return VAR_2;
}
