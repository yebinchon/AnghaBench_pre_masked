
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ionic_xcvr_status {int* sprom; } ;
struct ionic_lif {TYPE_3__* ionic; } ;
struct ionic_dev {TYPE_2__* port_info; } ;
struct ethtool_modinfo {int eeprom_len; int type; } ;
struct TYPE_6__ {struct ionic_dev idev; } ;
struct TYPE_4__ {struct ionic_xcvr_status xcvr; } ;
struct TYPE_5__ {TYPE_1__ status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*,char*,int) ;
 struct ionic_lif* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_4,
     struct ethtool_modinfo *VAR_5)

{
 struct ionic_lif *VAR_6 = FUNC_1(VAR_4);
 struct ionic_dev *VAR_7 = &VAR_6->ionic->idev;
 struct ionic_xcvr_status *VAR_8;

 VAR_8 = &VAR_7->port_info->status.xcvr;


 switch (VAR_8->sprom[0]) {
 case 0x03:
  VAR_5->type = VAR_0;
  VAR_5->eeprom_len = VAR_1;
  break;
 case 0x0D:
 case 0x11:
  VAR_5->type = VAR_2;
  VAR_5->eeprom_len = VAR_3;
  break;
 default:
  FUNC_0(VAR_4, "unknown xcvr type 0x%02x\n",
       VAR_8->sprom[0]);
  break;
 }

 return 0;
}
