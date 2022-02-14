
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbhsg_gpriv {int gadget; TYPE_1__* driver; } ;
struct usbhs_priv {int dummy; } ;
struct TYPE_2__ {int (* disconnect ) (int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct usbhsg_gpriv* FUNC_1 (struct usbhs_priv*) ;
 int FUNC_2 (struct usbhs_priv*,int ) ;

__attribute__((used)) static int FUNC_3(struct usbhs_priv *VAR_1)
{
 struct usbhsg_gpriv *VAR_2 = FUNC_1(VAR_1);


 if (VAR_2->driver &&
     VAR_2->driver->disconnect)
  VAR_2->driver->disconnect(&VAR_2->gadget);

 return FUNC_2(VAR_1, VAR_0);
}
