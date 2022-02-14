
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int h_dest; int vlan_tci; } ;
struct TYPE_3__ {int vlan_tci; int h_dest; } ;
struct ethtool_rx_flow_spec {int flow_type; TYPE_2__ h_ext; TYPE_1__ m_ext; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 void* FUNC_0 (int ,int*,int ) ;




 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_4 (void*,void*,struct ethtool_rx_flow_spec*) ;
 int FUNC_5 (void*,void*,struct ethtool_rx_flow_spec*) ;
 int FUNC_6 (void*,void*,struct ethtool_rx_flow_spec*) ;
 int FUNC_7 (void*,void*,struct ethtool_rx_flow_spec*) ;
 int FUNC_8 (void*,void*,struct ethtool_rx_flow_spec*) ;
 int FUNC_9 (void*,void*,struct ethtool_rx_flow_spec*) ;
 int FUNC_10 (void*,void*,struct ethtool_rx_flow_spec*) ;
 int FUNC_11 (void*,void*,int ) ;
 int FUNC_12 (void*,void*,int ,int ) ;

__attribute__((used)) static int FUNC_13(u32 *VAR_7, u32 *VAR_8,
     struct ethtool_rx_flow_spec *VAR_9)
{
 void *VAR_10 = FUNC_0(VAR_5, VAR_7,
          VAR_6);
 void *VAR_11 = FUNC_0(VAR_5, VAR_8,
          VAR_6);
 u32 VAR_12 = VAR_9->flow_type & ~(VAR_2 | VAR_3);

 switch (VAR_12) {
 case 131:
  FUNC_7(VAR_10, VAR_11, VAR_9);
  break;
 case 129:
  FUNC_9(VAR_10, VAR_11, VAR_9);
  break;
 case 132:
  FUNC_5(VAR_10, VAR_11, VAR_9);
  break;
 case 130:
  FUNC_8(VAR_10, VAR_11, VAR_9);
  break;
 case 128:
  FUNC_10(VAR_10, VAR_11, VAR_9);
  break;
 case 133:
  FUNC_6(VAR_10, VAR_11, VAR_9);
  break;
 case 134:
  FUNC_4(VAR_10, VAR_11, VAR_9);
  break;
 default:
  return -VAR_0;
 }

 if ((VAR_9->flow_type & VAR_2) &&
     (VAR_9->m_ext.vlan_tci & FUNC_1(VAR_4)))
  FUNC_11(VAR_10, VAR_11, VAR_9->h_ext.vlan_tci);

 if (VAR_9->flow_type & VAR_3 &&
     !FUNC_2(VAR_9->m_ext.h_dest)) {
  FUNC_3(VAR_9->m_ext.h_dest, VAR_9->h_ext.h_dest, VAR_1);
  FUNC_12(VAR_10, VAR_11, VAR_9->m_ext.h_dest,
    VAR_9->h_ext.h_dest);
 }

 return 0;
}
