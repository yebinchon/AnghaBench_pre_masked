
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int needs_remote_wakeup; } ;


 int FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_2(struct usb_interface *VAR_0, int VAR_1)
{

 int VAR_2 = FUNC_0(VAR_0);

 VAR_0->needs_remote_wakeup = VAR_1;
 if (!VAR_2)
  FUNC_1(VAR_0);
 return 0;
}
