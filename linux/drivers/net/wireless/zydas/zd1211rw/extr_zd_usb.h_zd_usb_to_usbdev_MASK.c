
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_usb {int intf; } ;
struct usb_device {int dummy; } ;


 struct usb_device* FUNC_0 (int ) ;

__attribute__((used)) static inline struct usb_device *FUNC_1(struct zd_usb *VAR_0)
{
 return FUNC_0(VAR_0->intf);
}
