
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct nbu2ss_udc {int linux_suspended; scalar_t__ usb_suspended; int devstate; scalar_t__ vbus_active; } ;
typedef int pm_message_t ;


 int VAR_0 ;
 int FUNC_0 (struct nbu2ss_udc*) ;
 int FUNC_1 (struct nbu2ss_udc*) ;
 int FUNC_2 (struct nbu2ss_udc*) ;
 struct nbu2ss_udc* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1, pm_message_t VAR_2)
{
 struct nbu2ss_udc *VAR_3;

 VAR_3 = FUNC_3(VAR_1);
 if (!VAR_3)
  return 0;

 if (VAR_3->vbus_active) {
  VAR_3->vbus_active = 0;
  VAR_3->devstate = VAR_0;
  VAR_3->linux_suspended = 1;

  if (VAR_3->usb_suspended) {
   VAR_3->usb_suspended = 0;
   FUNC_2(VAR_3);
  }

  FUNC_1(VAR_3);
 }
 FUNC_0(VAR_3);

 return 0;
}
