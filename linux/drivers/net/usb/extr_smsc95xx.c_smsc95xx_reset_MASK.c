
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ulong ;
typedef int u32 ;
struct usbnet {int rx_urb_size; TYPE_2__* net; TYPE_1__* udev; scalar_t__* data; } ;
struct smsc95xx_priv {int mac_cr; } ;
struct TYPE_7__ {int features; int dev_addr; } ;
struct TYPE_6__ {scalar_t__ speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
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
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (struct usbnet*,int ,TYPE_2__*,char*,...) ;
 int FUNC_3 (struct usbnet*) ;
 int FUNC_4 (struct usbnet*,int ,int*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (struct usbnet*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (struct usbnet*,int ) ;
 int FUNC_9 (struct usbnet*) ;
 int FUNC_10 (struct usbnet*,int ,int) ;
 scalar_t__ VAR_34 ;

__attribute__((used)) static int FUNC_11(struct usbnet *VAR_35)
{
 struct smsc95xx_priv *VAR_36 = (struct smsc95xx_priv *)(VAR_35->data[0]);
 u32 VAR_37, VAR_38, VAR_39;
 int VAR_40 = 0, VAR_41;

 FUNC_2(VAR_35, VAR_33, VAR_35->net, "entering smsc95xx_reset\n");

 VAR_40 = FUNC_10(VAR_35, VAR_11, VAR_14);
 if (VAR_40 < 0)
  return VAR_40;

 VAR_41 = 0;
 do {
  FUNC_0(10);
  VAR_40 = FUNC_4(VAR_35, VAR_11, &VAR_37);
  if (VAR_40 < 0)
   return VAR_40;
  VAR_41++;
 } while ((VAR_37 & VAR_14) && (VAR_41 < 100));

 if (VAR_41 >= 100) {
  FUNC_1(VAR_35->net, "timeout waiting for completion of Lite Reset\n");
  return VAR_40;
 }

 VAR_40 = FUNC_10(VAR_35, VAR_30, VAR_29);
 if (VAR_40 < 0)
  return VAR_40;

 VAR_41 = 0;
 do {
  FUNC_0(10);
  VAR_40 = FUNC_4(VAR_35, VAR_30, &VAR_37);
  if (VAR_40 < 0)
   return VAR_40;
  VAR_41++;
 } while ((VAR_37 & VAR_29) && (VAR_41 < 100));

 if (VAR_41 >= 100) {
  FUNC_1(VAR_35->net, "timeout waiting for PHY Reset\n");
  return VAR_40;
 }

 VAR_40 = FUNC_6(VAR_35);
 if (VAR_40 < 0)
  return VAR_40;

 FUNC_2(VAR_35, VAR_33, VAR_35->net, "MAC Address: %pM\n",
    VAR_35->net->dev_addr);

 VAR_40 = FUNC_4(VAR_35, VAR_11, &VAR_37);
 if (VAR_40 < 0)
  return VAR_40;

 FUNC_2(VAR_35, VAR_33, VAR_35->net, "Read Value from HW_CFG : 0x%08x\n",
    VAR_37);

 VAR_37 |= VAR_13;

 VAR_40 = FUNC_10(VAR_35, VAR_11, VAR_37);
 if (VAR_40 < 0)
  return VAR_40;

 VAR_40 = FUNC_4(VAR_35, VAR_11, &VAR_37);
 if (VAR_40 < 0)
  return VAR_40;

 FUNC_2(VAR_35, VAR_33, VAR_35->net,
    "Read Value from HW_CFG after writing HW_CFG_BIR_: 0x%08x\n",
    VAR_37);

 if (!VAR_34) {
  VAR_39 = 0;
  VAR_35->rx_urb_size = VAR_27;
 } else if (VAR_35->udev->speed == VAR_31) {
  VAR_39 = VAR_6 / VAR_10;
  VAR_35->rx_urb_size = VAR_6;
 } else {
  VAR_39 = VAR_5 / VAR_9;
  VAR_35->rx_urb_size = VAR_5;
 }

 FUNC_2(VAR_35, VAR_33, VAR_35->net, "rx_urb_size=%ld\n",
    (ulong)VAR_35->rx_urb_size);

 VAR_40 = FUNC_10(VAR_35, VAR_3, VAR_39);
 if (VAR_40 < 0)
  return VAR_40;

 VAR_40 = FUNC_4(VAR_35, VAR_3, &VAR_37);
 if (VAR_40 < 0)
  return VAR_40;

 FUNC_2(VAR_35, VAR_33, VAR_35->net,
    "Read Value from BURST_CAP after writing: 0x%08x\n",
    VAR_37);

 VAR_40 = FUNC_10(VAR_35, VAR_2, VAR_4);
 if (VAR_40 < 0)
  return VAR_40;

 VAR_40 = FUNC_4(VAR_35, VAR_2, &VAR_37);
 if (VAR_40 < 0)
  return VAR_40;

 FUNC_2(VAR_35, VAR_33, VAR_35->net,
    "Read Value from BULK_IN_DLY after writing: 0x%08x\n",
    VAR_37);

 VAR_40 = FUNC_4(VAR_35, VAR_11, &VAR_37);
 if (VAR_40 < 0)
  return VAR_40;

 FUNC_2(VAR_35, VAR_33, VAR_35->net, "Read Value from HW_CFG: 0x%08x\n",
    VAR_37);

 if (VAR_34)
  VAR_37 |= (VAR_15 | VAR_12);

 VAR_37 &= ~VAR_16;


 VAR_37 |= VAR_28 << 9;

 VAR_40 = FUNC_10(VAR_35, VAR_11, VAR_37);
 if (VAR_40 < 0)
  return VAR_40;

 VAR_40 = FUNC_4(VAR_35, VAR_11, &VAR_37);
 if (VAR_40 < 0)
  return VAR_40;

 FUNC_2(VAR_35, VAR_33, VAR_35->net,
    "Read Value from HW_CFG after writing: 0x%08x\n", VAR_37);

 VAR_40 = FUNC_10(VAR_35, VAR_20, VAR_21);
 if (VAR_40 < 0)
  return VAR_40;

 VAR_40 = FUNC_4(VAR_35, VAR_17, &VAR_37);
 if (VAR_40 < 0)
  return VAR_40;
 FUNC_2(VAR_35, VAR_33, VAR_35->net, "ID_REV = 0x%08x\n", VAR_37);


 VAR_38 = VAR_25 | VAR_24 |
  VAR_23;
 VAR_40 = FUNC_10(VAR_35, VAR_22, VAR_38);
 if (VAR_40 < 0)
  return VAR_40;


 VAR_40 = FUNC_10(VAR_35, VAR_8, 0);
 if (VAR_40 < 0)
  return VAR_40;

 VAR_40 = FUNC_10(VAR_35, VAR_0, VAR_1);
 if (VAR_40 < 0)
  return VAR_40;


 VAR_40 = FUNC_4(VAR_35, VAR_26, &VAR_36->mac_cr);
 if (VAR_40 < 0)
  return VAR_40;



 VAR_40 = FUNC_10(VAR_35, VAR_32, (u32)VAR_7);
 if (VAR_40 < 0)
  return VAR_40;


 VAR_40 = FUNC_5(VAR_35->net, VAR_35->net->features);
 if (VAR_40 < 0) {
  FUNC_1(VAR_35->net, "Failed to set checksum offload features\n");
  return VAR_40;
 }

 FUNC_7(VAR_35->net);

 VAR_40 = FUNC_3(VAR_35);
 if (VAR_40 < 0) {
  FUNC_1(VAR_35->net, "Failed to init PHY\n");
  return VAR_40;
 }

 VAR_40 = FUNC_4(VAR_35, VAR_18, &VAR_37);
 if (VAR_40 < 0)
  return VAR_40;


 VAR_37 |= VAR_19;

 VAR_40 = FUNC_10(VAR_35, VAR_18, VAR_37);
 if (VAR_40 < 0)
  return VAR_40;

 VAR_40 = FUNC_9(VAR_35);
 if (VAR_40 < 0) {
  FUNC_1(VAR_35->net, "Failed to start TX path\n");
  return VAR_40;
 }

 VAR_40 = FUNC_8(VAR_35, 0);
 if (VAR_40 < 0) {
  FUNC_1(VAR_35->net, "Failed to start RX path\n");
  return VAR_40;
 }

 FUNC_2(VAR_35, VAR_33, VAR_35->net, "smsc95xx_reset, return 0\n");
 return 0;
}
