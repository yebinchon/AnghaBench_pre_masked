
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct kvaser_usb {int dummy; } ;


 int FUNC_0 (struct kvaser_usb*) ;
 struct kvaser_usb* FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_3(struct usb_interface *VAR_0)
{
 struct kvaser_usb *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_0, ((void*)0));

 if (!VAR_1)
  return;

 FUNC_0(VAR_1);
}
