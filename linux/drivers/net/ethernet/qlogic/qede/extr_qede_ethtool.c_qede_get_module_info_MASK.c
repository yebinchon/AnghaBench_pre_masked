
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct qede_dev {int cdev; TYPE_2__* ops; } ;
struct net_device {int dummy; } ;
struct ethtool_modinfo {int eeprom_len; int type; } ;
struct TYPE_4__ {TYPE_1__* common; } ;
struct TYPE_3__ {int (* read_module_eeprom ) (int ,int*,int ,int ,int) ;} ;


 int FUNC_0 (struct qede_dev*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct qede_dev* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int*,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_8,
    struct ethtool_modinfo *VAR_9)
{
 struct qede_dev *VAR_10 = FUNC_1(VAR_8);
 u8 VAR_11[4];
 int VAR_12;


 VAR_12 = VAR_10->ops->common->read_module_eeprom(VAR_10->cdev, VAR_11,
         VAR_7, 0, 4);
 if (VAR_12) {
  FUNC_0(VAR_10, "Failed reading EEPROM data %d\n", VAR_12);
  return VAR_12;
 }

 switch (VAR_11[0]) {
 case 0x3:
  VAR_9->type = VAR_3;
  VAR_9->eeprom_len = VAR_4;
  break;
 case 0xc:
 case 0xd:
  VAR_9->type = VAR_1;
  VAR_9->eeprom_len = VAR_2;
  break;
 case 0x11:
  VAR_9->type = VAR_5;
  VAR_9->eeprom_len = VAR_6;
  break;
 default:
  FUNC_0(VAR_10, "Unknown transceiver type 0x%x\n", VAR_11[0]);
  return -VAR_0;
 }

 return 0;
}
