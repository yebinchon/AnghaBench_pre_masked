
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_rxnfc {int cmd; int data; int flow_type; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





__attribute__((used)) static int FUNC_0(struct net_device *VAR_6,
         struct ethtool_rxnfc *VAR_7,
         u32 *VAR_8)
{
 switch (VAR_7->cmd) {
 case 135:
  VAR_7->data = 0;
  switch (VAR_7->flow_type) {
  case 131:case 129:
  case 130:case 128:
   VAR_7->data |= VAR_4 | VAR_5;

  case 133: case 132:
   VAR_7->data |= VAR_3 | VAR_2;
   return 0;
  }
  break;
 case 134:
  VAR_7->data = VAR_1;
  return 0;
 }
 return -VAR_0;
}
