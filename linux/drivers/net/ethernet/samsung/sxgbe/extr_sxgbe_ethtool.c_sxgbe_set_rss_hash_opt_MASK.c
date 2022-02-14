
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sxgbe_priv_data {scalar_t__ ioaddr; } ;
struct ethtool_rxnfc {int data; int flow_type; } ;






 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;




 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct sxgbe_priv_data *VAR_9,
      struct ethtool_rxnfc *VAR_10)
{
 u32 VAR_11 = 0;




 if (VAR_10->data & ~(VAR_2 | VAR_1 |
     VAR_3 | VAR_4))
  return -VAR_0;

 switch (VAR_10->flow_type) {
 case 131:
 case 130:
  if (!(VAR_10->data & VAR_2) ||
      !(VAR_10->data & VAR_1) ||
      !(VAR_10->data & VAR_3) ||
      !(VAR_10->data & VAR_4))
   return -VAR_0;
  VAR_11 = VAR_7;
  break;
 case 129:
 case 128:
  if (!(VAR_10->data & VAR_2) ||
      !(VAR_10->data & VAR_1) ||
      !(VAR_10->data & VAR_3) ||
      !(VAR_10->data & VAR_4))
   return -VAR_0;
  VAR_11 = VAR_8;
  break;
 case 133:
 case 141:
 case 139:
 case 137:
 case 140:
 case 138:
 case 136:
 case 132:
 case 135:
 case 134:
  if (!(VAR_10->data & VAR_2) ||
      !(VAR_10->data & VAR_1) ||
      (VAR_10->data & VAR_3) ||
      (VAR_10->data & VAR_4))
   return -VAR_0;
  VAR_11 = VAR_5;
  break;
 default:
  return -VAR_0;
 }


 VAR_11 |= FUNC_0(VAR_9->ioaddr + VAR_6);
 FUNC_1(VAR_11, VAR_9->ioaddr + VAR_6);
 FUNC_0(VAR_9->ioaddr + VAR_6);

 return 0;
}
