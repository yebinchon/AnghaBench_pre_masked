
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_rxnfc {int data; int flow_type; } ;






 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int FUNC_0 (struct net_device*,int) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_5,
         struct ethtool_rxnfc *VAR_6)
{
 int VAR_7 = -VAR_0;


 if (VAR_6->data &
     ~(VAR_2 | VAR_1 | VAR_3 | VAR_4))
  return -VAR_0;

 switch (VAR_6->flow_type) {
 case 131:
 case 130:
 case 129:
 case 128:
 case 135:
 case 134:
 case 133:
 case 132:
 case 141:
 case 140:
 case 139:
 case 138:
 case 137:
 case 136:
  FUNC_0(VAR_5, !!VAR_6->data);
  VAR_7 = 0;
  break;
 default:
  break;
 }

 return VAR_7;
}
