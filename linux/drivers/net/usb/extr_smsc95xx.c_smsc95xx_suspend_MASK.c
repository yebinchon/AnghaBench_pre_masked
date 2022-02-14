
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct usbnet {TYPE_4__* net; scalar_t__* data; } ;
struct usb_interface {int dummy; } ;
struct smsc95xx_priv {int features; int wolopts; int carrier_check; scalar_t__ suspend_flags; } ;
struct TYPE_7__ {scalar_t__ event; } ;
typedef TYPE_1__ pm_message_t ;
typedef int offset ;
typedef int crc ;
typedef int command ;
struct TYPE_8__ {int const* dev_addr; } ;


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
 scalar_t__ FUNC_0 (TYPE_1__) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
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
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_1 (int *) ;
 int* FUNC_2 (int,int,int ) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int*,int ,int) ;
 int FUNC_5 (TYPE_4__*,char*) ;
 int FUNC_6 (TYPE_4__*,char*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (struct usbnet*,int) ;
 int FUNC_9 (struct usbnet*,int) ;
 int FUNC_10 (struct usbnet*) ;
 int FUNC_11 (struct usbnet*) ;
 int FUNC_12 (struct usbnet*) ;
 int FUNC_13 (struct usbnet*) ;
 int FUNC_14 (struct usbnet*,int ,int*) ;
 int FUNC_15 (struct usbnet*,int) ;
 int FUNC_16 (struct usbnet*,int ,int) ;
 int FUNC_17 (int const*,int,int) ;
 struct usbnet* FUNC_18 (struct usb_interface*) ;
 int FUNC_19 (struct usb_interface*) ;
 int FUNC_20 (struct usb_interface*,TYPE_1__) ;

__attribute__((used)) static int FUNC_21(struct usb_interface *VAR_27, pm_message_t VAR_28)
{
 struct usbnet *VAR_29 = FUNC_18(VAR_27);
 struct smsc95xx_priv *VAR_30 = (struct smsc95xx_priv *)(VAR_29->data[0]);
 u32 VAR_31, VAR_32;
 int VAR_33;

 VAR_33 = FUNC_20(VAR_27, VAR_28);
 if (VAR_33 < 0) {
  FUNC_6(VAR_29->net, "usbnet_suspend error\n");
  return VAR_33;
 }

 FUNC_1(&VAR_30->carrier_check);

 if (VAR_30->suspend_flags) {
  FUNC_6(VAR_29->net, "error during last resume\n");
  VAR_30->suspend_flags = 0;
 }


 VAR_32 = FUNC_13(VAR_29);

 if (VAR_28.event == VAR_13 &&
     (VAR_30->features & VAR_4)) {
  VAR_33 = FUNC_8(VAR_29, VAR_32);
  goto done;
 }





 if (!(VAR_30->wolopts & VAR_14) ||
  !(VAR_32 || (VAR_30->wolopts & VAR_19))) {
  FUNC_5(VAR_29->net, "entering SUSPEND2 mode\n");


  VAR_33 = FUNC_14(VAR_29, VAR_21, &VAR_31);
  if (VAR_33 < 0)
   goto done;

  VAR_31 &= ~(VAR_22 | VAR_24);

  VAR_33 = FUNC_16(VAR_29, VAR_21, VAR_31);
  if (VAR_33 < 0)
   goto done;

  VAR_33 = FUNC_14(VAR_29, VAR_12, &VAR_31);
  if (VAR_33 < 0)
   goto done;

  VAR_31 &= ~(VAR_10 | VAR_11);

  VAR_33 = FUNC_16(VAR_29, VAR_12, VAR_31);
  if (VAR_33 < 0)
   goto done;

  VAR_33 = FUNC_12(VAR_29);
  goto done;
 }

 if (VAR_30->wolopts & VAR_19) {
  VAR_33 = FUNC_9(VAR_29,
   (VAR_8 | VAR_9));
  if (VAR_33 < 0) {
   FUNC_6(VAR_29->net, "error enabling PHY wakeup ints\n");
   goto done;
  }




  if (!VAR_32) {
   FUNC_5(VAR_29->net, "entering SUSPEND1 mode\n");
   VAR_33 = FUNC_11(VAR_29);
   goto done;
  }
 }

 if (VAR_30->wolopts & (VAR_16 | VAR_18 | VAR_15 | VAR_20)) {
  u32 *VAR_34 = FUNC_2(32, sizeof(u32), VAR_5);
  u32 VAR_35[2];
  u32 VAR_36[2];
  u32 VAR_37[4];
  int VAR_38 =
   (VAR_30->features & VAR_3) ?
   VAR_6 : VAR_7;
  int VAR_39, VAR_40 = 0;

  if (!VAR_34) {
   FUNC_6(VAR_29->net, "Unable to allocate filter_mask\n");
   VAR_33 = -VAR_1;
   goto done;
  }

  FUNC_4(VAR_35, 0, sizeof(VAR_35));
  FUNC_4(VAR_36, 0, sizeof(VAR_36));
  FUNC_4(VAR_37, 0, sizeof(VAR_37));

  if (VAR_30->wolopts & VAR_16) {
   const u8 VAR_41[] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};
   FUNC_5(VAR_29->net, "enabling broadcast detection\n");
   VAR_34[VAR_40 * 4] = 0x003F;
   VAR_34[VAR_40 * 4 + 1] = 0x00;
   VAR_34[VAR_40 * 4 + 2] = 0x00;
   VAR_34[VAR_40 * 4 + 3] = 0x00;
   VAR_35[VAR_40/4] |= 0x05UL << ((VAR_40 % 4) * 8);
   VAR_36[VAR_40/4] |= 0x00 << ((VAR_40 % 4) * 8);
   VAR_37[VAR_40/2] |= FUNC_17(VAR_41, 6, VAR_40);
   VAR_40++;
  }

  if (VAR_30->wolopts & VAR_18) {
   const u8 VAR_42[] = {0x01, 0x00, 0x5E};
   FUNC_5(VAR_29->net, "enabling multicast detection\n");
   VAR_34[VAR_40 * 4] = 0x0007;
   VAR_34[VAR_40 * 4 + 1] = 0x00;
   VAR_34[VAR_40 * 4 + 2] = 0x00;
   VAR_34[VAR_40 * 4 + 3] = 0x00;
   VAR_35[VAR_40/4] |= 0x09UL << ((VAR_40 % 4) * 8);
   VAR_36[VAR_40/4] |= 0x00 << ((VAR_40 % 4) * 8);
   VAR_37[VAR_40/2] |= FUNC_17(VAR_42, 3, VAR_40);
   VAR_40++;
  }

  if (VAR_30->wolopts & VAR_15) {
   const u8 VAR_43[] = {0x08, 0x06};
   FUNC_5(VAR_29->net, "enabling ARP detection\n");
   VAR_34[VAR_40 * 4] = 0x0003;
   VAR_34[VAR_40 * 4 + 1] = 0x00;
   VAR_34[VAR_40 * 4 + 2] = 0x00;
   VAR_34[VAR_40 * 4 + 3] = 0x00;
   VAR_35[VAR_40/4] |= 0x05UL << ((VAR_40 % 4) * 8);
   VAR_36[VAR_40/4] |= 0x0C << ((VAR_40 % 4) * 8);
   VAR_37[VAR_40/2] |= FUNC_17(VAR_43, 2, VAR_40);
   VAR_40++;
  }

  if (VAR_30->wolopts & VAR_20) {
   FUNC_5(VAR_29->net, "enabling unicast detection\n");
   VAR_34[VAR_40 * 4] = 0x003F;
   VAR_34[VAR_40 * 4 + 1] = 0x00;
   VAR_34[VAR_40 * 4 + 2] = 0x00;
   VAR_34[VAR_40 * 4 + 3] = 0x00;
   VAR_35[VAR_40/4] |= 0x01UL << ((VAR_40 % 4) * 8);
   VAR_36[VAR_40/4] |= 0x00 << ((VAR_40 % 4) * 8);
   VAR_37[VAR_40/2] |= FUNC_17(VAR_29->net->dev_addr, VAR_2, VAR_40);
   VAR_40++;
  }

  for (VAR_39 = 0; VAR_39 < (VAR_38 * 4); VAR_39++) {
   VAR_33 = FUNC_16(VAR_29, VAR_26, VAR_34[VAR_39]);
   if (VAR_33 < 0) {
    FUNC_3(VAR_34);
    goto done;
   }
  }
  FUNC_3(VAR_34);

  for (VAR_39 = 0; VAR_39 < (VAR_38 / 4); VAR_39++) {
   VAR_33 = FUNC_16(VAR_29, VAR_26, VAR_35[VAR_39]);
   if (VAR_33 < 0)
    goto done;
  }

  for (VAR_39 = 0; VAR_39 < (VAR_38 / 4); VAR_39++) {
   VAR_33 = FUNC_16(VAR_29, VAR_26, VAR_36[VAR_39]);
   if (VAR_33 < 0)
    goto done;
  }

  for (VAR_39 = 0; VAR_39 < (VAR_38 / 2); VAR_39++) {
   VAR_33 = FUNC_16(VAR_29, VAR_26, VAR_37[VAR_39]);
   if (VAR_33 < 0)
    goto done;
  }


  VAR_33 = FUNC_14(VAR_29, VAR_21, &VAR_31);
  if (VAR_33 < 0)
   goto done;

  VAR_31 |= VAR_25;

  VAR_33 = FUNC_16(VAR_29, VAR_21, VAR_31);
  if (VAR_33 < 0)
   goto done;
 }

 if (VAR_30->wolopts & VAR_17) {

  VAR_33 = FUNC_14(VAR_29, VAR_21, &VAR_31);
  if (VAR_33 < 0)
   goto done;

  VAR_31 |= VAR_23;

  VAR_33 = FUNC_16(VAR_29, VAR_21, VAR_31);
  if (VAR_33 < 0)
   goto done;
 }


 VAR_33 = FUNC_14(VAR_29, VAR_21, &VAR_31);
 if (VAR_33 < 0)
  goto done;

 if (VAR_30->wolopts & (VAR_16 | VAR_18 | VAR_15 | VAR_20)) {
  FUNC_5(VAR_29->net, "enabling pattern match wakeup\n");
  VAR_31 |= VAR_24;
 } else {
  FUNC_5(VAR_29->net, "disabling pattern match wakeup\n");
  VAR_31 &= ~VAR_24;
 }

 if (VAR_30->wolopts & VAR_17) {
  FUNC_5(VAR_29->net, "enabling magic packet wakeup\n");
  VAR_31 |= VAR_22;
 } else {
  FUNC_5(VAR_29->net, "disabling magic packet wakeup\n");
  VAR_31 &= ~VAR_22;
 }

 VAR_33 = FUNC_16(VAR_29, VAR_21, VAR_31);
 if (VAR_33 < 0)
  goto done;


 VAR_33 = FUNC_14(VAR_29, VAR_12, &VAR_31);
 if (VAR_33 < 0)
  goto done;

 VAR_31 |= VAR_11;


 if (VAR_30->wolopts & VAR_19)
  VAR_31 |= VAR_10;

 VAR_33 = FUNC_16(VAR_29, VAR_12, VAR_31);
 if (VAR_33 < 0)
  goto done;


 FUNC_15(VAR_29, 1);


 FUNC_5(VAR_29->net, "entering SUSPEND0 mode\n");
 VAR_33 = FUNC_10(VAR_29);

done:




 if (VAR_33 && FUNC_0(VAR_28))
  FUNC_19(VAR_27);

 if (VAR_33)
  FUNC_7(&VAR_30->carrier_check,
          VAR_0);

 return VAR_33;
}
