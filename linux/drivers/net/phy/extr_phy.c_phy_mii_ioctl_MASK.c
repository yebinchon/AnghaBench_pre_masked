
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int addr; int bus; } ;
struct phy_device {TYPE_2__* drv; TYPE_1__ mdio; int advertising; int autoneg; int speed; int duplex; } ;
struct mii_ioctl_data {int val_in; int phy_id; int reg_num; int val_out; } ;
struct ifreq {int dummy; } ;
struct TYPE_4__ {int (* hwtstamp ) (struct phy_device*,struct ifreq*) ;} ;


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
 struct mii_ioctl_data* FUNC_0 (struct ifreq*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int,int,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (struct phy_device*) ;
 int FUNC_9 (struct phy_device*) ;
 int FUNC_10 (struct phy_device*,struct ifreq*) ;

int FUNC_11(struct phy_device *VAR_14, struct ifreq *VAR_15, int VAR_16)
{
 struct mii_ioctl_data *VAR_17 = FUNC_0(VAR_15);
 u16 VAR_18 = VAR_17->val_in;
 bool VAR_19 = 0;
 int VAR_20, VAR_21;

 switch (VAR_16) {
 case 131:
  VAR_17->phy_id = VAR_14->mdio.addr;


 case 130:
  if (FUNC_2(VAR_17->phy_id)) {
   VAR_20 = FUNC_3(VAR_17->phy_id);
   VAR_21 = FUNC_1(VAR_17->phy_id);
   VAR_21 = VAR_10 | VAR_21 << 16 | VAR_17->reg_num;
  } else {
   VAR_20 = VAR_17->phy_id;
   VAR_21 = VAR_17->reg_num;
  }
  VAR_17->val_out = FUNC_4(VAR_14->mdio.bus, VAR_20,
       VAR_21);
  return 0;

 case 128:
  if (FUNC_2(VAR_17->phy_id)) {
   VAR_20 = FUNC_3(VAR_17->phy_id);
   VAR_21 = FUNC_1(VAR_17->phy_id);
   VAR_21 = VAR_10 | VAR_21 << 16 | VAR_17->reg_num;
  } else {
   VAR_20 = VAR_17->phy_id;
   VAR_21 = VAR_17->reg_num;
  }
  if (VAR_20 == VAR_14->mdio.addr) {
   switch (VAR_21) {
   case 133:
    if ((VAR_18 & (VAR_4 | VAR_2)) == 0) {
     if (VAR_14->autoneg == VAR_1)
      VAR_19 = 1;
     VAR_14->autoneg = VAR_0;
     if (VAR_18 & VAR_3)
      VAR_14->duplex = VAR_7;
     else
      VAR_14->duplex = VAR_8;
     if (VAR_18 & VAR_6)
      VAR_14->speed = VAR_13;
     else if (VAR_18 & VAR_5)
      VAR_14->speed = VAR_12;
     else VAR_14->speed = VAR_11;
    }
    else {
     if (VAR_14->autoneg == VAR_0)
      VAR_19 = 1;
     VAR_14->autoneg = VAR_1;
    }
    break;
   case 134:
    FUNC_6(VAR_14->advertising,
          VAR_18);
    VAR_19 = 1;
    break;
   case 132:
    FUNC_7(VAR_14->advertising,
               VAR_18);
    VAR_19 = 1;
    break;
   default:

    break;
   }
  }

  FUNC_5(VAR_14->mdio.bus, VAR_20, VAR_21, VAR_18);

  if (VAR_20 == VAR_14->mdio.addr &&
      VAR_21 == 133 &&
      VAR_18 & VAR_4)
   return FUNC_8(VAR_14);

  if (VAR_19)
   return FUNC_9(VAR_14);

  return 0;

 case 129:
  if (VAR_14->drv && VAR_14->drv->hwtstamp)
   return VAR_14->drv->hwtstamp(VAR_14, VAR_15);


 default:
  return -VAR_9;
 }
}
