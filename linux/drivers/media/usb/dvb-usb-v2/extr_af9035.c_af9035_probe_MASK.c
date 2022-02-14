
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_2__ {int idProduct; int idVendor; int iManufacturer; } ;
struct usb_device {int dev; TYPE_1__ descriptor; } ;
typedef int manufacturer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct usb_interface*,struct usb_device_id const*) ;
 struct usb_device* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (struct usb_device*,int ,char*,int) ;

__attribute__((used)) static int FUNC_7(struct usb_interface *VAR_2,
  const struct usb_device_id *VAR_3)
{
 struct usb_device *VAR_4 = FUNC_2(VAR_2);
 char VAR_5[sizeof("Afatech")];

 FUNC_4(VAR_5, 0, sizeof(VAR_5));
 FUNC_6(VAR_4, VAR_4->descriptor.iManufacturer,
   VAR_5, sizeof(VAR_5));
 if ((FUNC_3(VAR_4->descriptor.idVendor) == VAR_1) &&
   (FUNC_3(VAR_4->descriptor.idProduct) == 0x0099)) {
  if (!FUNC_5("Afatech", VAR_5)) {
   FUNC_0(&VAR_4->dev, "rejecting device\n");
   return -VAR_0;
  }
 }

 return FUNC_1(VAR_2, VAR_3);
}
