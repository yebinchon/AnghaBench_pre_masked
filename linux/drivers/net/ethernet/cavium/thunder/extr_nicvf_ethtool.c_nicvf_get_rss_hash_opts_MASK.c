
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nicvf {int dummy; } ;
struct ethtool_rxnfc {int data; int flow_type; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;







__attribute__((used)) static int FUNC_0(struct nicvf *VAR_5,
       struct ethtool_rxnfc *VAR_6)
{
 VAR_6->data = 0;

 switch (VAR_6->flow_type) {
 case 131:
 case 130:
 case 129:
 case 128:
 case 133:
 case 132:
  VAR_6->data |= VAR_3 | VAR_4;

 case 135:
 case 134:
  VAR_6->data |= VAR_2 | VAR_1;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
