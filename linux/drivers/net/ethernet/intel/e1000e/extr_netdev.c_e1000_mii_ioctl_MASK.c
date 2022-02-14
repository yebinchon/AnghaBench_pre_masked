
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mii_ioctl_data {int reg_num; int val_out; int phy_id; } ;
struct ifreq {int dummy; } ;
struct TYPE_6__ {int bmcr; int bmsr; int advertise; int lpa; int expansion; int ctrl1000; int stat1000; int estatus; } ;
struct TYPE_4__ {scalar_t__ media_type; int id; int addr; } ;
struct TYPE_5__ {TYPE_1__ phy; } ;
struct e1000_adapter {TYPE_3__ phy_regs; TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct e1000_adapter*) ;
 struct mii_ioctl_data* FUNC_1 (struct ifreq*) ;
 struct e1000_adapter* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3, struct ifreq *VAR_4,
      int VAR_5)
{
 struct e1000_adapter *VAR_6 = FUNC_2(VAR_3);
 struct mii_ioctl_data *VAR_7 = FUNC_1(VAR_4);

 if (VAR_6->hw.phy.media_type != VAR_2)
  return -VAR_1;

 switch (VAR_5) {
 case 130:
  VAR_7->phy_id = VAR_6->hw.phy.addr;
  break;
 case 129:
  FUNC_0(VAR_6);

  switch (VAR_7->reg_num & 0x1F) {
  case 139:
   VAR_7->val_out = VAR_6->phy_regs.bmcr;
   break;
  case 138:
   VAR_7->val_out = VAR_6->phy_regs.bmsr;
   break;
  case 133:
   VAR_7->val_out = (VAR_6->hw.phy.id >> 16);
   break;
  case 132:
   VAR_7->val_out = (VAR_6->hw.phy.id & 0xFFFF);
   break;
  case 140:
   VAR_7->val_out = VAR_6->phy_regs.advertise;
   break;
  case 134:
   VAR_7->val_out = VAR_6->phy_regs.lpa;
   break;
  case 135:
   VAR_7->val_out = VAR_6->phy_regs.expansion;
   break;
  case 137:
   VAR_7->val_out = VAR_6->phy_regs.ctrl1000;
   break;
  case 131:
   VAR_7->val_out = VAR_6->phy_regs.stat1000;
   break;
  case 136:
   VAR_7->val_out = VAR_6->phy_regs.estatus;
   break;
  default:
   return -VAR_0;
  }
  break;
 case 128:
 default:
  return -VAR_1;
 }
 return 0;
}
