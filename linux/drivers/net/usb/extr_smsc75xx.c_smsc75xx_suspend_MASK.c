
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mii_if_info {int phy_id; } ;
struct usbnet {int net; struct mii_if_info mii; scalar_t__* data; } ;
struct usb_interface {int dummy; } ;
struct smsc75xx_priv {int wolopts; scalar_t__ suspend_flags; } ;
struct TYPE_5__ {scalar_t__ event; } ;
typedef TYPE_1__ pm_message_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_1__) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct usbnet*,int) ;
 int FUNC_4 (struct usbnet*,int) ;
 int FUNC_5 (struct usbnet*) ;
 int FUNC_6 (struct usbnet*) ;
 int FUNC_7 (struct usbnet*) ;
 int FUNC_8 (struct usbnet*) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ,int) ;
 int FUNC_11 (struct usbnet*,scalar_t__,int*) ;
 int FUNC_12 (struct usbnet*,scalar_t__,int) ;
 int FUNC_13 (struct usbnet*,int ,int,int) ;
 int FUNC_14 (int const*,int) ;
 struct usbnet* FUNC_15 (struct usb_interface*) ;
 int FUNC_16 (struct usb_interface*) ;
 int FUNC_17 (struct usb_interface*,TYPE_1__) ;

__attribute__((used)) static int FUNC_18(struct usb_interface *VAR_32, pm_message_t VAR_33)
{
 struct usbnet *VAR_34 = FUNC_15(VAR_32);
 struct smsc75xx_priv *VAR_35 = (struct smsc75xx_priv *)(VAR_34->data[0]);
 u32 VAR_36, VAR_37;
 int VAR_38;

 VAR_38 = FUNC_17(VAR_32, VAR_33);
 if (VAR_38 < 0) {
  FUNC_2(VAR_34->net, "usbnet_suspend error\n");
  return VAR_38;
 }

 if (VAR_35->suspend_flags) {
  FUNC_2(VAR_34->net, "error during last resume\n");
  VAR_35->suspend_flags = 0;
 }


 VAR_37 = FUNC_8(VAR_34);

 if (VAR_33.event == VAR_11) {
  VAR_38 = FUNC_3(VAR_34, VAR_37);
  goto done;
 }





 if (!(VAR_35->wolopts & VAR_12) ||
  !(VAR_37 || (VAR_35->wolopts & VAR_17))) {
  FUNC_1(VAR_34->net, "entering SUSPEND2 mode\n");


  VAR_38 = FUNC_11(VAR_34, VAR_19, &VAR_36);
  if (VAR_38 < 0) {
   FUNC_2(VAR_34->net, "Error reading WUCSR\n");
   goto done;
  }

  VAR_36 &= ~(VAR_22 | VAR_25);

  VAR_38 = FUNC_12(VAR_34, VAR_19, VAR_36);
  if (VAR_38 < 0) {
   FUNC_2(VAR_34->net, "Error writing WUCSR\n");
   goto done;
  }

  VAR_38 = FUNC_11(VAR_34, VAR_6, &VAR_36);
  if (VAR_38 < 0) {
   FUNC_2(VAR_34->net, "Error reading PMT_CTL\n");
   goto done;
  }

  VAR_36 &= ~(VAR_7 | VAR_8);

  VAR_38 = FUNC_12(VAR_34, VAR_6, VAR_36);
  if (VAR_38 < 0) {
   FUNC_2(VAR_34->net, "Error writing PMT_CTL\n");
   goto done;
  }

  VAR_38 = FUNC_7(VAR_34);
  goto done;
 }

 if (VAR_35->wolopts & VAR_17) {
  VAR_38 = FUNC_4(VAR_34,
   (VAR_3 | VAR_4));
  if (VAR_38 < 0) {
   FUNC_2(VAR_34->net, "error enabling PHY wakeup ints\n");
   goto done;
  }




  if (!VAR_37) {
   struct mii_if_info *VAR_39 = &VAR_34->mii;
   FUNC_1(VAR_34->net, "entering SUSPEND1 mode\n");


   VAR_38 = FUNC_9(VAR_34->net, VAR_39->phy_id,
    VAR_5);
   if (VAR_38 < 0) {
    FUNC_2(VAR_34->net, "Error reading PHY_MODE_CTRL_STS\n");
    goto done;
   }

   VAR_38 |= VAR_2;

   FUNC_10(VAR_34->net, VAR_39->phy_id,
    VAR_5, VAR_38);


   VAR_38 = FUNC_6(VAR_34);
   goto done;
  }
 }

 if (VAR_35->wolopts & (VAR_16 | VAR_13)) {
  int VAR_40, VAR_41 = 0;


  for (VAR_40 = 0; VAR_40 < VAR_31; VAR_40++) {
   VAR_38 = FUNC_12(VAR_34, VAR_27 + VAR_40 * 4, 0);
   if (VAR_38 < 0) {
    FUNC_2(VAR_34->net, "Error writing WUF_CFGX\n");
    goto done;
   }
  }

  if (VAR_35->wolopts & VAR_16) {
   const u8 VAR_42[] = {0x01, 0x00, 0x5E};
   FUNC_1(VAR_34->net, "enabling multicast detection\n");

   VAR_36 = VAR_30 | VAR_29
    | FUNC_14(VAR_42, 3);
   VAR_38 = FUNC_13(VAR_34, VAR_41++, VAR_36, 0x0007);
   if (VAR_38 < 0) {
    FUNC_2(VAR_34->net, "Error writing wakeup filter\n");
    goto done;
   }
  }

  if (VAR_35->wolopts & VAR_13) {
   const u8 VAR_43[] = {0x08, 0x06};
   FUNC_1(VAR_34->net, "enabling ARP detection\n");

   VAR_36 = VAR_30 | VAR_28 | (0x0C << 16)
    | FUNC_14(VAR_43, 2);
   VAR_38 = FUNC_13(VAR_34, VAR_41++, VAR_36, 0x0003);
   if (VAR_38 < 0) {
    FUNC_2(VAR_34->net, "Error writing wakeup filter\n");
    goto done;
   }
  }


  VAR_38 = FUNC_11(VAR_34, VAR_19, &VAR_36);
  if (VAR_38 < 0) {
   FUNC_2(VAR_34->net, "Error reading WUCSR\n");
   goto done;
  }

  VAR_36 |= VAR_26;

  VAR_38 = FUNC_12(VAR_34, VAR_19, VAR_36);
  if (VAR_38 < 0) {
   FUNC_2(VAR_34->net, "Error writing WUCSR\n");
   goto done;
  }

  FUNC_1(VAR_34->net, "enabling packet match detection\n");
  VAR_38 = FUNC_11(VAR_34, VAR_19, &VAR_36);
  if (VAR_38 < 0) {
   FUNC_2(VAR_34->net, "Error reading WUCSR\n");
   goto done;
  }

  VAR_36 |= VAR_25;

  VAR_38 = FUNC_12(VAR_34, VAR_19, VAR_36);
  if (VAR_38 < 0) {
   FUNC_2(VAR_34->net, "Error writing WUCSR\n");
   goto done;
  }
 } else {
  FUNC_1(VAR_34->net, "disabling packet match detection\n");
  VAR_38 = FUNC_11(VAR_34, VAR_19, &VAR_36);
  if (VAR_38 < 0) {
   FUNC_2(VAR_34->net, "Error reading WUCSR\n");
   goto done;
  }

  VAR_36 &= ~VAR_25;

  VAR_38 = FUNC_12(VAR_34, VAR_19, VAR_36);
  if (VAR_38 < 0) {
   FUNC_2(VAR_34->net, "Error writing WUCSR\n");
   goto done;
  }
 }


 VAR_38 = FUNC_11(VAR_34, VAR_19, &VAR_36);
 if (VAR_38 < 0) {
  FUNC_2(VAR_34->net, "Error reading WUCSR\n");
  goto done;
 }

 VAR_36 &= ~(VAR_22 | VAR_21 | VAR_24);

 VAR_38 = FUNC_12(VAR_34, VAR_19, VAR_36);
 if (VAR_38 < 0) {
  FUNC_2(VAR_34->net, "Error writing WUCSR\n");
  goto done;
 }

 if (VAR_35->wolopts & VAR_17) {
  FUNC_1(VAR_34->net, "enabling PHY wakeup\n");

  VAR_38 = FUNC_11(VAR_34, VAR_6, &VAR_36);
  if (VAR_38 < 0) {
   FUNC_2(VAR_34->net, "Error reading PMT_CTL\n");
   goto done;
  }


  VAR_36 &= ~VAR_9;
  VAR_36 |= (VAR_10 | VAR_7);

  VAR_38 = FUNC_12(VAR_34, VAR_6, VAR_36);
  if (VAR_38 < 0) {
   FUNC_2(VAR_34->net, "Error writing PMT_CTL\n");
   goto done;
  }
 }

 if (VAR_35->wolopts & VAR_15) {
  FUNC_1(VAR_34->net, "enabling magic packet wakeup\n");
  VAR_38 = FUNC_11(VAR_34, VAR_19, &VAR_36);
  if (VAR_38 < 0) {
   FUNC_2(VAR_34->net, "Error reading WUCSR\n");
   goto done;
  }


  VAR_36 |= VAR_23 | VAR_22;

  VAR_38 = FUNC_12(VAR_34, VAR_19, VAR_36);
  if (VAR_38 < 0) {
   FUNC_2(VAR_34->net, "Error writing WUCSR\n");
   goto done;
  }
 }

 if (VAR_35->wolopts & VAR_14) {
  FUNC_1(VAR_34->net, "enabling broadcast detection\n");
  VAR_38 = FUNC_11(VAR_34, VAR_19, &VAR_36);
  if (VAR_38 < 0) {
   FUNC_2(VAR_34->net, "Error reading WUCSR\n");
   goto done;
  }

  VAR_36 |= VAR_20 | VAR_21;

  VAR_38 = FUNC_12(VAR_34, VAR_19, VAR_36);
  if (VAR_38 < 0) {
   FUNC_2(VAR_34->net, "Error writing WUCSR\n");
   goto done;
  }
 }

 if (VAR_35->wolopts & VAR_18) {
  FUNC_1(VAR_34->net, "enabling unicast detection\n");
  VAR_38 = FUNC_11(VAR_34, VAR_19, &VAR_36);
  if (VAR_38 < 0) {
   FUNC_2(VAR_34->net, "Error reading WUCSR\n");
   goto done;
  }

  VAR_36 |= VAR_26 | VAR_24;

  VAR_38 = FUNC_12(VAR_34, VAR_19, VAR_36);
  if (VAR_38 < 0) {
   FUNC_2(VAR_34->net, "Error writing WUCSR\n");
   goto done;
  }
 }


 VAR_38 = FUNC_11(VAR_34, VAR_0, &VAR_36);
 if (VAR_38 < 0) {
  FUNC_2(VAR_34->net, "Failed to read MAC_RX: %d\n", VAR_38);
  goto done;
 }

 VAR_36 |= VAR_1;

 VAR_38 = FUNC_12(VAR_34, VAR_0, VAR_36);
 if (VAR_38 < 0) {
  FUNC_2(VAR_34->net, "Failed to write MAC_RX: %d\n", VAR_38);
  goto done;
 }


 FUNC_1(VAR_34->net, "entering SUSPEND0 mode\n");
 VAR_38 = FUNC_5(VAR_34);

done:




 if (VAR_38 && FUNC_0(VAR_33))
  FUNC_16(VAR_32);
 return VAR_38;
}
