
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_otg_descriptor {int dummy; } ;
struct usb_otg20_descriptor {int dummy; } ;
struct usb_gadget {TYPE_1__* otg_caps; } ;
struct usb_descriptor_header {int dummy; } ;
struct TYPE_2__ {int otg_rev; } ;


 int VAR_0 ;
 struct usb_descriptor_header* FUNC_0 (unsigned int,int ) ;

struct usb_descriptor_header *FUNC_1(
    struct usb_gadget *VAR_1)
{
 struct usb_descriptor_header *VAR_2;
 unsigned VAR_3 = 0;

 if (VAR_1->otg_caps && (VAR_1->otg_caps->otg_rev >= 0x0200))
  VAR_3 = sizeof(struct usb_otg20_descriptor);
 else
  VAR_3 = sizeof(struct usb_otg_descriptor);

 VAR_2 = FUNC_0(VAR_3, VAR_0);
 return VAR_2;
}
