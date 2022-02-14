
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device_id {int match_flags; scalar_t__ idVendor; scalar_t__ idProduct; scalar_t__ bcdDevice_lo; scalar_t__ bcdDevice_hi; scalar_t__ bDeviceClass; scalar_t__ bDeviceSubClass; scalar_t__ bDeviceProtocol; } ;
struct TYPE_2__ {scalar_t__ bDeviceClass; scalar_t__ bDeviceSubClass; scalar_t__ bDeviceProtocol; int bcdDevice; int idProduct; int idVendor; } ;
struct usb_device {TYPE_1__ descriptor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;

int FUNC_1(struct usb_device *VAR_7, const struct usb_device_id *VAR_8)
{
 if ((VAR_8->match_flags & VAR_6) &&
     VAR_8->idVendor != FUNC_0(VAR_7->descriptor.idVendor))
  return 0;

 if ((VAR_8->match_flags & VAR_5) &&
     VAR_8->idProduct != FUNC_0(VAR_7->descriptor.idProduct))
  return 0;



 if ((VAR_8->match_flags & VAR_2) &&
     (VAR_8->bcdDevice_lo > FUNC_0(VAR_7->descriptor.bcdDevice)))
  return 0;

 if ((VAR_8->match_flags & VAR_1) &&
     (VAR_8->bcdDevice_hi < FUNC_0(VAR_7->descriptor.bcdDevice)))
  return 0;

 if ((VAR_8->match_flags & VAR_0) &&
     (VAR_8->bDeviceClass != VAR_7->descriptor.bDeviceClass))
  return 0;

 if ((VAR_8->match_flags & VAR_4) &&
     (VAR_8->bDeviceSubClass != VAR_7->descriptor.bDeviceSubClass))
  return 0;

 if ((VAR_8->match_flags & VAR_3) &&
     (VAR_8->bDeviceProtocol != VAR_7->descriptor.bDeviceProtocol))
  return 0;

 return 1;
}
