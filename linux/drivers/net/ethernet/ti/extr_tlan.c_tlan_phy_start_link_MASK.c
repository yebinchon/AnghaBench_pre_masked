
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct tlan_priv {int* phy; size_t phy_num; scalar_t__ speed; scalar_t__ duplex; int tlan_full_duplex; scalar_t__ aui; } ;
struct net_device {int base_addr; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct net_device*,char*) ;
 struct tlan_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct net_device*,int,int ,int*) ;
 int FUNC_6 (struct net_device*,int,int ,int) ;
 int FUNC_7 (struct net_device*,int,int ) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_21)
{
 struct tlan_priv *VAR_22 = FUNC_3(VAR_21);
 u16 VAR_23;
 u16 VAR_24;
 u16 VAR_25;
 u16 VAR_26;
 u16 VAR_27;
 u16 VAR_28;

 VAR_26 = VAR_22->phy[VAR_22->phy_num];
 FUNC_0(VAR_7, "%s: Trying to activate link.\n", VAR_21->name);
 FUNC_5(VAR_21, VAR_26, VAR_5, &VAR_27);
 FUNC_5(VAR_21, VAR_26, VAR_5, &VAR_23);

 if ((VAR_27 & VAR_6) &&
     (!VAR_22->aui)) {
  VAR_23 = VAR_27 >> 11;
  if (VAR_22->speed == VAR_14 &&
      VAR_22->duplex == VAR_9) {
   FUNC_6(VAR_21, VAR_26, VAR_4, 0x0000);
  } else if (VAR_22->speed == VAR_14 &&
      VAR_22->duplex == VAR_8) {
   VAR_22->tlan_full_duplex = 1;
   FUNC_6(VAR_21, VAR_26, VAR_4, 0x0100);
  } else if (VAR_22->speed == VAR_15 &&
      VAR_22->duplex == VAR_9) {
   FUNC_6(VAR_21, VAR_26, VAR_4, 0x2000);
  } else if (VAR_22->speed == VAR_15 &&
      VAR_22->duplex == VAR_8) {
   VAR_22->tlan_full_duplex = 1;
   FUNC_6(VAR_21, VAR_26, VAR_4, 0x2100);
  } else {


   FUNC_6(VAR_21, VAR_26, VAR_1,
        (VAR_23 << 5) | 1);

   FUNC_6(VAR_21, VAR_26, VAR_4, 0x1000);

   FUNC_6(VAR_21, VAR_26, VAR_4, 0x1200);





   FUNC_2(VAR_21, "Starting autonegotiation\n");
   FUNC_7(VAR_21, (2*VAR_0), VAR_18);
   return;
  }

 }

 if ((VAR_22->aui) && (VAR_22->phy_num != 0)) {
  VAR_22->phy_num = 0;
  VAR_25 = VAR_11 | VAR_10
   | VAR_12;
  FUNC_4(VAR_21->base_addr, VAR_13, VAR_25);
  FUNC_7(VAR_21, FUNC_1(40), VAR_19);
  return;
 } else if (VAR_22->phy_num == 0) {
  VAR_24 = 0;
  FUNC_5(VAR_21, VAR_26, VAR_20, &VAR_28);
  if (VAR_22->aui) {
   VAR_28 |= VAR_16;
  } else {
   VAR_28 &= ~VAR_16;
   if (VAR_22->duplex == VAR_8) {
    VAR_24 |= VAR_2;
    VAR_22->tlan_full_duplex = 1;
   }
   if (VAR_22->speed == VAR_15)
    VAR_24 |= VAR_3;
  }
  FUNC_6(VAR_21, VAR_26, VAR_4, VAR_24);
  FUNC_6(VAR_21, VAR_26, VAR_20, VAR_28);
 }




 FUNC_7(VAR_21, (4*VAR_0), VAR_17);

}
