
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct imon {int ir_urb; } ;


 int FUNC_0 (int ) ;
 struct imon* FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct usb_interface *VAR_0)
{
 struct imon *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1->ir_urb);
 FUNC_0(VAR_1->ir_urb);
}
