
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct igb_adapter {int flags; } ;
struct ethtool_rxnfc {int data; int flow_type; } ;






 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;







__attribute__((used)) static int FUNC_0(struct igb_adapter *VAR_7,
     struct ethtool_rxnfc *VAR_8)
{
 VAR_8->data = 0;


 switch (VAR_8->flow_type) {
 case 131:
  VAR_8->data |= VAR_5 | VAR_6;

 case 129:
  if (VAR_7->flags & VAR_1)
   VAR_8->data |= VAR_5 | VAR_6;

 case 133:
 case 141:
 case 139:
 case 137:
 case 135:
  VAR_8->data |= VAR_4 | VAR_3;
  break;
 case 130:
  VAR_8->data |= VAR_5 | VAR_6;

 case 128:
  if (VAR_7->flags & VAR_2)
   VAR_8->data |= VAR_5 | VAR_6;

 case 132:
 case 140:
 case 138:
 case 136:
 case 134:
  VAR_8->data |= VAR_4 | VAR_3;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
