
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhsg_uep {int dummy; } ;
struct usbhsg_gpriv {int dummy; } ;
struct usbhs_priv {int dummy; } ;
struct usbhs_pipe {int dummy; } ;
struct usb_ep {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct usbhs_pipe*) ;
 int FUNC_1 (struct device*,char*,int,int ) ;
 int FUNC_2 (struct usbhs_priv*,unsigned long) ;
 scalar_t__ FUNC_3 (struct usbhs_pipe*) ;
 int FUNC_4 (struct usbhs_pipe*) ;
 int FUNC_5 (struct usbhs_pipe*) ;
 int FUNC_6 (struct usbhs_pipe*) ;
 int FUNC_7 (struct usbhs_pipe*) ;
 int FUNC_8 (struct usbhs_priv*,unsigned long) ;
 struct usbhsg_uep* FUNC_9 (struct usb_ep*) ;
 struct device* FUNC_10 (struct usbhsg_gpriv*) ;
 struct usbhs_priv* FUNC_11 (struct usbhsg_gpriv*) ;
 int FUNC_12 (struct usbhsg_gpriv*,int ) ;
 int FUNC_13 (struct usbhsg_gpriv*,int ) ;
 struct usbhsg_gpriv* FUNC_14 (struct usbhsg_uep*) ;
 struct usbhs_pipe* FUNC_15 (struct usbhsg_uep*) ;

__attribute__((used)) static int FUNC_16(struct usb_ep *VAR_2, int VAR_3, int VAR_4)
{
 struct usbhsg_uep *VAR_5 = FUNC_9(VAR_2);
 struct usbhs_pipe *VAR_6 = FUNC_15(VAR_5);
 struct usbhsg_gpriv *VAR_7 = FUNC_14(VAR_5);
 struct usbhs_priv *VAR_8 = FUNC_11(VAR_7);
 struct device *VAR_9 = FUNC_10(VAR_7);
 unsigned long VAR_10;
 int VAR_11 = 0;

 FUNC_1(VAR_9, "set halt %d (pipe %d)\n",
  VAR_3, FUNC_6(VAR_6));


 FUNC_2(VAR_8, VAR_10);







 if (!FUNC_5(VAR_6) && (FUNC_0(VAR_6) ||
     FUNC_3(VAR_6))) {
  VAR_11 = -VAR_0;
  goto out;
 }

 if (VAR_3)
  FUNC_7(VAR_6);
 else
  FUNC_4(VAR_6);

 if (VAR_3 && VAR_4)
  FUNC_13(VAR_7, VAR_1);
 else
  FUNC_12(VAR_7, VAR_1);

out:
 FUNC_8(VAR_8, VAR_10);


 return VAR_11;
}
