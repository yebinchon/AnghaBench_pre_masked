
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct e1000_phy_info {int autoneg_advertised; int autoneg_mask; } ;
struct TYPE_2__ {int current_mode; } ;
struct e1000_hw {TYPE_1__ fc; struct e1000_phy_info phy; } ;
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
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;




 scalar_t__ FUNC_0 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_17)
{
 struct e1000_phy_info *VAR_18 = &VAR_17->phy;
 s32 VAR_19;
 u16 VAR_20;
 u16 VAR_21 = 0;

 VAR_18->autoneg_advertised &= VAR_18->autoneg_mask;


 VAR_19 = FUNC_0(VAR_17, VAR_15, &VAR_20);
 if (VAR_19)
  return VAR_19;

 if (VAR_18->autoneg_mask & VAR_2) {

  VAR_19 = FUNC_0(VAR_17, VAR_16, &VAR_21);
  if (VAR_19)
   return VAR_19;
 }
 VAR_20 &= ~(VAR_4 |
     VAR_5 |
     VAR_8 | VAR_9);
 VAR_21 &= ~(VAR_1 | VAR_0);

 FUNC_2("autoneg_advertised %x\n", VAR_18->autoneg_advertised);


 if (VAR_18->autoneg_advertised & VAR_11) {
  FUNC_2("Advertise 10mb Half duplex\n");
  VAR_20 |= VAR_9;
 }


 if (VAR_18->autoneg_advertised & VAR_10) {
  FUNC_2("Advertise 10mb Full duplex\n");
  VAR_20 |= VAR_8;
 }


 if (VAR_18->autoneg_advertised & VAR_7) {
  FUNC_2("Advertise 100mb Half duplex\n");
  VAR_20 |= VAR_5;
 }


 if (VAR_18->autoneg_advertised & VAR_6) {
  FUNC_2("Advertise 100mb Full duplex\n");
  VAR_20 |= VAR_4;
 }


 if (VAR_18->autoneg_advertised & VAR_3)
  FUNC_2("Advertise 1000mb Half duplex request denied!\n");


 if (VAR_18->autoneg_advertised & VAR_2) {
  FUNC_2("Advertise 1000mb Full duplex\n");
  VAR_21 |= VAR_0;
 }
 switch (VAR_17->fc.current_mode) {
 case 130:



  VAR_20 &=
      ~(VAR_12 | VAR_13);
  break;
 case 129:
  VAR_20 |=
      (VAR_12 | VAR_13);
  break;
 case 128:



  VAR_20 |= VAR_12;
  VAR_20 &= ~VAR_13;
  break;
 case 131:



  VAR_20 |=
      (VAR_12 | VAR_13);
  break;
 default:
  FUNC_2("Flow control param set incorrectly\n");
  return -VAR_14;
 }

 VAR_19 = FUNC_1(VAR_17, VAR_15, VAR_20);
 if (VAR_19)
  return VAR_19;

 FUNC_2("Auto-Neg Advertising %x\n", VAR_20);

 if (VAR_18->autoneg_mask & VAR_2)
  VAR_19 = FUNC_1(VAR_17, VAR_16, VAR_21);

 return VAR_19;
}
