
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_priv {int notify_hotplug_work; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct usbhs_priv*,int ) ;
 struct usbhs_priv* FUNC_3 (struct platform_device*) ;

int FUNC_4(struct platform_device *VAR_1)
{
 struct usbhs_priv *VAR_2 = FUNC_3(VAR_1);
 int VAR_3 = FUNC_2(VAR_2, VAR_0);






 FUNC_1(&VAR_2->notify_hotplug_work,
         FUNC_0(VAR_3));
 return 0;
}
