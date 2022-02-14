
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct usbnet {int net; scalar_t__* data; } ;
struct usb_interface {int dummy; } ;
struct smsc95xx_priv {int suspend_flags; int carrier_check; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct usbnet*,int ,int*) ;
 int FUNC_5 (struct usbnet*,int ,int) ;
 struct usbnet* FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_8(struct usb_interface *VAR_8)
{
 struct usbnet *VAR_9 = FUNC_6(VAR_8);
 struct smsc95xx_priv *VAR_10;
 u8 VAR_11;
 int VAR_12;
 u32 VAR_13;

 FUNC_0(!VAR_9);
 VAR_10 = (struct smsc95xx_priv *)(VAR_9->data[0]);
 VAR_11 = VAR_10->suspend_flags;

 FUNC_1(VAR_9->net, "resume suspend_flags=0x%02x\n", VAR_11);


 VAR_10->suspend_flags = 0;
 FUNC_3(&VAR_10->carrier_check, VAR_0);

 if (VAR_11 & VAR_4) {

  VAR_12 = FUNC_4(VAR_9, VAR_5, &VAR_13);
  if (VAR_12 < 0)
   return VAR_12;

  VAR_13 &= ~(VAR_7 | VAR_6);

  VAR_12 = FUNC_5(VAR_9, VAR_5, VAR_13);
  if (VAR_12 < 0)
   return VAR_12;


  VAR_12 = FUNC_4(VAR_9, VAR_3, &VAR_13);
  if (VAR_12 < 0)
   return VAR_12;

  VAR_13 &= ~VAR_1;
  VAR_13 |= VAR_2;

  VAR_12 = FUNC_5(VAR_9, VAR_3, VAR_13);
  if (VAR_12 < 0)
   return VAR_12;
 }

 VAR_12 = FUNC_7(VAR_8);
 if (VAR_12 < 0)
  FUNC_2(VAR_9->net, "usbnet_resume error\n");

 return VAR_12;
}
