
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhsg_gpriv {struct usbhsg_gpriv* uep; int gadget; } ;
struct usbhs_priv {int dummy; } ;


 int FUNC_0 (struct usbhsg_gpriv*) ;
 int FUNC_1 (int *) ;
 struct usbhsg_gpriv* FUNC_2 (struct usbhs_priv*) ;

void FUNC_3(struct usbhs_priv *VAR_0)
{
 struct usbhsg_gpriv *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(&VAR_1->gadget);

 FUNC_0(VAR_1->uep);
 FUNC_0(VAR_1);
}
