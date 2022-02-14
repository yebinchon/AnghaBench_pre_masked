
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_sevsegdev {scalar_t__ shadow_power; } ;
struct usb_interface {int dummy; } ;
typedef int pm_message_t ;


 struct usb_sevsegdev* FUNC_0 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_1(struct usb_interface *VAR_0, pm_message_t VAR_1)
{
 struct usb_sevsegdev *VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 VAR_2->shadow_power = 0;

 return 0;
}
