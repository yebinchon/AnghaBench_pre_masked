
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct usbnet {int net; scalar_t__* data; } ;
struct usb_interface {int dummy; } ;
struct smsc75xx_priv {int suspend_flags; } ;


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
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct usbnet*,int ,int*) ;
 int FUNC_4 (struct usbnet*,int) ;
 int FUNC_5 (struct usbnet*,int ,int) ;
 struct usbnet* FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_8(struct usb_interface *VAR_11)
{
 struct usbnet *VAR_12 = FUNC_6(VAR_11);
 struct smsc75xx_priv *VAR_13 = (struct smsc75xx_priv *)(VAR_12->data[0]);
 u8 VAR_14 = VAR_13->suspend_flags;
 int VAR_15;
 u32 VAR_16;

 FUNC_0(VAR_12->net, "resume suspend_flags=0x%02x\n", VAR_14);


 VAR_13->suspend_flags = 0;

 if (VAR_14 & VAR_4) {

  VAR_15 = FUNC_3(VAR_12, VAR_6, &VAR_16);
  if (VAR_15 < 0) {
   FUNC_2(VAR_12->net, "Error reading WUCSR\n");
   return VAR_15;
  }

  VAR_16 &= ~(VAR_10 | VAR_8 | VAR_9
   | VAR_7);

  VAR_15 = FUNC_5(VAR_12, VAR_6, VAR_16);
  if (VAR_15 < 0) {
   FUNC_2(VAR_12->net, "Error writing WUCSR\n");
   return VAR_15;
  }


  VAR_15 = FUNC_3(VAR_12, VAR_0, &VAR_16);
  if (VAR_15 < 0) {
   FUNC_2(VAR_12->net, "Error reading PMT_CTL\n");
   return VAR_15;
  }

  VAR_16 &= ~VAR_2;
  VAR_16 |= VAR_3;

  VAR_15 = FUNC_5(VAR_12, VAR_0, VAR_16);
  if (VAR_15 < 0) {
   FUNC_2(VAR_12->net, "Error writing PMT_CTL\n");
   return VAR_15;
  }
 }

 if (VAR_14 & VAR_5) {
  FUNC_1(VAR_12->net, "resuming from SUSPEND2\n");

  VAR_15 = FUNC_3(VAR_12, VAR_0, &VAR_16);
  if (VAR_15 < 0) {
   FUNC_2(VAR_12->net, "Error reading PMT_CTL\n");
   return VAR_15;
  }

  VAR_16 |= VAR_1;

  VAR_15 = FUNC_5(VAR_12, VAR_0, VAR_16);
  if (VAR_15 < 0) {
   FUNC_2(VAR_12->net, "Error writing PMT_CTL\n");
   return VAR_15;
  }
 }

 VAR_15 = FUNC_4(VAR_12, 1);
 if (VAR_15 < 0) {
  FUNC_2(VAR_12->net, "device not ready in smsc75xx_resume\n");
  return VAR_15;
 }

 return FUNC_7(VAR_11);
}
