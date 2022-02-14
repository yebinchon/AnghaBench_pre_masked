
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int vlan_tci; } ;
struct TYPE_3__ {scalar_t__ vlan_tci; scalar_t__ vlan_etype; } ;
struct ethtool_rx_flow_spec {TYPE_2__ h_ext; TYPE_1__ m_ext; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ethtool_rx_flow_spec *VAR_3)
{
 if (VAR_3->m_ext.vlan_etype ||
     VAR_3->m_ext.vlan_tci != FUNC_1(VAR_2))
  return -VAR_0;

 if (VAR_3->m_ext.vlan_tci &&
     (FUNC_0(VAR_3->h_ext.vlan_tci) >= VAR_1))
  return -VAR_0;

 return 1;
}
