
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct em28xx {int dummy; } ;
typedef int pm_message_t ;


 int FUNC_0 (struct em28xx*) ;
 struct em28xx* FUNC_1 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_2(struct usb_interface *VAR_0,
         pm_message_t VAR_1)
{
 struct em28xx *VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 if (!VAR_2)
  return 0;
 FUNC_0(VAR_2);
 return 0;
}
