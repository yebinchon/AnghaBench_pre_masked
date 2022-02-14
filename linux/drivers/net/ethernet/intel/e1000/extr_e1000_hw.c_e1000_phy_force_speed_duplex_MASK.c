
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct e1000_hw {scalar_t__ forced_speed_duplex; scalar_t__ phy_type; scalar_t__ mac_type; int autoneg; scalar_t__ wait_autoneg_complete; int fc; } ;
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
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 int FUNC_0 (struct e1000_hw*) ;
 scalar_t__ VAR_34 ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,scalar_t__) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;

__attribute__((used)) static s32 FUNC_10(struct e1000_hw *VAR_35)
{
 u32 VAR_36;
 s32 VAR_37;
 u16 VAR_38;
 u16 VAR_39;
 u16 VAR_40;
 u16 VAR_41;


 VAR_35->fc = VAR_8;

 FUNC_5("hw->fc = %d\n", VAR_35->fc);


 VAR_36 = FUNC_6(VAR_0);


 VAR_36 |= (VAR_5 | VAR_4);
 VAR_36 &= ~(VAR_1);


 VAR_36 &= ~VAR_2;


 VAR_37 = FUNC_3(VAR_35, VAR_25, &VAR_38);
 if (VAR_37)
  return VAR_37;



 VAR_38 &= ~VAR_18;


 if (VAR_35->forced_speed_duplex == VAR_28 ||
     VAR_35->forced_speed_duplex == VAR_30) {



  VAR_36 |= VAR_3;
  VAR_38 |= VAR_19;
  FUNC_5("Full Duplex\n");
 } else {



  VAR_36 &= ~VAR_3;
  VAR_38 &= ~VAR_19;
  FUNC_5("Half Duplex\n");
 }


 if (VAR_35->forced_speed_duplex == VAR_28 ||
     VAR_35->forced_speed_duplex == VAR_29) {

  VAR_36 |= VAR_6;
  VAR_38 |= VAR_22;
  VAR_38 &= ~(VAR_23 | VAR_21);
  FUNC_5("Forcing 100mb ");
 } else {

  VAR_36 &= ~(VAR_7 | VAR_6);
  VAR_38 |= VAR_21;
  VAR_38 &= ~(VAR_23 | VAR_22);
  FUNC_5("Forcing 10mb ");
 }

 FUNC_0(VAR_35);


 FUNC_7(VAR_0, VAR_36);

 if (VAR_35->phy_type == VAR_34) {
  VAR_37 =
      FUNC_3(VAR_35, VAR_15, &VAR_40);
  if (VAR_37)
   return VAR_37;




  VAR_40 &= ~VAR_17;
  VAR_37 =
      FUNC_4(VAR_35, VAR_15, VAR_40);
  if (VAR_37)
   return VAR_37;

  FUNC_5("M88E1000 PSCR: %x\n", VAR_40);


  VAR_38 |= VAR_20;


 } else {



  VAR_37 =
      FUNC_3(VAR_35, VAR_10, &VAR_40);
  if (VAR_37)
   return VAR_37;

  VAR_40 &= ~VAR_11;
  VAR_40 &= ~VAR_12;

  VAR_37 =
      FUNC_4(VAR_35, VAR_10, VAR_40);
  if (VAR_37)
   return VAR_37;
 }


 VAR_37 = FUNC_4(VAR_35, VAR_25, VAR_38);
 if (VAR_37)
  return VAR_37;

 FUNC_9(1);
 if (VAR_35->wait_autoneg_complete) {

  FUNC_5("Waiting for forced speed/duplex link.\n");
  VAR_39 = 0;


  for (VAR_41 = VAR_26; VAR_41 > 0; VAR_41--) {



   VAR_37 =
       FUNC_3(VAR_35, VAR_27, &VAR_39);
   if (VAR_37)
    return VAR_37;

   VAR_37 =
       FUNC_3(VAR_35, VAR_27, &VAR_39);
   if (VAR_37)
    return VAR_37;

   if (VAR_39 & VAR_24)
    break;
   FUNC_8(100);
  }
  if ((VAR_41 == 0) && (VAR_35->phy_type == VAR_34)) {



   VAR_37 = FUNC_1(VAR_35);
   if (VAR_37) {
    FUNC_5("Error Resetting PHY DSP\n");
    return VAR_37;
   }
  }



  for (VAR_41 = VAR_26; VAR_41 > 0; VAR_41--) {
   if (VAR_39 & VAR_24)
    break;
   FUNC_8(100);



   VAR_37 =
       FUNC_3(VAR_35, VAR_27, &VAR_39);
   if (VAR_37)
    return VAR_37;

   VAR_37 =
       FUNC_3(VAR_35, VAR_27, &VAR_39);
   if (VAR_37)
    return VAR_37;
  }
 }

 if (VAR_35->phy_type == VAR_34) {





  VAR_37 =
      FUNC_3(VAR_35, VAR_14,
           &VAR_40);
  if (VAR_37)
   return VAR_37;

  VAR_40 |= VAR_13;
  VAR_37 =
      FUNC_4(VAR_35, VAR_14,
     VAR_40);
  if (VAR_37)
   return VAR_37;





  VAR_37 =
      FUNC_3(VAR_35, VAR_15, &VAR_40);
  if (VAR_37)
   return VAR_37;

  VAR_40 |= VAR_16;
  VAR_37 =
      FUNC_4(VAR_35, VAR_15, VAR_40);
  if (VAR_37)
   return VAR_37;

  if ((VAR_35->mac_type == VAR_33 ||
       VAR_35->mac_type == VAR_32) &&
      (!VAR_35->autoneg) &&
      (VAR_35->forced_speed_duplex == VAR_30 ||
       VAR_35->forced_speed_duplex == VAR_31)) {
   VAR_37 = FUNC_2(VAR_35);
   if (VAR_37)
    return VAR_37;
  }
 }
 return VAR_9;
}
