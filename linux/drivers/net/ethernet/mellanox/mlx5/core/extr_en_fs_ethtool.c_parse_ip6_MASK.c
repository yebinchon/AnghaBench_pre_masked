
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ethtool_usrip6_spec {scalar_t__ l4_proto; int ip6dst; int ip6src; } ;
struct TYPE_4__ {struct ethtool_usrip6_spec usr_ip6_spec; } ;
struct TYPE_3__ {struct ethtool_usrip6_spec usr_ip6_spec; } ;
struct ethtool_rx_flow_spec {TYPE_2__ h_u; TYPE_1__ m_u; } ;


 int FUNC_0 (void*,int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (void*,void*,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1, void *VAR_2, struct ethtool_rx_flow_spec *VAR_3)
{
 struct ethtool_usrip6_spec *VAR_4 = &VAR_3->m_u.usr_ip6_spec;
 struct ethtool_usrip6_spec *VAR_5 = &VAR_3->h_u.usr_ip6_spec;

 FUNC_1(VAR_1, VAR_2, VAR_4->ip6src,
  VAR_5->ip6src, VAR_4->ip6dst, VAR_5->ip6dst);

 if (VAR_4->l4_proto) {
  FUNC_0(VAR_1, VAR_0, VAR_4->l4_proto);
  FUNC_0(VAR_2, VAR_0, VAR_5->l4_proto);
 }
}
