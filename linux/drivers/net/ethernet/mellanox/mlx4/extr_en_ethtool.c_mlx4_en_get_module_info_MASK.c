
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {int port; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int dev; } ;
struct ethtool_modinfo {void* eeprom_len; void* type; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;




 int FUNC_0 (int ,int ,int ,int,int*) ;
 struct mlx4_en_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_8,
       struct ethtool_modinfo *VAR_9)
{
 struct mlx4_en_priv *VAR_10 = FUNC_1(VAR_8);
 struct mlx4_en_dev *VAR_11 = VAR_10->mdev;
 int VAR_12;
 u8 VAR_13[4];


 VAR_12 = FUNC_0(VAR_11->dev, VAR_10->port,
       0 , 2 , VAR_13);
 if (VAR_12 < 2)
  return -VAR_1;

 switch (VAR_13[0] ) {
 case 131:
  VAR_9->type = VAR_2;
  VAR_9->eeprom_len = VAR_3;
  break;
 case 129:
  if (VAR_13[1] >= 0x3) {
   VAR_9->type = VAR_5;
   VAR_9->eeprom_len = VAR_6;
  } else {
   VAR_9->type = VAR_2;
   VAR_9->eeprom_len = VAR_3;
  }
  break;
 case 130:
  VAR_9->type = VAR_5;
  VAR_9->eeprom_len = VAR_6;
  break;
 case 128:
  VAR_9->type = VAR_4;
  VAR_9->eeprom_len = VAR_7;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
