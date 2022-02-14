
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fm10k_intfc {int flags; } ;
struct ethtool_rxnfc {int data; int flow_type; } ;






 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;






 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct fm10k_intfc *VAR_7,
       struct ethtool_rxnfc *VAR_8)
{
 VAR_8->data = 0;


 switch (VAR_8->flow_type) {
 case 131:
 case 130:
  VAR_8->data |= VAR_5 | VAR_6;

 case 129:
  if (FUNC_0(VAR_1,
        VAR_7->flags))
   VAR_8->data |= VAR_5 | VAR_6;

 case 133:
 case 132:
 case 141:
 case 140:
 case 139:
 case 138:
 case 137:
 case 136:
 case 135:
 case 134:
  VAR_8->data |= VAR_4 | VAR_3;
  break;
 case 128:
  if (FUNC_0(VAR_2,
        VAR_7->flags))
   VAR_8->data |= VAR_5 | VAR_6;
  VAR_8->data |= VAR_4 | VAR_3;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
