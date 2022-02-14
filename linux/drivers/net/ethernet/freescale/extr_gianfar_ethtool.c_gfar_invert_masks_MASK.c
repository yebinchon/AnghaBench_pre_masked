
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int * data; int vlan_tci; int vlan_etype; } ;
struct TYPE_4__ {int* hdata; } ;
struct ethtool_rx_flow_spec {TYPE_1__ m_ext; TYPE_2__ m_u; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ethtool_rx_flow_spec *VAR_0)
{
 u32 VAR_1 = 0;

 for (VAR_1 = 0; VAR_1 < sizeof(VAR_0->m_u); VAR_1++)
  VAR_0->m_u.hdata[VAR_1] ^= 0xFF;

 VAR_0->m_ext.vlan_etype ^= FUNC_0(0xFFFF);
 VAR_0->m_ext.vlan_tci ^= FUNC_0(0xFFFF);
 VAR_0->m_ext.data[0] ^= FUNC_1(~0);
 VAR_0->m_ext.data[1] ^= FUNC_1(~0);
}
