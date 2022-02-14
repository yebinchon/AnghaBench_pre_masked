
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int vlan_tci; } ;
struct ethtool_rx_flow_spec {TYPE_1__ h_ext; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline u32 FUNC_1(struct ethtool_rx_flow_spec *VAR_1)
{
 return FUNC_0(VAR_1->h_ext.vlan_tci) & VAR_0;
}
