
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device_id {int match_flags; int idVendor; int idProduct; int bcdDevice_lo; int bcdDevice_hi; scalar_t__ bDeviceClass; scalar_t__ bDeviceSubClass; scalar_t__ bDeviceProtocol; } ;
struct TYPE_2__ {scalar_t__ bDeviceClass; scalar_t__ bDeviceSubClass; scalar_t__ bDeviceProtocol; int idProduct; int idVendor; int bcdDevice; } ;
struct usb_device {TYPE_1__ descriptor; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int ) ;
 struct usb_device_id* VAR_7 ;

__attribute__((used)) static int FUNC_2(struct usb_device *VAR_8)
{
 struct usb_device_id *VAR_9 = VAR_7;


 if ((FUNC_1(VAR_8->descriptor.idVendor) == 0x1a0a &&
      FUNC_1(VAR_8->descriptor.idProduct) == 0xbadd))
  return 0;


 if ((FUNC_1(VAR_8->descriptor.idVendor) == 0x1a0a &&
      FUNC_1(VAR_8->descriptor.idProduct) == 0x0200))
  return 1;




 for (VAR_9 = VAR_7; VAR_9->match_flags; VAR_9++) {
  if ((VAR_9->match_flags & VAR_6) &&
      VAR_9->idVendor != FUNC_1(VAR_8->descriptor.idVendor))
   continue;

  if ((VAR_9->match_flags & VAR_5) &&
      VAR_9->idProduct != FUNC_1(VAR_8->descriptor.idProduct))
   continue;



  if ((VAR_9->match_flags & VAR_2) &&
      (VAR_9->bcdDevice_lo > FUNC_1(VAR_8->descriptor.bcdDevice)))
   continue;

  if ((VAR_9->match_flags & VAR_1) &&
      (VAR_9->bcdDevice_hi < FUNC_1(VAR_8->descriptor.bcdDevice)))
   continue;

  if ((VAR_9->match_flags & VAR_0) &&
      (VAR_9->bDeviceClass != VAR_8->descriptor.bDeviceClass))
   continue;

  if ((VAR_9->match_flags & VAR_4) &&
      (VAR_9->bDeviceSubClass != VAR_8->descriptor.bDeviceSubClass))
   continue;

  if ((VAR_9->match_flags & VAR_3) &&
      (VAR_9->bDeviceProtocol != VAR_8->descriptor.bDeviceProtocol))
   continue;

  return 1;
 }





 FUNC_0(&VAR_8->dev, "device v%04x p%04x is not supported\n",
  FUNC_1(VAR_8->descriptor.idVendor),
  FUNC_1(VAR_8->descriptor.idProduct));

 return 0;
}
