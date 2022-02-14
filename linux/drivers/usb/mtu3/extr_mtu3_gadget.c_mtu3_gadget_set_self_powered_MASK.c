
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int dummy; } ;
struct mtu3 {int is_self_powered; } ;


 struct mtu3* FUNC_0 (struct usb_gadget*) ;

__attribute__((used)) static int FUNC_1(struct usb_gadget *VAR_0,
  int VAR_1)
{
 struct mtu3 *VAR_2 = FUNC_0(VAR_0);

 VAR_2->is_self_powered = !!VAR_1;
 return 0;
}
