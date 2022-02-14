
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int base_addr; int irq; int if_port; int name; int * dev_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static void
FUNC_10(struct net_device *VAR_25)
{
 int VAR_26, VAR_27, VAR_28;
 int VAR_29 = VAR_25->base_addr;


 FUNC_5(0x0001, VAR_29 + 4);


 FUNC_5((VAR_25->irq << 12) | 0x0f00, VAR_29 + VAR_21);


 FUNC_0(2);

 for (VAR_26 = 0; VAR_26 < 6; VAR_26++)
  FUNC_4(VAR_25->dev_addr[VAR_26], VAR_29 + VAR_26);

 if ((VAR_25->if_port & 0x03) == 3)

  FUNC_5(VAR_14, VAR_29 + VAR_1);
 else if ((VAR_25->if_port & 0x03) == 0) {


  FUNC_0(0);
  VAR_27 = (FUNC_9(VAR_29, 0x14) & 0x400f) |
   (FUNC_9(VAR_29, 0x0d) & 0xBff0);

  FUNC_0(4);
  VAR_28 = FUNC_2(VAR_29 + VAR_23);
  VAR_28 = (VAR_28 | VAR_2);
  FUNC_8("%s: ", VAR_25->name);
  switch (VAR_25->if_port & 0x0c) {
   case 12:

    if (VAR_27 & 0x000f) {
     FUNC_6("Forcing 3c5x9b full-duplex mode");
     break;
    }

   case 8:

    if ((VAR_27 & 0x000f) && (VAR_27 & 0x8000)) {
     FUNC_6("Setting 3c5x9b full-duplex mode (from EEPROM configuration bit)");
     break;
    }

   default:

    FUNC_6("Setting 3c5x9/3c5x9B half-duplex mode");
    VAR_28 = (VAR_28 & ~VAR_2);
  }

  FUNC_5(VAR_28, VAR_29 + VAR_23);
  FUNC_6(" if_port: %d, sw_info: %4.4x\n", VAR_25->if_port, VAR_27);
  if (VAR_24 > 3)
   FUNC_7("%s: 3c5x9 net diag word is now: %4.4x.\n", VAR_25->name, VAR_28);

  FUNC_5(FUNC_2(VAR_29 + VAR_22) | VAR_5, VAR_29 + VAR_22);
 }


 FUNC_5(VAR_15, VAR_29 + VAR_1);
 FUNC_0(6);
 for (VAR_26 = 0; VAR_26 < 9; VAR_26++)
  FUNC_1(VAR_29 + VAR_26);
 FUNC_2(VAR_29 + 10);
 FUNC_2(VAR_29 + 12);


 FUNC_0(1);


 FUNC_5(VAR_12 | VAR_10 | VAR_6, VAR_29 + VAR_1);
 FUNC_5(VAR_16, VAR_29 + VAR_1);

 FUNC_5(VAR_9, VAR_29 + VAR_1);
 FUNC_5(VAR_20, VAR_29 + VAR_1);

 FUNC_5(VAR_13 | 0xff, VAR_29 + VAR_1);

 FUNC_5(VAR_0 | VAR_3 | VAR_18 | VAR_8 | VAR_4,
   VAR_29 + VAR_1);
 FUNC_5(VAR_11 | VAR_3|VAR_18|VAR_19|VAR_7|VAR_17,
   VAR_29 + VAR_1);

 FUNC_3(VAR_25);
}
