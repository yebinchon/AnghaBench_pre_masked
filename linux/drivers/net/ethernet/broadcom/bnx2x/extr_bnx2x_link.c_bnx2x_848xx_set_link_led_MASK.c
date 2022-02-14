
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct link_params {int port; int hw_led_mode; int link_flags; struct bnx2x* bp; } ;
struct bnx2x_phy {int type; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*) ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (int ,char*,...) ;




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
 int FUNC_4 (struct bnx2x*,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_5 (struct bnx2x*,int ,int) ;
 int FUNC_6 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int*) ;
 int FUNC_7 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;
 int FUNC_8 (struct link_params*) ;

__attribute__((used)) static void FUNC_9(struct bnx2x_phy *VAR_20,
         struct link_params *VAR_21, u8 VAR_22)
{
 struct bnx2x *VAR_23 = VAR_21->bp;
 u16 VAR_24;
 u8 VAR_25;

 if (!(FUNC_1(VAR_23)))
  VAR_25 = FUNC_0(VAR_23);
 else
  VAR_25 = VAR_21->port;

 switch (VAR_22) {
 case 130:

  FUNC_3(VAR_12, "Port 0x%x: LED MODE OFF\n", VAR_25);

  if ((VAR_21->hw_led_mode << VAR_19) ==
      VAR_17) {


   FUNC_7(VAR_23, VAR_20,
     VAR_1,
     VAR_2,
     0x0);

   FUNC_7(VAR_23, VAR_20,
     VAR_1,
     VAR_3,
     0x0);

   FUNC_7(VAR_23, VAR_20,
     VAR_1,
     VAR_4,
     0x0);

   FUNC_7(VAR_23, VAR_20,
     VAR_1,
     VAR_5,
     0x0);

  } else {

   FUNC_7(VAR_23, VAR_20,
      VAR_1,
      VAR_2,
      0x0);

   if (VAR_20->type ==
    VAR_16) {

    FUNC_7(VAR_23, VAR_20,
       VAR_1,
       VAR_3,
       0x0);

    FUNC_7(VAR_23, VAR_20,
       VAR_1,
       VAR_4,
       0x0);
   }
  }
  break;
 case 131:

  FUNC_3(VAR_12, "Port 0x%x: LED MODE FRONT PANEL OFF\n",
     VAR_25);

  if ((VAR_21->hw_led_mode << VAR_19) ==
      VAR_17) {


   FUNC_7(VAR_23, VAR_20,
      VAR_1,
      VAR_2,
      0x0);

   FUNC_7(VAR_23, VAR_20,
      VAR_1,
      VAR_3,
      0x0);

   FUNC_7(VAR_23, VAR_20,
      VAR_1,
      VAR_4,
      0x0);

   FUNC_7(VAR_23, VAR_20,
      VAR_1,
      VAR_5,
      0x20);

  } else {
   FUNC_7(VAR_23, VAR_20,
      VAR_1,
      VAR_2,
      0x0);
   if (VAR_20->type ==
       VAR_15) {



    if (FUNC_4(VAR_23, VAR_14 +
        VAR_21->port*4) &
        VAR_13) {
     VAR_21->link_flags |=
     VAR_0;

     FUNC_5(
      VAR_23,
      VAR_14 +
      VAR_21->port*4,
      VAR_13);
    }
    FUNC_7(VAR_23, VAR_20,
       VAR_1,
       VAR_9,
       0x0);
   }
   if (VAR_20->type ==
    VAR_16) {

    FUNC_7(VAR_23, VAR_20,
       VAR_1,
       VAR_3,
       0x0);

    FUNC_7(VAR_23, VAR_20,
       VAR_1,
       VAR_4,
       0x0);
   }
  }
  break;
 case 129:

  FUNC_3(VAR_12, "Port 0x%x: LED MODE ON\n", VAR_25);

  if ((VAR_21->hw_led_mode << VAR_19) ==
      VAR_17) {

   FUNC_6(VAR_23, VAR_20,
     VAR_1,
     VAR_6,
     &VAR_24);
   VAR_24 &= 0x8000;
   VAR_24 |= 0x2492;

   FUNC_7(VAR_23, VAR_20,
      VAR_1,
      VAR_6,
      VAR_24);


   FUNC_7(VAR_23, VAR_20,
      VAR_1,
      VAR_2,
      0x0);

   FUNC_7(VAR_23, VAR_20,
      VAR_1,
      VAR_3,
      0x20);

   FUNC_7(VAR_23, VAR_20,
      VAR_1,
      VAR_4,
      0x20);

   FUNC_7(VAR_23, VAR_20,
      VAR_1,
      VAR_5,
      0x0);
  } else {
   FUNC_7(VAR_23, VAR_20,
      VAR_1,
      VAR_2,
      0x20);
   if (VAR_20->type ==
       VAR_15) {



    if (FUNC_4(VAR_23, VAR_14 +
        VAR_21->port*4) &
        VAR_13) {
     VAR_21->link_flags |=
     VAR_0;

     FUNC_5(
      VAR_23,
      VAR_14 +
      VAR_21->port*4,
      VAR_13);
    }
   }
   if (VAR_20->type ==
       VAR_16) {

    FUNC_6(VAR_23, VAR_20,
      VAR_1,
      VAR_6,
      &VAR_24);
    VAR_24 &= ~(7<<6);
    VAR_24 |= (2<<6);
    FUNC_7(VAR_23, VAR_20,
       VAR_1,
       VAR_6,
       VAR_24);
    FUNC_7(VAR_23, VAR_20,
       VAR_1,
       VAR_4,
       0x20);
   } else {
    FUNC_7(VAR_23, VAR_20,
       VAR_1,
       VAR_9,
       0x20);
   }
  }
  break;

 case 128:

  FUNC_3(VAR_12, "Port 0x%x: LED MODE OPER\n", VAR_25);

  if ((VAR_21->hw_led_mode << VAR_19) ==
      VAR_17) {


   FUNC_6(VAR_23, VAR_20,
     VAR_1,
     VAR_6,
     &VAR_24);

   if (!((VAR_24 &
          VAR_7)
     >> VAR_8)) {
    FUNC_3(VAR_12, "Setting LINK_SIGNAL\n");
    FUNC_7(VAR_23, VAR_20,
       VAR_1,
       VAR_6,
       0xa492);
   }


   FUNC_7(VAR_23, VAR_20,
      VAR_1,
      VAR_2,
      0x10);

   FUNC_7(VAR_23, VAR_20,
      VAR_1,
      VAR_3,
      0x80);

   FUNC_7(VAR_23, VAR_20,
      VAR_1,
      VAR_4,
      0x98);

   FUNC_7(VAR_23, VAR_20,
      VAR_1,
      VAR_5,
      0x40);

  } else {




   VAR_24 = ((VAR_21->hw_led_mode <<
    VAR_19) ==
          VAR_18) ? 0x98 : 0x80;

   FUNC_7(VAR_23, VAR_20,
      VAR_1,
      VAR_2,
      VAR_24);


   FUNC_6(VAR_23, VAR_20,
     VAR_1,
     VAR_6,
     &VAR_24);
   VAR_24 &= ~(7<<6);
   VAR_24 |= (1<<6);
   FUNC_7(VAR_23, VAR_20,
      VAR_1,
      VAR_6,
      VAR_24);
   if (VAR_20->type ==
       VAR_16) {
    FUNC_7(VAR_23, VAR_20,
       VAR_1,
       VAR_3,
       0x18);
    FUNC_7(VAR_23, VAR_20,
       VAR_1,
       VAR_4,
       0x06);
   }
   if (VAR_20->type ==
       VAR_15) {



    FUNC_7(VAR_23, VAR_20,
       VAR_1,
       VAR_9,
       0x40);
    if (VAR_21->link_flags &
        VAR_0) {
     FUNC_8(VAR_21);
     VAR_21->link_flags &=
      ~VAR_0;
    }
   }
  }
  break;
 }




 if (FUNC_2(VAR_23)) {
  FUNC_6(VAR_23, VAR_20, VAR_10,
    VAR_11, &VAR_24);
 }
}
