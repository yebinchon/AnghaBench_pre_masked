
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ethtool_rxnfc {int flow_type; int data; } ;
struct ena_com_dev {int dummy; } ;
typedef enum ena_admin_flow_hash_proto { ____Placeholder_ena_admin_flow_hash_proto } ena_admin_flow_hash_proto ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ena_com_dev*,int,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ena_com_dev *VAR_9,
       struct ethtool_rxnfc *VAR_10)
{
 enum ena_admin_flow_hash_proto VAR_11;
 u16 VAR_12;

 switch (VAR_10->flow_type) {
 case 131:
  VAR_11 = VAR_4;
  break;
 case 129:
  VAR_11 = VAR_6;
  break;
 case 130:
  VAR_11 = VAR_5;
  break;
 case 128:
  VAR_11 = VAR_7;
  break;
 case 134:
  VAR_11 = VAR_1;
  break;
 case 133:
  VAR_11 = VAR_2;
  break;
 case 135:
  VAR_11 = VAR_3;
  break;
 case 139:
 case 137:
 case 138:
 case 136:
 case 132:
 case 140:
  return -VAR_8;
 default:
  return -VAR_0;
 }

 VAR_12 = FUNC_1(VAR_10->data);

 return FUNC_0(VAR_9, VAR_11, VAR_12);
}
