
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bInterfaceClass; scalar_t__ bInterfaceSubClass; scalar_t__ bInterfaceProtocol; } ;
struct usb_host_interface {TYPE_1__ desc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(struct usb_host_interface *VAR_3)
{
 return (VAR_3->desc.bInterfaceClass == VAR_0 &&
  VAR_3->desc.bInterfaceSubClass == VAR_2 &&
  VAR_3->desc.bInterfaceProtocol == VAR_1);
}
