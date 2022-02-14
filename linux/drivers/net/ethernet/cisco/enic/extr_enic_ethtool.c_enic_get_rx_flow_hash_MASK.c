
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ethtool_rxnfc {int data; int flow_type; } ;
struct enic {int devcmd_lock; int vdev; } ;






 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;






 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int*) ;

__attribute__((used)) static int FUNC_3(struct enic *VAR_7, struct ethtool_rxnfc *VAR_8)
{
 u8 VAR_9 = 0;
 VAR_8->data = 0;

 FUNC_0(&VAR_7->devcmd_lock);
 (void)FUNC_2(VAR_7->vdev, &VAR_9);
 FUNC_1(&VAR_7->devcmd_lock);
 switch (VAR_8->flow_type) {
 case 130:
 case 131:
  VAR_8->data |= VAR_5 | VAR_6 |
        VAR_4 | VAR_3;
  break;
 case 128:
  VAR_8->data |= VAR_4 | VAR_3;
  if (VAR_9 & VAR_2)
   VAR_8->data |= VAR_5 | VAR_6;
  break;
 case 129:
  VAR_8->data |= VAR_4 | VAR_3;
  if (VAR_9 & VAR_1)
   VAR_8->data |= VAR_5 | VAR_6;
  break;
 case 133:
 case 141:
 case 139:
 case 137:
 case 132:
 case 140:
 case 138:
 case 136:
 case 135:
 case 134:
  VAR_8->data |= VAR_4 | VAR_3;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
