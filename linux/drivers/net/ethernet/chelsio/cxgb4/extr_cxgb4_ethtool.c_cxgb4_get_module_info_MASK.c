
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct port_info {int port_type; int tx_chan; int mod_type; struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct ethtool_modinfo {int eeprom_len; int type; } ;
struct adapter {int mbox; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct port_info* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct adapter*,int ,int ,int ,int ,int ,int*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_16,
     struct ethtool_modinfo *VAR_17)
{
 struct port_info *VAR_18 = FUNC_0(VAR_16);
 u8 VAR_19, VAR_20, VAR_21;
 struct adapter *VAR_22 = VAR_18->adapter;
 int VAR_23;

 if (!FUNC_2(VAR_18->mod_type))
  return -VAR_0;

 switch (VAR_18->port_type) {
 case 129:
 case 132:
 case 128:
  VAR_23 = FUNC_1(VAR_22, VAR_22->mbox, VAR_18->tx_chan,
    VAR_9, VAR_10,
    VAR_11, &VAR_19);
  if (VAR_23)
   return VAR_23;
  VAR_23 = FUNC_1(VAR_22, VAR_22->mbox, VAR_18->tx_chan,
    VAR_9, VAR_14,
    VAR_15, &VAR_20);
  if (VAR_23)
   return VAR_23;

  if (!VAR_19 || (VAR_20 & 4)) {
   VAR_17->type = VAR_1;
   VAR_17->eeprom_len = VAR_2;
  } else {
   VAR_17->type = VAR_5;
   VAR_17->eeprom_len = VAR_6;
  }
  break;

 case 131:
 case 130:
 case 133:
 case 135:
 case 134:
  VAR_23 = FUNC_1(VAR_22, VAR_22->mbox, VAR_18->tx_chan,
    VAR_9, VAR_12,
    VAR_13, &VAR_21);



  if (VAR_23)
   return VAR_23;
  if (VAR_21 >= 0x3) {
   VAR_17->type = VAR_7;
   VAR_17->eeprom_len = VAR_8;
  } else {
   VAR_17->type = VAR_3;
   VAR_17->eeprom_len = VAR_4;
  }
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
