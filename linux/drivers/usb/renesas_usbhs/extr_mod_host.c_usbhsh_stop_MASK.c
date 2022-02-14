
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhsh_hpriv {int dummy; } ;
struct usbhs_priv {int dummy; } ;
struct usbhs_mod {int * irq_sign; int * irq_sack; int * irq_dtch; int * irq_attch; } ;
struct usb_hcd {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (struct usbhs_priv*,struct usbhs_mod*) ;
 struct usbhs_mod* FUNC_3 (struct usbhs_priv*) ;
 struct device* FUNC_4 (struct usbhs_priv*) ;
 int FUNC_5 (struct usbhs_priv*,int ) ;
 struct usb_hcd* FUNC_6 (struct usbhsh_hpriv*) ;
 struct usbhsh_hpriv* FUNC_7 (struct usbhs_priv*) ;

__attribute__((used)) static int FUNC_8(struct usbhs_priv *VAR_0)
{
 struct usbhsh_hpriv *VAR_1 = FUNC_7(VAR_0);
 struct usb_hcd *VAR_2 = FUNC_6(VAR_1);
 struct usbhs_mod *VAR_3 = FUNC_3(VAR_0);
 struct device *VAR_4 = FUNC_4(VAR_0);




 VAR_3->irq_attch = ((void*)0);
 VAR_3->irq_dtch = ((void*)0);
 VAR_3->irq_sack = ((void*)0);
 VAR_3->irq_sign = ((void*)0);
 FUNC_2(VAR_0, VAR_3);

 FUNC_1(VAR_2);


 FUNC_5(VAR_0, 0);

 FUNC_0(VAR_4, "quit host\n");

 return 0;
}
