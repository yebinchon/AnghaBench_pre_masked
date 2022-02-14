
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int is_selfpowered; } ;
struct r8a66597 {int device_status; } ;


 int VAR_0 ;
 struct r8a66597* FUNC_0 (struct usb_gadget*) ;

__attribute__((used)) static int FUNC_1(struct usb_gadget *VAR_1, int VAR_2)
{
 struct r8a66597 *VAR_3 = FUNC_0(VAR_1);

 VAR_1->is_selfpowered = (VAR_2 != 0);
 if (VAR_2)
  VAR_3->device_status |= 1 << VAR_0;
 else
  VAR_3->device_status &= ~(1 << VAR_0);

 return 0;
}
