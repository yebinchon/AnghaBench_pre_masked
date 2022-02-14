
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gfar_private {int ndev; } ;
struct TYPE_4__ {scalar_t__ ip_ver; } ;
struct TYPE_5__ {TYPE_1__ usr_ip4_spec; } ;
struct TYPE_6__ {int vlan_etype; int * data; } ;
struct ethtool_rx_flow_spec {int flow_type; TYPE_2__ h_u; TYPE_3__ m_ext; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct ethtool_rx_flow_spec *VAR_3,
     struct gfar_private *VAR_4)
{

 if (VAR_3->flow_type & VAR_1) {
  if (~VAR_3->m_ext.data[0] || ~VAR_3->m_ext.data[1])
   FUNC_0(VAR_4->ndev,
        "User-specific data not supported!\n");
  if (~VAR_3->m_ext.vlan_etype)
   FUNC_0(VAR_4->ndev,
        "VLAN-etype not supported!\n");
 }
 if (VAR_3->flow_type == VAR_2)
  if (VAR_3->h_u.usr_ip4_spec.ip_ver != VAR_0)
   FUNC_0(VAR_4->ndev,
        "IP-Version differing from IPv4 not supported!\n");

 return 0;
}
