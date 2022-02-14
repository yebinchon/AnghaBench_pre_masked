
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_2__ {int iManufacturer; int iProduct; int iSerialNumber; } ;
struct usb_device {TYPE_1__ descriptor; } ;
struct us_data {char* protocol_name; int proto_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct usb_device_id const* VAR_3 ;
 struct usb_device* FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (struct us_data**,struct usb_interface*,struct usb_device_id const*,int,int *) ;
 int FUNC_2 (struct us_data*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(struct usb_interface *VAR_5,
    const struct usb_device_id *VAR_6)
{
 struct us_data *VAR_7;
 int VAR_8;
 struct usb_device *VAR_9;

 VAR_8 = FUNC_1(&VAR_7, VAR_5, VAR_6,
   (VAR_6 - VAR_3) + VAR_2,
   &VAR_1);
 if (VAR_8)
  return VAR_8;





 VAR_9 = FUNC_0(VAR_5);
 if (VAR_9->descriptor.iManufacturer != 0x38 ||
     VAR_9->descriptor.iProduct != 0x4e ||
     VAR_9->descriptor.iSerialNumber != 0x64) {
  VAR_7->protocol_name = "Transparent SCSI with Cypress ATACB";
  VAR_7->proto_handler = VAR_0;
 } else {
  VAR_7->protocol_name = "Transparent SCSI";
  VAR_7->proto_handler = VAR_4;
 }

 VAR_8 = FUNC_2(VAR_7);
 return VAR_8;
}
