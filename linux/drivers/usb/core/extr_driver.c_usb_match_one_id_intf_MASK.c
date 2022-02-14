
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ bInterfaceClass; scalar_t__ bInterfaceSubClass; scalar_t__ bInterfaceProtocol; scalar_t__ bInterfaceNumber; } ;
struct usb_host_interface {TYPE_2__ desc; } ;
struct usb_device_id {int match_flags; scalar_t__ bInterfaceClass; scalar_t__ bInterfaceSubClass; scalar_t__ bInterfaceProtocol; scalar_t__ bInterfaceNumber; } ;
struct TYPE_3__ {scalar_t__ bDeviceClass; } ;
struct usb_device {TYPE_1__ descriptor; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_0(struct usb_device *VAR_6,
     struct usb_host_interface *VAR_7,
     const struct usb_device_id *VAR_8)
{



 if (VAR_6->descriptor.bDeviceClass == VAR_0 &&
   !(VAR_8->match_flags & VAR_5) &&
   (VAR_8->match_flags & (VAR_1 |
    VAR_4 |
    VAR_3 |
    VAR_2)))
  return 0;

 if ((VAR_8->match_flags & VAR_1) &&
     (VAR_8->bInterfaceClass != VAR_7->desc.bInterfaceClass))
  return 0;

 if ((VAR_8->match_flags & VAR_4) &&
     (VAR_8->bInterfaceSubClass != VAR_7->desc.bInterfaceSubClass))
  return 0;

 if ((VAR_8->match_flags & VAR_3) &&
     (VAR_8->bInterfaceProtocol != VAR_7->desc.bInterfaceProtocol))
  return 0;

 if ((VAR_8->match_flags & VAR_2) &&
     (VAR_8->bInterfaceNumber != VAR_7->desc.bInterfaceNumber))
  return 0;

 return 1;
}
