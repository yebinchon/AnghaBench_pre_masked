
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct mv88e6xxx_chip {int dev; struct dsa_switch* ds; TYPE_1__* ports; } ;
struct dsa_switch {int dummy; } ;
typedef int phy_interface_t ;
struct TYPE_2__ {int cmode; } ;


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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct dsa_switch*,int,int) ;
 int FUNC_2 (struct mv88e6xxx_chip*,int,int ,int ,int*) ;
 int FUNC_3 (struct mv88e6xxx_chip*,int,int,int,int,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct mv88e6xxx_chip *VAR_21,
         int VAR_22, u8 VAR_23)
{
 u8 VAR_24 = VAR_21->ports[VAR_22].cmode;
 struct dsa_switch *VAR_25 = VAR_21->ds;
 int VAR_26 = VAR_2;
 int VAR_27 = VAR_20;
 phy_interface_t VAR_28;
 int VAR_29, VAR_30;
 u16 VAR_31;

 VAR_30 = FUNC_2(VAR_21, VAR_23, VAR_5,
        VAR_6, &VAR_31);
 if (VAR_30) {
  FUNC_0(VAR_21->dev, "can't read SGMII PHY status: %d\n", VAR_30);
  return;
 }

 VAR_29 = VAR_31 & VAR_8 ?
        VAR_4 : VAR_3;

 if (VAR_31 & VAR_9) {
  VAR_26 = VAR_31 & VAR_7 ?
    VAR_0 : VAR_1;

  switch (VAR_31 & VAR_10) {
  case 131:
   if (VAR_24 == 129)
    VAR_27 = VAR_19;
   else
    VAR_27 = VAR_18;
   break;
  case 132:
   VAR_27 = VAR_17;
   break;
  case 133:
   VAR_27 = VAR_16;
   break;
  default:
   FUNC_0(VAR_21->dev, "invalid PHY speed\n");
   return;
  }
 }

 switch (VAR_24) {
 case 128:
  VAR_28 = VAR_15;
  break;
 case 130:
  VAR_28 = VAR_12;
  break;
 case 129:
  VAR_28 = VAR_13;
  break;
 default:
  VAR_28 = VAR_14;
 }

 VAR_30 = FUNC_3(VAR_21, VAR_22, VAR_29, VAR_27, VAR_26,
           VAR_11, VAR_28);
 if (VAR_30)
  FUNC_0(VAR_21->dev, "can't propagate PHY settings to MAC: %d\n",
   VAR_30);
 else
  FUNC_1(VAR_25, VAR_22, VAR_29 == VAR_4);
}
