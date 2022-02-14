
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbhsh_hpriv {int dummy; } ;
struct usbhs_priv {int dummy; } ;
struct usbhs_mod {int irq_sign; int irq_sack; int irq_dtch; int irq_attch; } ;
struct TYPE_2__ {int controller; } ;
struct usb_hcd {TYPE_1__ self; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct usb_hcd*,int ,int ) ;
 int FUNC_3 (struct usbhs_priv*) ;
 int FUNC_4 (struct usbhs_priv*,struct usbhs_mod*) ;
 struct usbhs_mod* FUNC_5 (struct usbhs_priv*) ;
 int FUNC_6 (struct usbhs_priv*,int ) ;
 struct device* FUNC_7 (struct usbhs_priv*) ;
 int FUNC_8 (struct usbhs_priv*,int) ;
 int VAR_0 ;
 struct usb_hcd* FUNC_9 (struct usbhsh_hpriv*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (struct usbhs_priv*) ;
 struct usbhsh_hpriv* FUNC_11 (struct usbhs_priv*) ;

__attribute__((used)) static int FUNC_12(struct usbhs_priv *VAR_5)
{
 struct usbhsh_hpriv *VAR_6 = FUNC_11(VAR_5);
 struct usb_hcd *VAR_7 = FUNC_9(VAR_6);
 struct usbhs_mod *VAR_8 = FUNC_5(VAR_5);
 struct device *VAR_9 = FUNC_7(VAR_5);
 int VAR_10;


 VAR_10 = FUNC_2(VAR_7, 0, 0);
 if (VAR_10 < 0)
  return 0;
 FUNC_1(VAR_7->self.controller);




 FUNC_3(VAR_5);
 FUNC_6(VAR_5,
   VAR_0);
 FUNC_10(VAR_5);







 FUNC_8(VAR_5, 1);




 VAR_8->irq_attch = VAR_1;
 VAR_8->irq_dtch = VAR_2;
 VAR_8->irq_sack = VAR_3;
 VAR_8->irq_sign = VAR_4;
 FUNC_4(VAR_5, VAR_8);

 FUNC_0(VAR_9, "start host\n");

 return VAR_10;
}
