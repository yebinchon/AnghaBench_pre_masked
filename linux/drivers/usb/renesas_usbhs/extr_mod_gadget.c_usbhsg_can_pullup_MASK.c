
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhsg_gpriv {scalar_t__ driver; } ;
struct usbhs_priv {int dummy; } ;


 int VAR_0 ;
 struct usbhsg_gpriv* FUNC_0 (struct usbhs_priv*) ;
 scalar_t__ FUNC_1 (struct usbhsg_gpriv*,int ) ;

__attribute__((used)) static int FUNC_2(struct usbhs_priv *VAR_1)
{
 struct usbhsg_gpriv *VAR_2 = FUNC_0(VAR_1);

 return VAR_2->driver &&
        FUNC_1(VAR_2, VAR_0);
}
