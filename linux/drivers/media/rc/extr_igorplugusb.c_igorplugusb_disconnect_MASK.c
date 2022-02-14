
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct igorplugusb {int urb; int timer; int rc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct igorplugusb* FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_6(struct usb_interface *VAR_0)
{
 struct igorplugusb *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(VAR_1->rc);
 FUNC_0(&VAR_1->timer);
 FUNC_5(VAR_0, ((void*)0));
 FUNC_4(VAR_1->urb);
 FUNC_2(VAR_1->urb);
}
