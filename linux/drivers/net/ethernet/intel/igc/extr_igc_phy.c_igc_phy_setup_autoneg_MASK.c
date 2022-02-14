
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {scalar_t__ (* write_reg ) (struct igc_hw*,int,int) ;scalar_t__ (* read_reg ) (struct igc_hw*,int,int*) ;} ;
struct igc_phy_info {int autoneg_advertised; int autoneg_mask; scalar_t__ id; TYPE_2__ ops; } ;
struct TYPE_3__ {int current_mode; } ;
struct igc_hw {struct igc_phy_info phy; TYPE_1__ fc; } ;
typedef scalar_t__ s32 ;


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
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (char*,...) ;




 scalar_t__ FUNC_1 (struct igc_hw*,int,int*) ;
 scalar_t__ FUNC_2 (struct igc_hw*,int,int*) ;
 scalar_t__ FUNC_3 (struct igc_hw*,int,int*) ;
 scalar_t__ FUNC_4 (struct igc_hw*,int,int) ;
 scalar_t__ FUNC_5 (struct igc_hw*,int,int) ;
 scalar_t__ FUNC_6 (struct igc_hw*,int,int) ;

__attribute__((used)) static s32 FUNC_7(struct igc_hw *VAR_24)
{
 struct igc_phy_info *VAR_25 = &VAR_24->phy;
 u16 VAR_26 = 0;
 u16 VAR_27 = 0;
 u16 VAR_28;
 s32 VAR_29;

 VAR_25->autoneg_advertised &= VAR_25->autoneg_mask;


 VAR_29 = VAR_25->ops.read_reg(VAR_24, VAR_22, &VAR_28);
 if (VAR_29)
  return VAR_29;

 if (VAR_25->autoneg_mask & VAR_0) {

  VAR_29 = VAR_25->ops.read_reg(VAR_24, VAR_21,
         &VAR_27);
  if (VAR_29)
   return VAR_29;
 }

 if ((VAR_25->autoneg_mask & VAR_6) &&
     VAR_24->phy.id == VAR_12) {

  VAR_29 = VAR_25->ops.read_reg(VAR_24, (VAR_23 <<
         VAR_14) |
         VAR_8,
         &VAR_26);

  if (VAR_29)
   return VAR_29;
 }
 VAR_28 &= ~(VAR_15 |
     VAR_16 |
     VAR_17 |
     VAR_18);
 VAR_27 &= ~(VAR_10 | VAR_9);

 FUNC_0("autoneg_advertised %x\n", VAR_25->autoneg_advertised);


 if (VAR_25->autoneg_advertised & VAR_5) {
  FUNC_0("Advertise 10mb Half duplex\n");
  VAR_28 |= VAR_18;
 }


 if (VAR_25->autoneg_advertised & VAR_4) {
  FUNC_0("Advertise 10mb Full duplex\n");
  VAR_28 |= VAR_17;
 }


 if (VAR_25->autoneg_advertised & VAR_3) {
  FUNC_0("Advertise 100mb Half duplex\n");
  VAR_28 |= VAR_16;
 }


 if (VAR_25->autoneg_advertised & VAR_2) {
  FUNC_0("Advertise 100mb Full duplex\n");
  VAR_28 |= VAR_15;
 }


 if (VAR_25->autoneg_advertised & VAR_1)
  FUNC_0("Advertise 1000mb Half duplex request denied!\n");


 if (VAR_25->autoneg_advertised & VAR_0) {
  FUNC_0("Advertise 1000mb Full duplex\n");
  VAR_27 |= VAR_9;
 }


 if (VAR_25->autoneg_advertised & VAR_7)
  FUNC_0("Advertise 2500mb Half duplex request denied!\n");


 if (VAR_25->autoneg_advertised & VAR_6) {
  FUNC_0("Advertise 2500mb Full duplex\n");
  VAR_26 |= VAR_11;
 } else {
  VAR_26 &= ~VAR_11;
 }
 switch (VAR_24->fc.current_mode) {
 case 130:



  VAR_28 &= ~(VAR_19 | VAR_20);
  break;
 case 129:
  VAR_28 |= (VAR_19 | VAR_20);
  break;
 case 128:



  VAR_28 |= VAR_19;
  VAR_28 &= ~VAR_20;
  break;
 case 131:



  VAR_28 |= (VAR_19 | VAR_20);
  break;
 default:
  FUNC_0("Flow control param set incorrectly\n");
  return -VAR_13;
 }

 VAR_29 = VAR_25->ops.write_reg(VAR_24, VAR_22, VAR_28);
 if (VAR_29)
  return VAR_29;

 FUNC_0("Auto-Neg Advertising %x\n", VAR_28);

 if (VAR_25->autoneg_mask & VAR_0)
  VAR_29 = VAR_25->ops.write_reg(VAR_24, VAR_21,
          VAR_27);

 if ((VAR_25->autoneg_mask & VAR_6) &&
     VAR_24->phy.id == VAR_12)
  VAR_29 = VAR_25->ops.write_reg(VAR_24,
          (VAR_23 <<
          VAR_14) |
          VAR_8,
          VAR_26);

 return VAR_29;
}
