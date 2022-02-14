
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhsg_gpriv {int vbus_active; } ;
struct usbhs_priv {int dummy; } ;
struct platform_device {int dummy; } ;


 struct usbhs_priv* FUNC_0 (struct platform_device*) ;
 struct usbhsg_gpriv* FUNC_1 (struct usbhs_priv*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct usbhs_priv *VAR_1 = FUNC_0(VAR_0);
 struct usbhsg_gpriv *VAR_2 = FUNC_1(VAR_1);

 return VAR_2->vbus_active;
}
