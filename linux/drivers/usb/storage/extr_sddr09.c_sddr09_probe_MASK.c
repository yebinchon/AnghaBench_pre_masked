
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct us_data {scalar_t__ protocol; char* transport_name; int max_lun; void* transport_reset; int transport; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct usb_device_id const* VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 (struct us_data**,struct usb_interface*,struct usb_device_id const*,int,int *) ;
 int FUNC_1 (struct us_data*) ;

__attribute__((used)) static int FUNC_2(struct usb_interface *VAR_7,
    const struct usb_device_id *VAR_8)
{
 struct us_data *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(&VAR_9, VAR_7, VAR_8,
   (VAR_8 - VAR_5) + VAR_4,
   &VAR_2);
 if (VAR_10)
  return VAR_10;

 if (VAR_9->protocol == VAR_0) {
  VAR_9->transport_name = "Control/Bulk-EUSB/SDDR09";
  VAR_9->transport = VAR_1;
  VAR_9->transport_reset = VAR_6;
  VAR_9->max_lun = 1;
 } else {
  VAR_9->transport_name = "EUSB/SDDR09";
  VAR_9->transport = VAR_3;
  VAR_9->transport_reset = VAR_6;
  VAR_9->max_lun = 0;
 }

 VAR_10 = FUNC_1(VAR_9);
 return VAR_10;
}
